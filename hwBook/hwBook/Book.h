#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    string author;
    int published;

public:
    // Constructors
    Book();
    Book(const string& title, const string& author, int published);

    // Overload the equality operator (==)
    bool operator==(const Book& other) const;

    // Overload the inequality operator (!=)
    bool operator!=(const Book& other) const;

    // Overload the input operator (>>)
    friend istream& operator>>(istream& input, Book& book);

    // Overload the output operator (<<)
    friend ostream& operator<<(ostream& output, const Book& book);
};
