#include <iostream>
#include "../LIB/library.h"  // include the header, not the cpp
using namespace std;

int main() {
    Library lib;

    // Add 2 books
    lib.addBook(101, "The Alchemist", "Paulo Coelho");
    lib.addBook(102, "Rich Dad Poor Dad", "Robert Kiyosaki");

    cout << "\n--- Test: Display Books After Adding ---\n";
    lib.displayBooks();

    return 0;
}

