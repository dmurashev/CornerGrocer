/**
 * @file GroceryItem.cpp
 * @author Dmitrii Murashev
 * @date 2025-10-18
 * @brief Implements the GroceryItem class used to represent individual grocery items.
 *
 * @details
 * Each GroceryItem object stores an item's name and quantity.
 * It provides simple member functions to access and modify this data.
 * The class supports incrementing or decrementing item quantity,
 * as well as retrieving the name and current count.
 *
 * This class is intentionally lightweight and contains no file I/O or console logic,
 * ensuring that it can be reused in other applications or systems.
 *
 * @version 1.0
 * @note Course: CS-210 (Programming Languages)
 * @note Southern New Hampshire University
 */


#include "GroceryItem.h"

 // Constructs a GroceryItem with the given name and quantity
GroceryItem::GroceryItem(const std::string& name, int quantity)
    : name(name), quantity(quantity) {
}

// Returns the name of the item
const std::string& GroceryItem::getName() const {
    return name;
}

// Returns the current quantity of the item
int GroceryItem::getQuantity() const {
    return quantity;
}

// Increases the quantity by one
void GroceryItem::addItem() {
    ++quantity;
}

// Decreases the quantity by one if it's greater than zero
void GroceryItem::removeItem() {
    if (quantity > 0)
        --quantity;
}