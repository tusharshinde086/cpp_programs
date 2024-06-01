  /*                               : Q2.      Write a C++ program to create a class which contains two dimensional integer array of size m*n 
Write a member function to display transpose of entered matrix.(Use Dynamic Constructor for 
allocating memory and Destructor to free memory of an object).
Ans

: */

#include <iostream.h>
#include <conio.h>

class Matrix {
private:
    int **data;
    int rows;
    int cols;

public:
    // Constructor to allocate memory for the matrix
    Matrix(int m, int n) {
        rows = m;
        cols = n;
        data = new int*[rows];
	for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    // Destructor to free allocated memory
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Function to input values into the matrix
    void inputMatrix() {
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    // Function to display the transpose of the matrix
    void displayTranspose() {
        cout << "Transpose of the matrix:" << endl;
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    clrscr(); // Clear the screen

    int m, n;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> m >> n;

    // Create a Matrix object with dynamic memory allocation
    Matrix mat(m, n);

    // Input values into the matrix
    mat.inputMatrix();

    // Display the transpose of the matrix
    mat.displayTranspose();

    getch(); // Wait for a key press before exiting
    return 0;
}


