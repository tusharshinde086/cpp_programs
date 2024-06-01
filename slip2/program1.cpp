     /*                                                   Slip 2

 
Q1.Write a C++ program to create two classes Rectanglel and Rectangle. Compare area of both the rectangles using friend function.

ANS: */

#include <iostream.h>
#include<conio.h>
class Rectangle2;
class Rectangle1 {
private:
    float length;
    float width;

public:
    Rectangle1(float l, float w) : length(l), width(w) {}

    float area() {
	return length * width;
    }

    friend void compareAreas(Rectangle1 &r1, Rectangle2 &r2);
};

class Rectangle2 {
private:
    float length;
    float width;

public:
    Rectangle2(float l, float w) : length(l), width(w) {}

    float area() {
	return length * width;
    }

    friend void compareAreas(Rectangle1 &r1, Rectangle2 &r2);
};

void compareAreas(Rectangle1 &r1, Rectangle2 &r2) {
    float area1 = r1.area();
    float area2 = r2.area();

    if (area1 > area2) {
	cout << "Area of Rectangle1 is greater than Rectangle2." << endl;
    } else if (area1 < area2) {
	cout << "Area of Rectangle2 is greater than Rectangle1." << endl;
    } else {
	cout << "Both rectangles have equal area." << endl;
    }
}

void main() {
    Rectangle1 rect1(5, 4);
    Rectangle2 rect2(6, 3);

    compareAreas(rect1, rect2);
  getch();
}


