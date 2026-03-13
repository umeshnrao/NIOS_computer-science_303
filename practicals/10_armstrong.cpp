#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> num;    // 153 

    originalNum = num;

    // Step 1: Find the number of digits
    for (int temp = originalNum; temp != 0; temp /= 10) {
        n++;
    }
    
    cout << "n " << n << endl;
    
    // Step 2: Calculate the sum of power of digits
    for (int temp = originalNum; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n); // result = result + pow(remainder,n); 
        
    }

    // Step 3: Check if the sum equals the original number
    // We use a small epsilon or round since pow() returns a double
    if (round(result) == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
