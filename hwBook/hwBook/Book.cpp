#include "Book.h"
using namespace std;


// Constructors
Book::Book()  {
    title ="";
    author = "";
    published = 0;
}
Book::Book(const string& title, const string& author, int published) {
    this->title = title;
    this->author = author;
    this->published = published;
}

// Overload the equality operator (==)
bool Book::operator==(const Book& other) const {
    return (title == other.title) && (author == other.author);
}

// Overload the inequality operator (!=)
bool Book::operator!=(const Book& other) const {
    return !(*this == other);
}

// Overload the input operator (>>)
istream& operator>>(istream& input, Book& book) {
    cout << "Enter book title: ";
    getline(input, book.title);
    cout << "Enter book author: ";
    getline(input, book.author);
    cout << "Enter publication year: ";
    input >> book.published;
    input.ignore();  // Consume the newline character
    return input;
}

// Overload the output operator (<<)
ostream& operator<<(ostream& output, const Book& book) {
    output << "\nTitle: " << book.title << endl;
    output << "Author: " << book.author << endl;
    output << "Publication Year: " << book.published << endl;
    return output;
}
