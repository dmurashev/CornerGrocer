#pragma once
#include <map>
#include "GroceryItem.h"
#include "Inventory.h"


/**
 * @class Interactive
 * @brief Provides the user interface for the Corner Grocer program.
 */

class Interactive {
public:

    /**
     * @brief Prints the frequency of a specific item entered by the user.
     * @param items Reference to the map of grocery items.
     */
    static void PrintItemFrequency(std::map<std::string, GroceryItem*>& items);

    /**
     * @brief Displays all items and their quantities.
     * @param items Reference to the map of grocery items.
     */
    static void PrintAllItems(std::map<std::string, GroceryItem*>& items);

    /**
     * @brief Prints a histogram of all item frequencies using asterisks.
     * @param items Reference to the map of grocery items.
     */
    static void PrintHistogram(std::map<std::string, GroceryItem*>& items);

    /**
    * @brief Runs the main interactive menu loop.
    * @param inputFile Name of the input inventory file.
    * @param outputFile Name of the output inventory backup file.
    */
    static void RunMenu(const std::string& inputFile, const std::string& outputFile);
};
