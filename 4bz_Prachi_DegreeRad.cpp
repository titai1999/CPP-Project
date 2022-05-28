#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double theta, x, y, scale;
	cin >> theta;
	scale = 3.141592653589/180.0 ;
	x = theta*scale;
	y=sin(x);
	cout << y << "\n";
	cout << asin(y)/scale << " degree \n";

	return 0;
}




