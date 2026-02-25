#include <iostream>
using namespace std;

float average(int marks1, int marks2, int marks3 = 75);

int main(){
	
	int marks1, marks2, marks3;
	cout << "Enter marks for 2 subjects:" <<endl;
	cin >> marks1 >> marks2 ;
	
	cout << "Average first time : " << average(marks1, marks2) <<endl;
	
	cout << "Enter marks for 3 subjects:" <<endl;
	cin >> marks1 >> marks2 >> marks3; 
	cout << "Average first time : " << average(marks1, marks2,marks3);

	}


float average(int marks1, int marks2, int marks3){
	
	
	float avg; 
	cout << "\n \t \t " << marks1 <<"\t"<< marks2 <<"\t"<< marks3 <<endl; 
	avg = (marks1 + marks2 + marks3) / 3; 
	
	return avg;
}
