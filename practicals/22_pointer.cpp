/* Name : Cyrus 
   Enrolment Number : 
   
*/


#include <iostream>
using namespace std;

int main(){
	
	int number;  //integer
	int* ptr;    // pointer to an integer
	
	int reversed = 0; 
	
	cout << "Please enter a number:" ;
	cin >> number;   // taking input from user
	
	ptr = &number;   // assigning address of number to the pointer
	
	cout << *ptr << endl;  //dereference a pointer to get the actual value
	
	while( *ptr != 0){  //6324
	   int digit = *ptr % 10; // Extract the last digit     6
	   reversed = reversed * 10 + digit; // appending result  4230 + 6   
	   *ptr /= 10;   //6
	 }
	 
	 cout << "Reversed Number is : " << reversed;  	
}	
