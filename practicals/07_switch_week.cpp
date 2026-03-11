#include <iostream>
using namespace std;


int main(){
	
	int week_num;
	
	cout << "Enter the number of the day:";
	cin >> week_num;

	switch(week_num){
		case 1 : cout << "Monday" << endl; break;
		case 2 : cout << "Tuesday" << endl; break;		
		case 3 : cout << "Wednesday" << endl; break; 
		case 4 : cout << "Thursday" << endl; break;
		case 5 : cout << "Friday" << endl; break;
		case 6 : cout << "Saturday" << endl; break;
		case 7 : cout << "Sunday" << endl; break;
		default : cout <<"You entered an invalid day number!" << endl; break;
		}
	
}
