#pragma once
#include <string>

/**
 * @class GroceryItem
 * @brief Represents a grocery item with a name and quantity.
 */

class GroceryItem
{
	public:
		/**
		 * @brief Constructs a GroceryItem with the given name and optional quantity.
		 * @param name The name of the grocery item.
		 * @param quantity The initial quantity (default is 1).
		 */
		GroceryItem(const std::string& name, int quantity = 1);

		/**
		* @brief Returns the name of the item.
		* @return Constant reference to the item name.
		*/
		const std::string& getName() const;

		/**
		 * @brief Returns the current quantity of the item.
		 * @return Integer quantity.
		 */
		int getQuantity() const;

		/**
		 * @brief Increments the quantity of the item by one.
		 */
		void addItem();

		/**
		 * @brief Decrements the quantity of the item by one if quantity > 0.
		 */
		void removeItem();

	private:
		std::string name;	///< Item name.
		int quantity;		///< Item quantity.

};

