#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double deg, rad;
    //cout<<"Program to Find out  Trigonometric Value of For Common Angles\n";
    cout<<"Enter the Degree: \t";
   
    cin  >> deg; 
    cout << "\n";
   
    rad = deg * (3.14159265358979/180.0);
   
    //cout << " \n sin \t" << sin(rad) << "\n cos \t" << cos(rad) << "\n tan \t" << tan(rad) << "\n";
    //cout << " \n cocos \t" << 1.0/sin(rad) <<"\nsec\t"<<1/cos(rad)<<"\ncot\t"<<1/tan(rad);
    
    cout << rad-(3.14/2.0) << "\n";
    cout << cos(rad) << "\n";

    return 0;
}
