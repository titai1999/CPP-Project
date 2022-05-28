// Array

#include <iostream>
using namespace std;

int main()
{
	int i, j, n;
	n=7;      //size, dimension to be n
	int x[n];  //size, dimension of 'x' is n
	//------------------
	for (i=0; i<n; i++)
	{
		cout << i*i << endl;
	x[i]=i*i; // store each step cal in the x[n] 
	}	

	cout << "lets forget everything!" << endl;

	for (i=0; i<n; i++)
	{
	cout<< "Array x[" << i << "]: " << i << "^2= " << x[i] << endl;
	}	


	return 0;
}


