#include <iostream>
using namespace std;

int main() {

    // Create a 2D array with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the array using row-major traversal
    cout << "Row-major traversal (row by row):" << endl;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // Display memory addresses
    cout << "\nMemory addresses:" << endl;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << "matrix[" << row << "][" << col << "] = "
                 << matrix[row][col]
                 << " at address "
                 << &matrix[row][col] << endl;
        }
    }

    // Explain row-major order
    cout << "\nObservation: Addresses increase row by row." << endl;
    cout << "Row 0 is stored completely, then row 1, then row 2." << endl;
    cout << "This is called ROW-MAJOR ORDER." << endl;

    // Display the array using column-major traversal
    cout << "\nColumn-major traversal:" << endl;

    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 3; row++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}