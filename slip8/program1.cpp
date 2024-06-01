  /*                               Slip 8


Q1.Write a C++ program to subtract two integer numbers of two different classes using friend
function. [10]
Ans:
*/

#include<iostream.h>
#include<conio.h>

// Forward declaration of class TwoNumbers
class TwoNumbers;

// Class declaration for class OneNumber
class OneNumber {
    int num1;

public:
    // Constructor to initialize num1
    OneNumber(int n) {
        num1 = n;
    }

    // Declare friend function
    friend int subtract(OneNumber, TwoNumbers);
};

// Class declaration for class TwoNumbers
class TwoNumbers {
    int num2;

public:
    // Constructor to initialize num2
    TwoNumbers(int n) {
        num2 = n;
    }

    // Declare friend function
    friend int subtract(OneNumber, TwoNumbers);
};

// Friend function definition to subtract numbers from both classes
int subtract(OneNumber obj1, TwoNumbers obj2) {
    return obj1.num1 - obj2.num2;
}

void main() {
    clrscr(); // Clear the screen

    // Create objects of both classes
    OneNumber obj1(10);
    TwoNumbers obj2(5);

    // Subtract numbers and display the result
    cout << "Subtraction result: " << subtract(obj1, obj2);

    getch(); // To hold the output screen
}


