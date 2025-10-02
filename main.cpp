#include "LIB/library.h"

int main() {
    Library lib;
    int choice, id;
    string title, author, keyword;

    do {
        cout << "\n====== Library Management System ======\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Book ID: "; cin >> id;
                cin.ignore();
                cout << "Enter Title: "; getline(cin, title);
                cout << "Enter Author: "; getline(cin, author);
                lib.addBook(id, title, author);
                break;

            case 2:
                lib.displayBooks();
                break;

            case 3:
                cin.ignore();
                cout << "Enter keyword (title/author): ";
                getline(cin, keyword);
                lib.searchBook(keyword);
                break;

            case 4:
                cout << "Enter Book ID to borrow: "; cin >> id;
                lib.borrowBook(id);
                break;

            case 5:
                cout << "Enter Book ID to return: "; cin >> id;
                lib.returnBook(id);
                break;

            case 6:
                cout << "👋 Exiting system...\n";
                break;

            default:
                cout << "⚠️ Invalid choice!\n";
        }
    } while(choice != 6);

    return 0;
}
