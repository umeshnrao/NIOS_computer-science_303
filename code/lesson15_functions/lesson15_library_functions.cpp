#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
	
	char x ;
	cout << "Enter any value:" ;
	cin >> x;
	
	
	cout << isalpha(x) << endl;
	cout << isdigit(x) << endl;
	cout << isalnum(x) << endl;
	cout << islower(x) << endl;
	cout << isupper(x) << endl;
	
	//char *str1 = "Umesh";
	
	//cout << strlen(str1) << endl;
	
	}
