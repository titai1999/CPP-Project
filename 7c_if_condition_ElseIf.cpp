// Program to check a number is 
// positive or negative or zero

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "enter a number  \n";

	cin  >> number;

	if (number==0)
	{
		cout << "you have entered zero \n";

	}

	else if (number>0)
	{	
		cout << "you have entered a positive number \n";

	}

	else 
	{	
		cout << "you have entered a negative number \n";

	}

	return 0;
}
