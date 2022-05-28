// Using Nested if
// Program to check if a number is 
// odd or even

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "enter a number  \n";
	cin  >> num;

	if (num!=0)
	{
		if ((num%2)==0)
		{
			cout << "The number is even" << endl;
		}
		else 
		{
			cout << "The number is odd" << endl;
		}
	}
	else
	{
			cout << "The number is neither even nor odd" << endl;

	}

	cout << "Its outside the main if" << endl;

	return 0;
}
