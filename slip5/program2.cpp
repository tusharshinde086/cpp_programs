  /*                               Q2.Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical.
Theory class contains marks of five Subjects and Practical class contains marks of two practical
subjects. Class Result (Total_Marks, Class) inherits both Theory and Practical classes. (Use
concept of Virtual Base Class) Write a menu driven program to perform the following functions:
a. Build a master table.
b. Display master table.


*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student {
protected:
    int Roll_No;
    char Name[50];

public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> Roll_No;
        cout << "Enter Name: ";
        cin >> Name;
    }
};

class Theory : virtual public Student {
protected:
    float marks_theory[5];

public:
    void getTheoryMarks() {
        cout << "Enter Marks for 5 Theory Subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks_theory[i];
        }
    }
};

class Practical : virtual public Student {
protected:
    float marks_practical[2];

public:
    void getPracticalMarks() {
        cout << "Enter Marks for 2 Practical Subjects: ";
        for (int i = 0; i < 2; i++) {
            cin >> marks_practical[i];
        }
    }
};

class Result : public Theory, public Practical {
private:
    float Total_Marks;
    char Class[10];

public:
    void calculateTotalMarks() {
        Total_Marks = 0;
        for (int i = 0; i < 5; i++) {
            Total_Marks += marks_theory[i];
        }
        for (int i = 0; i < 2; i++) {
            Total_Marks += marks_practical[i];
        }
    }

    void calculateClass() {
        if (Total_Marks >= 400)
            strcpy(Class, "First Class");
        else if (Total_Marks >= 300)
            strcpy(Class, "Second Class");
        else if (Total_Marks >= 200)
            strcpy(Class, "Third Class");
        else
            strcpy(Class, "Fail");
    }

    void displayResult() {
        cout << "Roll No: " << Roll_No << endl;
        cout << "Name: " << Name << endl;
        cout << "Total Marks: " << Total_Marks << endl;
        cout << "Class: " << Class << endl;
    }
};

int main() {
    clrscr();
    Result r;

    // Build a master table
    r.getData();
    r.getTheoryMarks();
    r.getPracticalMarks();
    r.calculateTotalMarks();
    r.calculateClass();

    // Display master table
    cout << "\n-----Master Table-----\n";
    r.displayResult();

    getch();
    return 0;
}
