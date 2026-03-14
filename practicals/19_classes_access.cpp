#include <iostream>
#include <string>

using namespace std;

class Competition{

private:
int learner_id;
string learner_name; 
string category; //
string competition_name;
int position;
int points;

void Calculate(){
	if (position == 1)
		points = 10;
	else if(position == 2)
		points = 7;
	else if (position == 3)
		points = 5;
	else if(position > 3)
		points = 0;
	}

public:

Competition(){
	learner_id = 0;
	learner_name = "WELCOME";
	category = "WELCOME";
	competition_name = "WELCOME";
	position = 0;
	points = 0;}

void Accept(){
	
	cout << "Enter the learner id:" ;
	cin >> learner_id;
	cin.ignore();
	cout << "Enter the learner name:";
	getline(cin,learner_name);
	cout << "Enter the category (Junior/Senior) :";
	getline(cin, category);
	
	cout << "Enter the competition name :";
	getline(cin, competition_name);
	
	cout<< "Enter the position secured :";
	cin >> position;
	
	Calculate(); // Calculate is a private function and can only be called within the class and not outside it
}
		
void Display(){
	cout << "Learner Id : " << learner_id <<endl;
	cout << "Learner name : "  << learner_name << endl;
	cout << "Category : "  << category << endl;
    cout << "competition name: " << competition_name << endl;
    cout << "position : " << position << endl;
    cout << "points : " << points << endl;
	}
	
	
};


int main(){
	
	Competition c1; // Constructor gets called automatically
	c1.Display();  
	
	c1.Accept();
	
	c1.Display();
	
	
	}
