#include <iostream>
using namespace std;

double areaSquare(double r);

int n = 10;


int x = 4; 

int main(){
	
	double length;
	
	cout << "Enter length:";
	cin >> length;
	
	cout << "Area of Square: " << areaSquare(length)<<endl; //calling the function areaSquare from main 
	cout << n << endl;
	
	}


double areaSquare(double r){
	
	double area =  r * r; 
	cout << area << endl << n <<endl ;
	return area; 
	
	
	}
