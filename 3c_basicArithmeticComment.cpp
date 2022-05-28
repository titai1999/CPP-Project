//This code will perform basic mathermatical 
//operations of two integers
#include <iostream>
using namespace std;

int main()
{
	int i, j, sumOfTwoNum, prodOfTwoNum;
	float div; 
	cout << "first integer: \n";
	cin >> i;
	cout << "second integer: \n";  
	cin >> j;
	sumOfTwoNum  = i+j; 		//this will perform the summation
	prodOfTwoNum = i*j; 		// this will do the multi ....
	div	     = (i*1.0)/(j*1.0); // command for division 
	cout << "The sum is: " << sumOfTwoNum << "\n" ; 
	cout << "The product is: " << prodOfTwoNum << "\n" ; //this will print the value of the multi...
	cout << "The div is: " << div << "\n" ;

	return 0;
}
