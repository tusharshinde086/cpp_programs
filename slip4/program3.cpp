  /*                               : Q3.     Create a base class Flight containing protected data members as Flight_no, Flight_Name. Derive 
a class Route(Source, Destination) from class Flight. Also derive a class Reservation (no_seats, 
class, fare, travel_date) from Route. Write a C++ program to perform the following necessary 
functions. 
a. Enter details of n reservations. 
b. Display reservation details of Business class.
ans
: */

#include <iostream.h>
#include <conio.h>

class Flight {
protected:
    int Flight_no;
    char Flight_Name[50];

public:
    // Function to input flight details
    void inputFlightDetails() {
        cout << "Enter Flight Number: ";
        cin >> Flight_no;
        cout << "Enter Flight Name: ";
        cin.ignore(); // Ignore newline character
        cin.getline(Flight_Name, 50);
    }
};

class Route : public Flight {
protected:
    char Source[50];
    char Destination[50];

public:
    // Function to input route details
    void inputRouteDetails() {
        cout << "Enter Source: ";
        cin.ignore(); // Ignore newline character
        cin.getline(Source, 50);
        cout << "Enter Destination: ";
        cin.getline(Destination, 50);
    }
};

class Reservation : public Route {
private:
    int no_seats;
    char class_type[20];
    float fare;
    char travel_date[20];

public:
    // Function to input reservation details
    void inputReservationDetails() {
        cout << "Enter number of seats: ";
        cin >> no_seats;
        cout << "Enter class (Business/Economy): ";
        cin >> class_type;
        cout << "Enter fare: ";
        cin >> fare;
        cout << "Enter travel date: ";
        cin >> travel_date;
    }

    // Function to display reservation details of Business class
    void displayBusinessClass() {
        if (strcmp(class_type, "Business") == 0) {
            cout << "Flight Number: " << Flight_no << endl;
            cout << "Flight Name: " << Flight_Name << endl;
            cout << "Source: " << Source << endl;
            cout << "Destination: " << Destination << endl;
            cout << "Number of Seats: " << no_seats << endl;
            cout << "Class: " << class_type << endl;
            cout << "Fare: " << fare << endl;
            cout << "Travel Date: " << travel_date << endl;
        }
    }
};

int main() {
    clrscr(); // Clear the screen

    int n;
    cout << "Enter the number of reservations: ";
    cin >> n;

    // Create an array of Reservation objects
    Reservation* reservations = new Reservation[n];

    // Input details of reservations
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of reservation " << i + 1 << ":" << endl;
        reservations[i].inputFlightDetails();
        reservations[i].inputRouteDetails();
        reservations[i].inputReservationDetails();
    }

    // Display reservation details of Business class
    cout << "\nReservation details of Business class:" << endl;
    for (int i = 0; i < n; i++) {
        reservations[i].displayBusinessClass();
    }

    delete[] reservations; // Free allocated memory

    getch(); // Wait for a key press before exiting
    return 0;
}

