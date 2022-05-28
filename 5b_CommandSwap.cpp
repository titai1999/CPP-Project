#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, m, temp;
	cout << "Enter 1st number \n" ;
	cin  >> n;
	cout << "Enter 2nd number \n" ;
	cin  >> m;
	cout << "The original number : " << n << m << "\n";

	swap(n, m); 

	cout << "The swapped number : " << n << m << "\n";

	return 0;
}




