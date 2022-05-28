// 2D Array

#include <iostream>
using namespace std;

int main()
{
	//an array with 3 rows and 2 columns 
	int i, j;
       	int y[3] = {2, 3, 5};
	int x1[3][2] = {{7,2}, {3,6}, {5,8}};
	int x2[3][2] = 
	{
		{7,2}, 
		{3,6}, 
		{5,8}
	};
	//output each array element's value
	for (i =0; i < 3; i++ )
	{
		for (j=0; j<2; j++)
		{
			cout <<  "Element at x[" << i << "][" << j << "]: " << endl;
			cout << x1[i][j] << endl;	
		}
	}
	cout<<x1;
		
	return 0;

//==========================
/*
	7 	2
(	3	6	)
	5	8	
	
	row -> i, col -> j
	11	12
(	21	22	)
	31	32
*/
//==========================
}
