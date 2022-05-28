// Array max / min

#include <iostream>
using namespace std;

int main()
{
	int totNum;
	double maxh, minh;
	cout << "How many numbers you want to compare? \n";
	cin >> totNum;

	int i;

	double hightEntry[totNum];

	cout << "Enter the hights one by one: \n" ;

	for (i=0; i<totNum; i++)
	{
		cin >> hightEntry[i];
	}

	//finding the max
	maxh = hightEntry[0];
	for (i=0; i<totNum-1; i++)
	{
		if (maxh < hightEntry[i+1])
			maxh = hightEntry[i+1];
	}
	cout << "The max heigh is: " << maxh << "\n";


	// finding the min
	minh = hightEntry[0];
	for (i=0; i<totNum-1; i++)
	{
		if (minh > hightEntry[i+1])
			minh = hightEntry[i+1];
	}
	cout << "The min heigh is: " << minh << "\n";



	return 0;

}
