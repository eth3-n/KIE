# Library Management System (C++ Project)

## Overview
This project is a simple **Library Management System** written in C++.  
It demonstrates the use of **classes, header files, and test programs** to manage books in a library.  
The system allows adding, borrowing, returning, and searching for books.

---

## Folder Structure
- **LIB/**
  - `library.h` → Header file containing the class and struct definitions  
  - `library.cpp` → Implementation of class member functions  

- **tests/**
  - `add.cpp` → Tests adding and displaying books  
  - `borrowreturn.cpp` → Tests borrowing and returning books  
  - `search.cpp` → Tests searching books  

- **main.cpp** → Menu-driven program to run the full system  

---

## How to Compile and Run
1. Open a terminal in the project folder.  
2. Compile with:
   ```bash
   g++ main.cpp LIB/library.cpp -o library_system
3. Run ./library_system
