#include "library.h"

// Method implementations

void Library::addBook(int id, string title, string author) {
    Book b = {id, title, author, true};
    books.push_back(b);
    cout << "✅ Book added successfully!\n";
}

void Library::displayBooks() {
    if (books.empty()) {
        cout << "📭 No books in the library.\n";
        return;
    }
    cout << "\n--- All Books ---\n";
    for (auto &b : books) {
        cout << "ID: " << b.id 
             << " | Title: " << b.title 
             << " | Author: " << b.author 
             << " | Status: " << (b.available ? "Available" : "Borrowed") 
             << endl;
    }
}

void Library::searchBook(string keyword) {
    bool found = false;
    for (auto &b : books) {
        if (b.title.find(keyword) != string::npos || b.author.find(keyword) != string::npos) {
            cout << "🔎 Found -> ID: " << b.id 
                 << " | Title: " << b.title 
                 << " | Author: " << b.author 
                 << " | Status: " << (b.available ? "Available" : "Borrowed") 
                 << endl;
            found = true;
        }
    }
    if (!found) cout << "❌ No book found matching: " << keyword << endl;
}

void Library::borrowBook(int id) {
    for (auto &b : books) {
        if (b.id == id) {
            if (b.available) {
                b.available = false;
                cout << "📚 You borrowed \"" << b.title << "\" successfully!\n";
            } else {
                cout << "⚠️ Book is already borrowed.\n";
            }
            return;
        }
    }
    cout << "❌ Book with ID " << id << " not found.\n";
}

void Library::returnBook(int id) {
    for (auto &b : books) {
        if (b.id == id) {
            if (!b.available) {
                b.available = true;
                cout << "✅ You returned \"" << b.title << "\" successfully!\n";
            } else {
                cout << "⚠️ That book was not borrowed.\n";
            }
            return;
        }
    }
    cout << "❌ Book with ID " << id << " not found.\n";
}

