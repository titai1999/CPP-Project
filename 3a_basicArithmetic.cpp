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
	sumOfTwoNum  = i+j;
	prodOfTwoNum = i*j;
	div	     = (i*1.0)/(j*1.0);
	cout << "The sum is: " << sumOfTwoNum << "\n" ;
	cout << "The product is: " << prodOfTwoNum << "\n" ;
	cout << "The div is: " << div << "\n" ;

	return 0;
}
