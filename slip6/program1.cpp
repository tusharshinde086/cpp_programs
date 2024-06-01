
  /*                                               Slip 6


Q1.Write a C++ program to implement a class printdata to overload print function as follows:
void print(int) - outputs value followed by the value of the integer.
Eg. print(10) outputs - value 10
void print(char *) – outputs value followed by the string in double quotes.
Eg. print(“hi”) outputs value “hi ”  [10]
Ans: */

#include <iostream.h>
#include <conio.h>
#include <string.h>

class printdata {
public:
    // Overloaded function to print integer value
    void print(int value) {
        cout << "value " << value << endl;
    }

    // Overloaded function to print string value
    void print(char* str) {
        cout << "value \"" << str << "\"" << endl;
    }
};

int main() {
    clrscr();
    printdata obj;

    // Call the overloaded functions
    obj.print(10);
    obj.print("hi");

    getch();
    return 0;
}

