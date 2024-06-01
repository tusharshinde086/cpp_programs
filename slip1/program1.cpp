  /*                               Slip  1

Q1.Write the definition for a class Cylinder that contains data members radius and height. The class has the following member functions:

a. void setradius(float) to set the radius of data member.

b. void setheight(float) to set the height of data member.

c. float volume() to calculate and return the volume of the cylinder.

Write a C++ program to create cylinder object and display its volume.

ANS;    
*/
 
#include <iostream.h>
#include<conio.h>

class Cylinder {
private:
    float radius;
    float height;
public:
    void setradius(float r) {
	radius = r;
	  }

    void setheight(float h) {
	height = h;
    }

    float volume() {
	return 3.14* radius * radius * height;
    }
};

void main() {
    Cylinder cyl;
    cyl.setradius(5.0);
    cyl.setheight(10.0);
    cout << "Volume of the cylinder: " << cyl.volume() << endl;
    getch();
}
