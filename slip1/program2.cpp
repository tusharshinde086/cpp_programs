  /*                               Q2. Write a C++ program to create a class Array that contains one float array as member. Overload the Unary ++ and -- operators to increase or decrease the value of each element of an array. Use friend function for operator function

ANS: */

#include <iostream.h>
#include<conio.h>

class Array {
private:
    float arr[5];

public:
    Array(float values[]) {
	for (int i = 0; i < 5; ++i) {
            arr[i] = values[i];
        }
    }
    friend Array operator++(Array &a) {
        for (int i = 0; i < 5; ++i) {
	    ++a.arr[i];
	}
        return a;
    }
    friend Array operator--(Array &a) {
        for (int i = 0; i < 5; ++i) {
            --a.arr[i];
        }
        return a;
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < 5; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void main() {
    float values[] = {1.1, 2.2, 5.3, 4.4, 3.7};
       clrscr();
    Array arr(values);

    cout << "Original array:" << endl;
    arr.display();

    ++arr;
    cout << "After incrementing:" << endl;
    arr.display();

    --arr;
    cout << "After decrementing:" << endl;
    arr.display();
   getch();
}

