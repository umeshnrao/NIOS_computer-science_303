/* 
Write a C++ program to accept 4 X 4 matrix and find the sum of odd numbers of
the matrix
*/



#include <iostream>

using namespace std;

int main() {
    int matrix[4][4];
    int sum = 0;

    // Input: Accepting 16 elements
    cout << "Enter elements for a 4x4 matrix:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Logic: Traverse and sum odd numbers
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] % 2 != 0) {
                sum += matrix[i][j];
            }
        }
    }

    // Displaying the result
    cout << "\nThe sum of all odd numbers in the matrix is: " << sum << endl;

    return 0;
}
