

#include <iostream>
#include <string.h>

using namespace std;

int main(){
 
   char S1[100];
   char S2[50];
   
   cout << "Enter String 1: " ;
   gets(S1); 
   
   cout << "Enter String 2: " ;
   gets(S2);
   
   if( strcmp(S1, S2) == 0 ){
	   cout << "The input strings are the same!"<< endl;
	   
	   }
	else {
		cout <<"The 2 input strings are different" << endl;
		
	}
	
	
	cout << "Length of String 1: " << strlen(S1) << endl;
	cout << "Length of String 2: " << strlen(S2) << endl;
	
	
	cout << "Appended String : " << strcat(S1, S2) << endl;

}
