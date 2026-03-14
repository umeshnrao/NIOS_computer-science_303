#include <iostream>
//#include <conio.h>

using namespace std;

int main() {
    //clrscr();

    int arr[10]; // Capacity for 10 to allow insertion
    int i, j, temp, newNum, pos, n = 8;

    cout << "Enter 8 numbers: " << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // --- STEP 1: Bubble Sort ---
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // --- STEP 2: Insertion Logic ---
    cout << "\n\nEnter the number to insert: ";
    cin >> newNum;

    // Find the correct position for the new number
    pos = n; // Default to the end
    for (i = 0; i < n; i++) {
        if (arr[i] > newNum) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to create a gap
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the number
    arr[pos] = newNum;
    n++; // Increase the count of elements

    cout << "\nArray after insertion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    //getch();
}
