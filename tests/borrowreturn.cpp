#include <iostream>
#include "../LIB/library.h"  // include the header
using namespace std;

int main() {
    Library lib;
    lib.addBook(301, "1984", "George Orwell");

    cout << "\n--- Borrow Book (ID: 301) ---\n";
    lib.borrowBook(301);

    cout << "\n--- Try Borrowing Again (Should Fail) ---\n";
    lib.borrowBook(301);

    cout << "\n--- Return Book (ID: 301) ---\n";
    lib.returnBook(301);

    cout << "\n--- Try Returning Again (Should Fail) ---\n";
    lib.returnBook(301);

    return 0;
}

