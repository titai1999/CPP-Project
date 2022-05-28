#include <iostream>
using namespace std;

int main()
{
	//float i, j, div;
	double i, j, div;
	cout << "first integer: \n";
	cin >> i;
	cout << "second integer: \n";  
	cin >> j;
	div	     = i/j; //wrong for integer, correct for double
	cout << "The div is: " << div << "\n" ;

	return 0;
}
