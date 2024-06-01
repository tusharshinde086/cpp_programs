
  /*                               Slip 7


Q1.Write a C++ program using class which contains two data members as type integer. Create and
initialize the objects using default constructor, parameterized constructor with default value.
Write a member function to display maximum from given two numbers for all objects. [10]
Ans: */

#include <iostream.h>
#include <conio.h>

class Number {
private:
    int num1, num2;
public:
    // Default Constructor
    Number() {
        num1 = 0;
        num2 = 0;
    }

    // Parameterized Constructor
    Number(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Function to display maximum from given two numbers
    void displayMax() {
        cout << "Maximum of " << num1 << " and " << num2 << " is: ";
        cout << (num1 > num2 ? num1 : num2) << endl;
    }
};

int main() {
    clrscr();

    // Creating objects using default constructor and parameterized constructor
    Number obj1; // Default constructor
    Number obj2(10, 20); // Parameterized constructor

    // Displaying maximum for obj1 and obj2
    obj1.displayMax();
    obj2.displayMax();

    getch();
    return 0;
}
