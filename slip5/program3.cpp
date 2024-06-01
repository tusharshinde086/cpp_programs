  /*                               OR

Q2.Create a class Book containing Book_name, author and Price as a data member and write
necessary member functions for the following (use function overloading).
a. To Accept and display the Book Information.
b. Display book details of a given author
c. Display book details of specific price

Ans*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class Book {
    char book_name[50];
    char author[50];
    float price;

public:
    void accept_details();
    void display_all();
    void display_by_author(char[]);
    void display_by_price(float);
};

void Book::accept_details() {
    cout << "Enter Book Name: ";
    cin.getline(book_name, 50);
    cout << "Enter Author Name: ";
    cin.getline(author, 50);
    cout << "Enter Price: ";
    cin >> price;
}

void Book::display_all() {
    cout << "Book Name: " << book_name << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
}

void Book::display_by_author(char given_author[]) {
    if (strcmp(author, given_author) == 0) {
        cout << "Book Name: " << book_name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
}

void Book::display_by_price(float given_price) {
    if (price == given_price) {
        cout << "Book Name: " << book_name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
}

int main() {
    clrscr();
    Book books[3]; // Assuming 3 books for simplicity

    // Accepting details for each book
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Book " << i + 1 << endl;
        books[i].accept_details();
    }

    // Display all books
    cout << "All Books:" << endl;
    for ( i = 0; i < 3; i++) {
        books[i].display_all();
    }

    // Display books by a specific author
    char given_author[50];
    cout << "Enter author name to search: ";
    cin.ignore(); // Clear the input buffer
    cin.getline(given_author, 50);
    cout << "Books by author " << given_author << ":" << endl;
    for (i = 0; i < 3; i++) {
	books[i].display_by_author(given_author);
    }

    // Display books of a specific price
    float given_price;
    cout << "Enter price to search: ";
    cin >> given_price;
    cout << "Books with price " << given_price << ":" << endl;
    for (i = 0; i < 3; i++) {
        books[i].display_by_price(given_price);
    }

    getch();
    return 0;
}


