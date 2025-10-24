**Corner Grocer – Item Tracking Program
**
📖 Overview

Corner Grocer is a C++ console application that analyzes grocery purchase records.
It reads a text file listing purchased items, counts how often each appears, and presents this data interactively through a text-based menu.
The program helps store managers identify popular items and optimize product placement.


✨ Features

🔍 Search by Item – Display how many times a specific item was purchased
📋 List All Items – Show all items with their purchase frequencies
📊 Histogram View – Visualize item popularity with asterisks (*)
💾 Automatic Backup – Creates frequency.dat for persistence
🧠 Input Validation – Handles invalid input without freezing
🧩 Modular OOP Design – Data, logic, and UI separated into distinct classes


🧱 Project Structure

CornerGrocer/
│
├── GroceryItem.h / .cpp     # Represents a single grocery item
├── Inventory.h / .cpp       # Manages file I/O and frequency tracking
├── Interactive.h / .cpp     # Handles user interface and menu logic
├── CornerGrocer.cpp         # Program entry point
├── inventory.txt            # Input data file (purchased items)
├── frequency.dat            # Auto-generated frequency backup
├── Doxyfile                 # Doxygen configuration
└── README.md                # Project overview and reflection


⚙️ Technologies

Language: C++17
IDE: Visual Studio 2022
Libraries: Standard Template Library (STL)
Documentation: Doxygen
