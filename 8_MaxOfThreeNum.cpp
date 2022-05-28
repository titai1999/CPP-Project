// Program to find the max 
// among three numbers

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;	// input numbers
	int max;		// for temp store
	cout << "input 3 numbers" << endl;
	cin >> num1 >> num2 >> num3;
	max = num1;
	if (num2>max)
	{
       		max=num2;
	}
	if (num3>max)
	{
	 	max=num3;
	}
	cout << "The maxium number is: " << max << endl;

	return 0;
}
