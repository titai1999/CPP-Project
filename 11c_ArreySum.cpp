// Array sum

#include <iostream>
using namespace std;

int main()
{
	int i, numStud, totalMoney1, totalMoney2;
	cout << "How many students?" << endl;
	cin  >> numStud;
	int amt[numStud];
	cout << "tell me the amount one by one"<< endl;
	
	for (i=0; i<numStud; i++)
	{
	cin >> amt[i];
	}
	
	cout << "the output " << endl;
	for (i=0; i<numStud; i++)
	{
	cout << amt[i] << endl;
	}
	
	totalMoney1=0; 
	totalMoney2=0; 
	for (i=0; i<numStud; i++)
	{
	totalMoney1 = totalMoney1 +  amt[i] ; // traditional way
	totalMoney2 +=  amt[i] ; // operator way
	
	}
	cout << "The total amount of money calculated in traditional way: " << totalMoney1 << endl; 
	cout << "The total amount of money calculated in operator way: " << totalMoney1 << endl; 
	return 0;
}
