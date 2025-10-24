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


🛠️ Build & Run
🔧 Using Visual Studio

Clone the repository:  
git clone https://github.com/<your-username>/CornerGrocer.git  
Open the folder in Visual Studio.  
Add all .cpp and .h files to the project.  
Ensure inventory.txt is in the same directory as the executable.  
Build and run using Ctrl + F5.  


🧭 Example Output
======= Corner Grocer Menu =======
1. Find frequency of an item
2. Display all item frequencies
3. Display histogram of purchases
4. Exit
Enter your choice: 3

--- Purchase Histogram ---  
Apples         ****  
Beets          ***  
Broccoli       ******  
Cranberries    *********  


📚 Documentation

To generate documentation with Doxygen:  
doxygen Doxyfile

Then open:  
docs/html/index.html  

The documentation includes:  
Class summaries  
Function details  
Linked source code with syntax highlighting  


🪞 Reflection  

🔹 1. Project Summary – What problem was it solving?

This project solves the problem of identifying frequently purchased grocery items by reading purchase records and producing item frequency reports.
It helps the Corner Grocer store make informed decisions about product layout and inventory strategy.

🔹 2. What did you do particularly well?

I implemented a strong object-oriented architecture using three modular classes — GroceryItem, Inventory, and Interactive.
Each class serves a clear purpose, and I focused on clean, maintainable code with Doxygen comments and consistent naming conventions.

🔹 3. Where could you enhance your code?

I could improve memory safety by using smart pointers (std::unique_ptr) instead of raw pointers in the map.
Adding file-path selection or sorting functions would also make the program more flexible and user-friendly.

🔹 4. Most challenging code and how you overcame it

Managing dynamic memory in a std::map<std::string, GroceryItem*> was challenging.
I solved this by creating a dedicated cleanup method in the Inventory class and studying pointer management best practices.
This deepened my understanding of RAII (Resource Acquisition Is Initialization) in C++.

🔹 5. Transferable skills

This project strengthened my skills in:  
C++ object-oriented design  
File I/O and data parsing  
STL container use (std::map)  
Input validation and user interface design  
These abilities are directly transferable to software engineering, backend, and embedded programming.  

🔹 6. Maintainability, readability, and adaptability

The code is modular and easy to extend:
GroceryItem → encapsulates item data
Inventory → handles data logic and file operations
Interactive → manages menu and user input
All source files include Doxygen documentation, clear comments, and consistent style for readability and adaptability.

🧑‍💻 Author

Dmitrii Murashev
📍 Austin, TX
🌐 www.murashev.com

📧 dmurashev@gmail.com

🏁 License

This project is licensed under the MIT License — free for educational and personal use.

