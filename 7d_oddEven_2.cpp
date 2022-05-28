// Program to check if a number is 
// odd or even

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "enter a number  \n";
	cin  >> number;

	if (number % 2 == 1)
	{
		cout <<	"its odd number \n";
	}
	else
	{
		cout <<	"its even number \n";

	}

	return 0;
}
