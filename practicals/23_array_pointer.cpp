/*
 * 
 */
 
#include <iostream>   //#include<iostream.h>
//#include <conio.h>
using namespace std;   // doesn't work in turbo c



int main(){
	
	//clrscr(); //turboc
	
	int arr[10]; 
	int* ptr = arr;  // pointer to the array
	
	cout << "Enter elements of the array:";
	for(int i=0; i<10; i++){
		
		cin >> arr[i];
	}
	
	for(int i=0 ; i<10; i++){
		cout<< *(ptr+i) * *(ptr+i)  << endl;
	}
	
	
	
	
	
	//getch();//turboc
	}

