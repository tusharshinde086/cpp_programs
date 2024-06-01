  /*                               slip 4        

    Q1.Write a C++ program to print area of circle, square and rectangle using inline function.

Ans
*/

#include<iostream.h>
#include<conio.h>

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * radius * radius)
#define AREA_SQUARE(side) (side * side)
#define AREA_RECTANGLE(length, width) (length * width)

int main() {
    float radius, side, length, width;

    // Input for circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << AREA_CIRCLE(radius) << endl;

    // Input for square
    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of the square: " << AREA_SQUARE(side) << endl;

    // Input for rectangle
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Area of the rectangle: " << AREA_RECTANGLE(length, width) << endl;

    getch();
    return 0;
}


