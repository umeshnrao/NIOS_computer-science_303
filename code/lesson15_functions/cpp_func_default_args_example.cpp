# include <iostream>
using namespace std; 

void repchar (char = '=', int = 30);


int main ()
{
	repchar ();  			// char ch = '=',  int x = 30  -- both 'ch' and 'x' are default
	repchar ('*');          // char ch = '*',  int x = 30  -- 'x' is default
	repchar ('+', 45);      // char ch = '+',  int x = 45  -- no default
}
void repchar (char ch, int x)
{
for (int i= 1; i <= x; i++){
	cout << ch;
	//cout << "\n";
}
 cout << endl;
}
