  /*                               Q2.Write a C++ program to design a class complex to represent complex number. The complex class
uses an external function (as a friend function) to add two complex number. The function should
return an object of type complex representing the sum of two complex Numbers.  [20]
Ans: */

#include <iostream.h>
#include <conio.h>

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize complex number
    Complex(float r = 0.0, float i = 0.0) {
        real = r;
        imag = i;
    }

    // Friend function to add two complex numbers
    friend Complex add(const Complex& c1, const Complex& c2);

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i";
    }
};

// Friend function definition to add two complex numbers
Complex add(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    clrscr();

    Complex c1(3.5, 2.5);
    Complex c2(2.5, 1.5);
    Complex sum = add(c1, c2);

    cout << "First complex number: ";
    c1.display();
    cout << endl;

    cout << "Second complex number: ";
    c2.display();
    cout << endl;

    cout << "Sum of complex numbers: ";
    sum.display();
    cout << endl;

    getch();
    return 0;
}

