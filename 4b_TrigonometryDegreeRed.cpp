#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	double theta, x, piRad;
	//theta=180; // pi is represented in degree
	cout << "give me the value in degree\n" ;
	cin >> theta ;
	piRad=theta*(3.14/180.0);
	x=piRad;
	cout << "Sin of " << theta << " degree is : " << sin(x) << "\n";
	cout << "Cos of " << theta << " degree is : " << cos(x) << "\n";

	return 0;
}
