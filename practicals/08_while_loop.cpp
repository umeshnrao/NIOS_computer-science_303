
/*Write a C++ program (using while loop ) to display all the multiples of 5 from 100 to 50*/

#include <iostream>

using namespace std;

int main(){
	
	int number = 100;
	
	while (number >= 50) {
		
		if (number % 5 == 0)
		    cout << number << " is a multiple of 5" << endl;  
		number--;
	}
	
	
}
