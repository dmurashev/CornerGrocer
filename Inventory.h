#pragma once
#include <string>
#include <map>
#include "GroceryItem.h"

/**
 * @class Inventory
 * @brief Handles file I/O and memory management for the grocery inventory.
 */

class Inventory {
public:
    /**
    * @brief Loads items from an input file into the map.
    * @param items Reference to the map of items.
    * @param filename Name of the inventory file.
    */
    static void LoadInventory(std::map<std::string, GroceryItem*>& items, const std::string& filename);

    /**
    * @brief Writes all items and their frequencies to "frequency.dat".
    * @param items Reference to the map of items.
    */
    static void WriteFrequencyFile(std::map<std::string, GroceryItem*>& items, const std::string& filename);

    /**
    * @brief Frees all dynamically allocated GroceryItem objects.
    * @param items Reference to the map of items.
    */
    static void DeleteItems(std::map<std::string, GroceryItem*>& items);
};
