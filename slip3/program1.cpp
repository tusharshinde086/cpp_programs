  /*                               Slip 3

Q1.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and
Sphere.
Ans*/


#include <iostream.h>
#include <conio.h>

// Inline function to calculate the area of a circle
inline float areaCircle(float radius) {
    return 3.14159 * radius * radius;
}

// Inline function to calculate the area of a square
inline float areaSquare(float side) {
    return side * side;
}

// Inline function to calculate the area of a rectangle
inline float areaRectangle(float length, float width) {
    return length * width;
}

int main() {
    clrscr(); // Clear the screen

    // Input data
    float radius = 5.0;
    float side = 4.0;
    float length = 6.0;
    float width = 3.0;

    // Calculate and display area of circle
    cout << "Area of Circle with radius " << radius << ": " << areaCircle(radius) << endl;

    // Calculate and display area of square
    cout << "Area of Square with side " << side << ": " << areaSquare(side) << endl;

    // Calculate and display area of rectangle
    cout << "Area of Rectangle with length " << length << " and width " << width << ": " << areaRectangle(length, width) << endl;

    getch(); // Wait for a key press before exiting
    return 0;
}


