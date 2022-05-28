#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double deg, rad;
    //cout<<"Program to Find out  Trigonometric Value of For Common Angles\n";
    cout<<"Enter the Degree: \t";
   
    cin >> deg; 
    cout << "\n";
   
    rad = deg * ((22.0/7.0)/180);
    cout << rad << "\n";		 
    cout <<"\nsin\t"<< sin(rad) <<"\ncos\t"<< cos(rad)<<"\ntan\t"<<tan(rad) <<"\n";
   
    //cout <<"\ncoses\t"<< 1/sin(rad) <<"\nsec\t"<<1/cos(rad)<<"\ncot\t"<<1/tan(rad);

    return 0;
}
