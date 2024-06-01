  /*                               Q2. Create a Base class Train containing protected data members as Train_no, Train_Name. Derive a
class Route(Route_id, Source, Destination) from Train class. Also derive a class Reservation
(Number_of_Seats, Train_Class, Fare, Travel_Date) from Route. Write a C++ program
to perform following necessary functions:
a. Enter details of n reservations
b. Display details of all reservations
c. Display reservation details of a specified Train class [20]
Ans:

*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

class Train {
protected:
    int Train_no;
    char Train_Name[50];
public:
    Train(int no, char* name) {
        Train_no = no;
        strcpy(Train_Name, name);
    }
};

class Route : public Train {
protected:
    int Route_id;
    char Source[50];
    char Destination[50];
public:
    Route(int no, char* name, int id, char* src, char* dest)
        : Train(no, name), Route_id(id) {
            strcpy(Source, src);
            strcpy(Destination, dest);
        }
};

class Reservation : public Route {
private:
    int Number_of_Seats;
    char Train_Class[20];
    float Fare;
    char Travel_Date[20];
public:
    Reservation(int no, char* name, int id, char* src, char* dest,
                int seats, char* tClass, float fare, char* date)
        : Route(no, name, id, src, dest), Number_of_Seats(seats),
          Fare(fare) {
              strcpy(Train_Class, tClass);
              strcpy(Travel_Date, date);
          }

    void display() {
        cout << "Train Number: " << Train_no << endl;
        cout << "Train Name: " << Train_Name << endl;
        cout << "Route ID: " << Route_id << endl;
        cout << "Source: " << Source << endl;
        cout << "Destination: " << Destination << endl;
        cout << "Number of Seats: " << Number_of_Seats << endl;
        cout << "Train Class: " << Train_Class << endl;
        cout << "Fare: " << Fare << endl;
        cout << "Travel Date: " << Travel_Date << endl << endl;
    }

    char* getTrainClass() {
        return Train_Class;
    }
};

void main() {
    clrscr();
    Reservation reservations[50];
    int n;
    cout << "Enter the number of reservations: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int trainNo, routeId, seats;
        char trainName[50], source[50], destination[50], tClass[20], date[20];
        float fare;

        cout << "\nEnter details for Reservation " << i + 1 << ":" << endl;
        cout << "Train Number: ";
        cin >> trainNo;
        cout << "Train Name: ";
        fflush(stdin);
        gets(trainName);
        cout << "Route ID: ";
        cin >> routeId;
        cout << "Source: ";
        fflush(stdin);
        gets(source);
        cout << "Destination: ";
        fflush(stdin);
        gets(destination);
        cout << "Number of Seats: ";
        cin >> seats;
        cout << "Train Class: ";
        fflush(stdin);
        gets(tClass);
        cout << "Fare: ";
        cin >> fare;
        cout << "Travel Date: ";
        fflush(stdin);
        gets(date);

        Reservation res(trainNo, trainName, routeId, source, destination,
                        seats, tClass, fare, date);
        reservations[i] = res;
    }

    // Displaying all reservations
    cout << "\nDetails of all reservations:" << endl;
    for (int i = 0; i < n; ++i) {
        reservations[i].display();
    }

    // Displaying reservation details of a specified Train class
    char specifiedClass[20];
    cout << "\nEnter the Train Class to display reservation details: ";
    fflush(stdin);
    gets(specifiedClass);
    cout << "\nReservation details for Train Class '" << specifiedClass << "':" << endl;
    for (int i = 0; i < n; ++i) {
        if (strcmp(reservations[i].getTrainClass(), specifiedClass) == 0) {
            reservations[i].display();
        }
    }

    getch();
}
