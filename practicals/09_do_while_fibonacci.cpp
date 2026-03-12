
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    int a = 0, b = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series for " << n << " terms: ";

    do {
        if (count == 0)
            cout << a << " ";
        else if (count == 1)
            cout << b << " ";
        else {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
        count++;
    } while (count < n);

    return 0;
}
