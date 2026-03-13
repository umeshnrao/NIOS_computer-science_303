#include <iostream>
using namespace std;


void swap(int, int);   // this is a function prototype for call by value
void better_swap(int &, int &); // this is a function prototype for call by reference 



int main(){
	
	int a, b;
	
	cout << "Please enter 2 integers : ";
	cin >> a >> b;
	
	cout << "Value of \"a\" before swapping : " << a << endl << "Value of \"b\" before swapping: "<< b << endl;

	swap(a, b);  // function call/invocation - actual parameters 
	better_swap(a, b);  // function call/invocation - actual parameters 

	cout << "Value of \"a\"  after swapping: " << a << endl << "Value of b after swapping: "<< b << endl;
	
	
	
    
}

// Call By Value 
void swap (int a, int b)  //function definition  - formal parameters 
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "Value of c (a) :" << a <<"  Value of d (b) :"<<  b << "\n";
}

// Call By Reference
void better_swap (int &c, int &d)
{
	int t;
	t = c;
	c = d;
	d = t;
	cout << "Value of c (a) :" << c <<"  Value of d (b) :"<<  d << "\n";
}




