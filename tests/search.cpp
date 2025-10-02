#include <iostream>
#include "../LIB/library.h"  // include the header, not the cpp
using namespace std;

int main() {
    Library lib;
    lib.addBook(201, "Clean Code", "Robert C. Martin");
    lib.addBook(202, "C++ Primer", "Stanley Lippman");

    cout << "\n--- Test: Searching for 'Code' ---\n";
    lib.searchBook("Code");

    cout << "\n--- Test: Searching for 'Java' (not found) ---\n";
    lib.searchBook("Java");

    return 0;
}

