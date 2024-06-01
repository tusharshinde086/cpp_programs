  /*                                                 Slip 5

Q1.Write a C++ program to create a class Mobile which contains data members as Mobile_Id,
Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by using
parameterized constructor. Display the values of Mobile object.
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class Mobile {
private:
    int Mobile_Id;
    char Mobile_Name[50];
    float Mobile_Price;

public:
    // Parameterized constructor
    Mobile(int id, char name[], float price) {
        Mobile_Id = id;
        strcpy(Mobile_Name, name);
        Mobile_Price = price;
    }

    // Function to display Mobile details
    void displayMobileDetails() {
        cout << "Mobile ID: " << Mobile_Id << endl;
        cout << "Mobile Name: " << Mobile_Name << endl;
        cout << "Mobile Price: " << Mobile_Price << endl;
    }
};

void main() {
    clrscr();
    // Creating a Mobile object and initializing it using parameterized constructor
    Mobile mobile1(101, "iPhone 12", 999.99);

    // Displaying the values of the Mobile object
    mobile1.displayMobileDetails();

    getch();
}

