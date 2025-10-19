/**
 * @file Inventory.cpp
 * @author Dmitrii Murashev
 * @date 2025-10-18
 * @brief Implements the Inventory class that handles file I/O and item management.
 *
 * @details
 * The Inventory class provides static methods to:
 *  - Load grocery items from a text file (`inventory.txt`).
 *  - Generate a backup file (`frequency.dat`) with item frequencies.
 *  - Clean up dynamically allocated GroceryItem objects to prevent memory leaks.
 *
 * This class serves as the data layer for the Corner Grocer system, allowing
 * the program to reload and rebuild the in-memory map structure each time
 * the user interacts with the menu.
 *
 * @version 1.0
 * @note Course: CS-210 (Programming Languages)
 * @note Southern New Hampshire University
 */


#include "Inventory.h"
#include <fstream>
#include <iostream>

using namespace std;

// Loads items from the specified file into the map
void Inventory::LoadInventory(map<string, GroceryItem*>& items, const string& filename) {
	ifstream inFS(filename);    // Open the input file
	if (!inFS.is_open()) {  // Check if the file opened successfully
		cerr << "Error: Cannot open " << filename << endl;  // Error handling
        return;
    }

	string name;    // Variable to hold item names
	while (inFS >> name) {  // Read each item name from the file
		if (items.count(name) > 0) {        // If item already exists in the map
			items.at(name)->addItem();		// Increment its quantity
        }
		else {	// If item does not exist in the map
			GroceryItem* newItem = new GroceryItem(name);	// Create a new GroceryItem
			items.emplace(name, newItem);	// Add it to the map
        }
    }
	inFS.close();   // Close the file
}

// Writes item frequencies to file
void Inventory::WriteFrequencyFile(map<string, GroceryItem*>& items, const string& filename) {
    ofstream outFS(filename);
	for (map<string, GroceryItem*>::iterator it = items.begin(); it != items.end(); ++it) {    // Iterate through the map
		outFS << it->first << " " << it->second->getQuantity() << endl; // Write item name and quantity
    }
	outFS.close();  // Close the file
}

// Cleans up dynamically allocated GroceryItem objects
void Inventory::DeleteItems(map<string, GroceryItem*>& items) {
	for (map<string, GroceryItem*>::iterator it = items.begin(); it != items.end(); ++it)  // Iterate through the map
        delete it->second;
	items.clear();  // Clear the map after deleting items
}