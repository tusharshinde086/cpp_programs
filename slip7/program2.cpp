  /*                               
Q2.Create a class College containing data members as College_Id, College_Name,
Establishment_year, University_Name. Write a C++ program with following functions
a. Accept n College details
b. Display College details of specified University
c. Display College details according to Establishment year (Use Array of Objects and
Function Overloading). [20]
Ans:
*/

#include<iostream.h>
#include<conio.h>

class College {
    int College_Id;
    char College_Name[50];
    int Establishment_year;
    char University_Name[50];

public:
    // Function to accept college details
    void acceptDetails() {
        cout << "Enter College Id: ";
        cin >> College_Id;
        cout << "Enter College Name: ";
        cin >> College_Name;
        cout << "Enter Establishment year: ";
        cin >> Establishment_year;
        cout << "Enter University Name: ";
        cin >> University_Name;
    }

    // Function to display college details
    void displayDetails() {
        cout << "College Id: " << College_Id << endl;
        cout << "College Name: " << College_Name << endl;
        cout << "Establishment year: " << Establishment_year << endl;
        cout << "University Name: " << University_Name << endl;
    }

    // Function to display college details of specified university
    void displayDetails(const char* uniName) {
        if(strcmp(University_Name, uniName) == 0) {
            displayDetails();
        }
    }

    // Function to display college details according to establishment year
    void displayDetails(int year) {
        if(Establishment_year == year) {
            displayDetails();
        }
    }
};

void main() {
    int n;
    cout << "Enter the number of colleges: ";
    cin >> n;

    College colleges[100];

    // Accepting college details
    cout << "Enter details of " << n << " colleges:\n";
    for(int i = 0; i < n; i++) {
        cout << "Enter details for college " << i + 1 << ":\n";
        colleges[i].acceptDetails();
    }

    // Displaying college details of specified university
    char uniName[50];
    cout << "Enter the University Name to display its colleges: ";
    cin >> uniName;
    cout << "Colleges under " << uniName << ":\n";
    for(int i = 0; i < n; i++) {
        colleges[i].displayDetails(uniName);
    }

    // Displaying college details according to establishment year
    int year;
    cout << "Enter the Establishment Year to display colleges established in that year: ";
    cin >> year;
    cout << "Colleges established in " << year << ":\n";
    for(int i = 0; i < n; i++) {
        colleges[i].displayDetails(year);
    }

    getch(); // To hold the output screen
}


