  /*                               Q2.   Write a C++ program with Student as abstract class and create derive classes Engineering, 
Medicine and Science having data member rollno and name from base class Student. Create 
objects of the derived classes and access them using array of pointer of base class Student.
Ans
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class Student {
protected:
    int rollno;
    char name[50];
public:
    virtual void setData(int r, char n[]) = 0;
    virtual void displayData() = 0;
};

class Engineering : public Student {
public:
    void setData(int r, char n[]) {
        rollno = r;
        strcpy(name, n);
    }
    void displayData() {
        cout << "Engineering Student\n";
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

class Medicine : public Student {
public:
    void setData(int r, char n[]) {
        rollno = r;
        strcpy(name, n);
    }
    void displayData() {
        cout << "Medicine Student\n";
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

class Science : public Student {
public:
    void setData(int r, char n[]) {
        rollno = r;
        strcpy(name, n);
    }
    void displayData() {
        cout << "Science Student\n";
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    clrscr();
    Student *students[3];
    Engineering eng;
    Medicine med;
    Science sci;

    eng.setData(101, "John");
    med.setData(102, "Emily");
    sci.setData(103, "Michael");

    students[0] = &eng;
    students[1] = &med;
    students[2] = &sci;

    for(int i = 0; i < 3; i++) {
        students[i]->displayData();
    }

    getch();
    return 0;
}



