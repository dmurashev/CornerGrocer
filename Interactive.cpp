/**
 * @file Interactive.cpp
 * @author Dmitrii Murashev
 * @date 2025-10-18
 * @brief Implements the Interactive class responsible for user interface and interaction.
 *
 * @details
 * The Interactive class manages the text-based user interface for the Corner Grocer system.
 * It displays menu options, validates user input, and calls functions from InventoryManager
 * to load data, print reports, and save backup files.
 *
 * The menu provides the following options:
 *  1. Search for a specific item and display its frequency.
 *  2. Display all item frequencies.
 *  3. Display a histogram of purchases.
 *  4. Exit the program.
 *
 * Input validation ensures that the program handles non-numeric input gracefully
 * and avoids infinite loops caused by invalid data.
 *
 * @version 1.0
 * @note Course: CS-210 (Programming Languages)
 * @note Southern New Hampshire University
 */


#include "Interactive.h"
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

// Prints the frequency of a specific item entered by the user
void Interactive::PrintItemFrequency(map<string, GroceryItem*>& items) {
    string itemName;
    cout << "Enter item name: ";
	cin >> itemName;    // Get item name from user

    if (items.count(itemName) > 0) {
        cout << itemName << " purchased "
			<< items.at(itemName)->getQuantity() << " times.\n";    // Print frequency
    }
    else {
		cout << itemName << " not found.\n";    // Item not found
    }
}

// Prints all items and their quantities in a formatted table
void Interactive::PrintAllItems(map<string, GroceryItem*>& items) {
	cout << left << setw(15) << "Item" << "Frequency" << endl;  // Header
    cout << "------------------------\n";
    for (map<string, GroceryItem*>::iterator it = items.begin(); it != items.end(); ++it) {
        cout << left << setw(15) << it->first
			<< it->second->getQuantity() << endl;       // Print item and quantity
    }
}

// Prints a histogram of item frequencies using asterisks
void Interactive::PrintHistogram(map<string, GroceryItem*>& items) {
	cout << "\n--- Purchase Histogram ---\n";   // Header
    for (map<string, GroceryItem*>::iterator it = items.begin(); it != items.end(); ++it) {
		cout << left << setw(15) << it->first;  // Print item name
        for (int i = 0; i < it->second->getQuantity(); ++i)
			cout << "*";    // Print asterisks for frequency
        cout << endl;
    }
}

void Interactive::RunMenu(const string& inputFile, const string& outputFile) {
    map<string, GroceryItem*> items;
    int choice = 0;

    do {
		Inventory::DeleteItems(items);  // Clear previous data
		Inventory::LoadInventory(items, inputFile); // Reload data each iteration
		Inventory::WriteFrequencyFile(items, outputFile);   // Backup to frequency.dat

		// Display menu
        cout << "\n======= Corner Grocer Menu =======\n";
        cout << "1. Find frequency of an item\n";
        cout << "2. Display all item frequencies\n";
        cout << "3. Display histogram of purchases\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

		// Input validation
		if (!(cin >> choice)) { // Check for non-numeric input
			cin.clear();    // Clear error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n');    // Clear invalid input
			cout << "Invalid choice! Please enter a number 1-4.\n";
			continue;   // Restart loop
        }

		// Process choice
        switch (choice) {
        case 1:
			PrintItemFrequency(items);  // Find frequency of an item
            break;
        case 2:
			PrintAllItems(items);       // Display all item frequencies
            break;
        case 3:
			PrintHistogram(items);      // Display histogram of purchases
            break;
        case 4:
			cout << "Exiting program...\n"; // Exit
            break;
        default:
			cout << "Invalid choice. Please enter 1-4.\n";  // Handle invalid menu choice
            break;
        }

	} while (choice != 4);  // Loop until user chooses to exit

	Inventory::DeleteItems(items);  // Clean up before exit
}
