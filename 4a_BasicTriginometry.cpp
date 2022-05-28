// C++ program to illustrate trigonometric functions
// and their corresponding inverses 
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x = 2.3;  //radian 
    	cout 	<< "Sine value of x = 2.3: "
        	<< sin(x) << endl; 
  
    	cout	<< "Cosine value of x = 2.3: "
         	<< cos(x) << endl; 

	cout 	<< "Tangent value of x = 2.3: "
        	<< tan(x) << endl;

    	double y = 1.0; //Suitable value
    	cout 	<< "Arc Cosine value of y = 1.0: "
        	<< acos(y) << endl; 

	cout 	<< "Arc Sine value of y = 1.0: "
        	<< asin(y) << endl; 
  
	cout 	<< "Arc Tangent value of y = 1.0: "
         	<< atan(y) << endl; 

	double  a = 2.3, b = 1.0; //value of x, y or a, b : two length
    	cout 	<< "Arc Tangent 2 value of a = 2.3 and b = 1.0: "
         	<< atan2(a, b) << endl; 
	//atan2: This function returns the arc tangent of (a)/(b)
  
	double z = 57.3; // in degrees 
	cout 	<< "Hyperbolic Cosine of z=57.3: "
         	<< cosh(z) << endl; 

	cout 	<< "Hyperbolic Tangent of z=57.3: "
         	<< tanh(z) << endl; 

	return 0;
}
