  /*                               Q2. Write a C++ program to create a class Shape with functions to find area of the shape and display the name of the shape and other essential components of the class. Create derived classes circle, rectangle and trapezoid each having overridden function area and display. Write a suitable program to illustrate Virtual Function.
ANS: */

#include <iostream.h>
#include <conio.h>
#include <math.h>
#include<string.h>
class Shape {
protected:
    char name[20];
public:
    Shape(char* n) {
        strcpy(name, n);
    }
    virtual void display() {
        cout << "Shape: " << name << endl;
    }
    virtual float area() {
        return 0.0;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(char* n, float r) : Shape(n), radius(r) {}
    void display() {
        Shape::display();
        cout << "Radius: " << radius << endl;
    }
    float area() {
        return 3.1415 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(char* n, float l, float w) : Shape(n), length(l), width(w) {}
    void display() {
        Shape::display();
        cout << "Length: " << length << ", Width: " << width << endl;
    }
    float area() {
        return length * width;
    }
};

class Trapezoid : public Shape {
private:
    float base1, base2, height;
public:
    Trapezoid(char* n, float b1, float b2, float h) : Shape(n), base1(b1), base2(b2), height(h) {}
    void display() {
        Shape::display();
        cout << "Base1: " << base1 << ", Base2: " << base2 << ", Height: " << height << endl;
    }
    float area() {
        return 0.5 * (base1 + base2) * height;
    }
};

int main() {
    clrscr();
    Shape* shapes[3];
    shapes[0] = new Circle("Circle", 5.0);
    shapes[1] = new Rectangle("Rectangle", 4.0, 6.0);
    shapes[2] = new Trapezoid("Trapezoid", 3.0, 5.0, 4.0);

    for (int i = 0; i < 3; i++) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }

    for ( i = 0; i < 3; i++) {
        delete shapes[i];
    }

    getch();
    return 0;
}

