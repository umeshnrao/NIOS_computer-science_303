#include <iostream>
using namespace std;

/*Write a C++ program to accept a character. Print whether the character is an
alphabet, digit, or a special character. Display appropriate messages */


int main(){
	
	char input; 
    cout << "Enter a character:";
    cin >> input;
    
    if( isalpha(input))
		cout << "This is an alphabet." << endl;
	else if ( isdigit(input))
		cout << "This is a digit." << endl;
	else 
	    cout << "This is a special character" << endl;
    
}
