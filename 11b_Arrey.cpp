// Array

#include <iostream>
using namespace std;

int main()
{
	int i, noOfStudents;	//integer
      	noOfStudents = 5;	
	double marks[noOfStudents]; //integer
	
	//marks[0] = 12.5;
	//marks[1] = 5.6;
	//marks[2] = 23.8;

	
	cout << "Please enter marks of the students" << endl;
	for (i=0; i < noOfStudents; i++)
	{
		cin >> marks[i] ;
	}
	
	//cout << marks[0] << " , " << marks[1]<< " , "  << marks[2]<< " "  << endl;

	cout << "The marks are:" << endl;
	for (i=0; i < noOfStudents; i++)
	{
		cout << marks[i] << endl;
	}

	return 0;
}


