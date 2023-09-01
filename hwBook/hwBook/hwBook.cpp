#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;


// Function to compare and display similar books
void displaySimilarBooks(const vector<Book>& books) {
    cout << "\nSimilar Books:" << endl;

    for (size_t i = 0; i < books.size(); ++i) {

        for (size_t j = i + 1; j < books.size(); ++j) {

            if (books[i] == books[j]) {
                cout << "Books " << i + 1 << " and " << j + 1 << " are similar:" << endl;
                cout << books[i] << endl;
                cout << books[j] << endl;
            }
        }
    }
}

int main() {
    vector<Book> books;

    Book book1("Kobzar", "Taras Shevchenko", 1840);
    Book book2("It", "Stephen King", 1986);
    Book book3("It", "Stephen King", 1986);

    // Add books to the list
    books.push_back(book1);
    books.push_back(book2);
    books.push_back(book3);

    // Display the full list of books
    cout << "List of Books:" << endl;
    for (const Book& book : books) {
        cout << book << endl;
    }

    // Input a new book
    Book newBook;
    cin >> newBook;
    books.push_back(newBook);

    // Display the final list of books after adding a new book
    cout << "\nFinal List of Books:" << endl;
    for (const Book& book : books) {
        cout << book << endl;
    }

    // Compare and display similar books
    displaySimilarBooks(books);

    return 0;
}
