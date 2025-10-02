#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Book structure
struct Book {
    int id;
    string title;
    string author;
    bool available;
};

// Library class declaration
class Library {
private:
    vector<Book> books;

public:
    void addBook(int id, string title, string author);
    void displayBooks();
    void searchBook(string keyword);
    void borrowBook(int id);
    void returnBook(int id);
};

#endif // LIBRARY_H




