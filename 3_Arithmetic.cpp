#include <iostream>
using namespace std;

int main()
{
	int i, j, sum, div; 
	cout << "Enter the first integer \n" ;
	cin >> i;
	cout << "Enter the second integer \n" ;
	cin >> j;
	
	sum = i+j;	
	div = i/j;

	cout << "The sum of " << i << " and " << j << " is: " << sum << "\n";
	cout << "The div of " << i << " and " << j << " is: " << div << "\n";
	
	
return 0;
}
