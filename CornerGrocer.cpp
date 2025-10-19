/**
 * @file CornerGrocer.cpp
 * @author Dmitrii Murashev
 * @date 2025-10-18
 * @brief Main entry point for the Corner Grocer item-tracking program.
 *
 * @details
 * This program reads a list of purchased grocery items from an input file,
 * calculates how many times each item appears, and provides a simple
 * text-based menu for interacting with this data.
 *
 * Functionalities include:
 *  - Searching for a specific item and displaying its purchase frequency.
 *  - Listing all items and their corresponding frequencies.
 *  - Displaying a histogram that visually represents item purchase counts.
 *  - Saving results to a backup file named "frequency.dat".
 *
 * The program uses:
 *  - A `GroceryItem` class to encapsulate each item's name and quantity.
 *  - An `Inventory` class to manage file I/O and data loading.
 *  - An `Interactive` class to handle user interaction and input validation.
 *
 * All dynamically allocated memory is properly released before exit.
 * Input validation ensures that the user cannot crash the program
 * by entering non-numeric data in the menu.
 *
 * @version 1.0
 * @note Course: CS-210 (Programming Languages)
 * @note Southern New Hampshire University
 */


#include "Interactive.h"

int main() {
	const std::string inputFile = "inventory.txt";  // Input file name
	const std::string outputFile = "frequency.dat";	// Output backup file name

	Interactive::RunMenu(inputFile, outputFile);    // Start the interactive menu
    return 0;
}