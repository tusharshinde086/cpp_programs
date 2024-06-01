  /*                               
Slip 10


Q1.Write a C++ program to create a class employee containing salary as a data member. Write
necessary member functions to overload the operator unary pre and post decrement "--"
for decrementing salary. [10]

Ans: */


#include<iostream.h>
#include<conio.h>

class Employee {
private:
    double salary;
public:
    // Constructor
    Employee(double s) : salary(s) {}

    // Overloading unary pre-decrement operator (--salary)
    void operator--() {
        --salary;
    }

    // Overloading unary post-decrement operator (salary--)
    void operator--(int) {
        salary--;
    }

    // Function to get salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    clrscr();

    Employee emp(50000);

    cout << "Initial Salary: " << emp.getSalary() << endl;

    --emp; // pre-decrement
    cout << "Salary after pre-decrement: " << emp.getSalary() << endl;

    emp--; // post-decrement
    cout << "Salary after post-decrement: " << emp.getSalary() << endl;

    getch();
    return 0;
}
