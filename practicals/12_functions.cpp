#include <iostream>
using namespace std;

// function prototypes
void CALCULATE(int);
int CALCULATE(int , int );
void CALCULATE();

int main(){
	
	cout << "Calling CALCULATE with 1 argument" << endl;
	CALCULATE(3);
	
	cout << "Calling CALCULATE with 2 arguments " << endl;
	cout << CALCULATE(3,9) << endl;
	
	cout << "Calling CALCULATE with no arguments " << endl;
	CALCULATE();
	
	
	}

void CALCULATE(int a){
	if(a%2 == 0)
		cout << "Number is even" << endl;
	else
		cout << "Numbers is odd" << endl;
	}

int CALCULATE(int a, int b){
	return (a+b);
	}


void CALCULATE(){
	cout <<"YOU ARE DOING GREAT!" << endl;}



