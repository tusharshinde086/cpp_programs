  /*                               Slip 9


Q1. Write a C++ program to create a class Item with data members Item_code, Item_name, Item_Price.
Write member functions to accept and display item information and also display number of objects
created for a class. (Use Static data member and Static member function) [10]
*/

#include<iostream.h>
#include<conio.h>

class Item {
private:
    int Item_code;
    char Item_name[50];
    float Item_Price;
    static int count;

public:
    // Constructor to initialize data members
    Item(int code = 0, const char *name = "", float price = 0.0) {
        Item_code = code;
        strcpy(Item_name, name);
        Item_Price = price;
        count++; // Increment count whenever a new object is created
    }

    // Static member function to display number of objects created
    static void displayCount() {
        cout << "Number of objects created: " << count << endl;
    }

    // Function to accept item information
    void acceptItem() {
        cout << "Enter item code: ";
        cin >> Item_code;
        cout << "Enter item name: ";
        cin >> Item_name;
        cout << "Enter item price: ";
        cin >> Item_Price;
    }

    // Function to display item information
    void displayItem() {
        cout << "Item Code: " << Item_code << endl;
        cout << "Item Name: " << Item_name << endl;
        cout << "Item Price: " << Item_Price << endl;
    }
};

// Initializing static data member count
int Item::count = 0;

void main() {
    clrscr(); // Clear the screen

    // Creating objects of class Item
    Item item1, item2, item3;

    // Accepting item information
    cout << "Enter details for item 1:" << endl;
    item1.acceptItem();
    cout << endl;

    cout << "Enter details for item 2:" << endl;
    item2.acceptItem();
    cout << endl;

    cout << "Enter details for item 3:" << endl;
    item3.acceptItem();
    cout << endl;

    // Displaying item information
    cout << "Item details:" << endl;
    item1.displayItem();
    item2.displayItem();
    item3.displayItem();

    // Displaying number of objects created
    Item::displayCount();

    getch(); // To hold the output screen
}


