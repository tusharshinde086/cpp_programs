  /*                               Q2. A book (ISBN) and CD (data capacity) are both types of media (I'd title) objects. A person buys 10 media items each of which can be either book or CD. Display the list of all books and CD's bought. Define the classes and appropriate member functions to accept and display data. Use pointers and concept of polymorphism (Virtual Function)
ANS: */
#include <iostream.h>
#include <string.h>
#include<conio.h>
const int MAX_ITEMS = 4;
class Media {
protected:
    char title[50];
public:
    virtual void accept() = 0;
    virtual void display() = 0;
};

class Book : public Media {
    char ISBN[14]; // Assuming ISBN is of length 13 + '\0'
public:
    void accept() {
	cout << "Enter title of the book: ";
	cin.getline(title, 50);
	cout << "Enter ISBN: ";
	cin.getline(ISBN, 14);
    }

    void display() {
	cout << "Title: " << title << endl;
	cout << "ISBN: " << ISBN << endl;
    }
};

class CD : public Media {
    int capacity;
public:
    void accept() {
	cout << "Enter title of the CD: ";
	cin.getline(title, 50);
	cout << "Enter data capacity (in MB): ";
	cin >> capacity;
	cin.ignore(); // Clear input buffer
    }

    void display() {
	cout << "Title: " << title << endl;
	cout << "Data Capacity: " << capacity << " MB" << endl;
    }
};

int main() {
    Media* items[MAX_ITEMS];

    cout << "Enter details for 4 media items:\n";
    for (int i = 0; i < MAX_ITEMS; ++i) {
	char choice;
	cout << "Is this item a book (b) or a CD (c)? ";
	cin >> choice;
	cin.ignore(); // Clear input buffer

	if (choice == 'b') {
	    items[i] = new Book();
	} else if (choice == 'c') {
	    items[i] = new CD();
	} else {
	    cout << "Invalid choice. Please enter 'b' for book or 'c' for CD." << endl;
	    --i; // Decrement i to re-enter the loop for the same item
	    continue;
	}
	items[i]->accept();
    }
    cout << "\nList of Books and CDs Bought:\n";
    for ( i = 0; i < MAX_ITEMS; ++i) {
	cout << "Item " << i + 1 << ":\n";
	items[i]->display();
	cout << endl;
	delete items[i]; // Free dynamically allocated memory
    }
    getch();
    return 0;
}


