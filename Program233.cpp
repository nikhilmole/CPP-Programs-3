#include <iostream>
using namespace std;

void ColAdd(int **Arr, int iRow, int iCol) {
    for (int j = 0; j < iCol; j++) {
        for (int i = 0; i < iRow - 1; i++) { // Ensure we don't go out of bounds
            // Swap current element with the next element in the column
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = temp;
        }
    }
}

int main() {
    int iNo1 = 0; // Number of rows
    int iNo2 = 0; // Number of columns
    int **ptr = nullptr;

    cout << "Enter the number of rows: " << endl;
    cin >> iNo1;
    cout << "Enter the number of columns: " << endl;
    cin >> iNo2;

    // Allocate memory for the 2D array
    ptr = new int*[iNo1];
    for (int i = 0; i < iNo1; i++) {
        ptr[i] = new int[iNo2]; // Allocate each row
    }

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < iNo1; i++) {
        for (int j = 0; j < iNo2; j++) {
            cin >> ptr[i][j];
        }
    }

    cout << "Entered elements are:" << endl;
    for (int i = 0; i < iNo1; i++) {
        for (int j = 0; j < iNo2; j++) {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }

    ColAdd(ptr, iNo1, iNo2);
    
    cout << "Updated matrix is:" << endl;
    for (int i = 0; i < iNo1; i++) {
        for (int j = 0; j < iNo2; j++) {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }

    // Free the allocated memory
    for (int i = 0; i < iNo1; i++) {
        delete[] ptr[i]; // Delete each row
    }
    delete[] ptr; // Delete the array of pointers

    return 0;
}
