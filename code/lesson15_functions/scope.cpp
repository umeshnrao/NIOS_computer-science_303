# include <iostream>

using namespace std;


int m = 2; //global variable m 

int main ()
{
	int m = 15;
	
	{
		int m = 10 * :: m;  // 10 * 2 = 20 
		//int n = 10 * m;

		cout << "m = " << m << "\n";
		//cout << "n = " << n << "\n";
		cout << "global m = " << :: m << "\n";
	}
	
	cout << "m = " << m << "\n";
	cout << "global m = " << ::m << "\n";
}
