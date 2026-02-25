#include <iostream>
using namespace std;

inline int cube(int r){

  return (r*r*r);
 }



int main(){
	
	int num;
	cout << "Enter a number: ";
	cin >> num; 
	
	int y; 
	y = cube(num);   // num*num*num
	
	cout << "Cube of number : " << y << endl;
}


