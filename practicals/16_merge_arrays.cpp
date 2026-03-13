#include <iostream>

using namespace std;

int main() {
    int size;

    // Assuming both arrays are of the same size for a perfect alternative merge
    cout << "Enter the size for the arrays: ";
    cin >> size; //5

    int A[size], B[size], C[size * 2];

    // Input for Array 1
    cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> A[i];   
    }

    // Input for Array 2
    cout << "Enter elements for the second array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> B[i];
    }

    // Logic: Merging alternatively
    int k = 0; 
    for (int i = 0; i < size; i++) {
        C[k++] = A[i]; // Place element from arr1 at index 0, 2, 4...
        C[k++] = B[i]; // Place element from arr2 at index 1, 3, 5...
        
        /*
         * i = 0 ,  k = 0 ->  C[k++] ~ C[0]= A[0], C[k++] ~ C[1],k=2 = B[0]
         * i = 1,   k= 2 -> C[k++] ~C[2] = A[1]; k->3; C[k++] ~C[3] =B[1]; k->4;
         * 
         * 
         * 
         * 
         * 
         */
    }

    // Displaying the Result
    cout << "\nThe merged array (alternating) is: " << endl;
    for (int i = 0; i < size * 2; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
