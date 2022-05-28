#include <iostream>
using namespace std;


int return5()
//int return 5()	// Compilation error!!!
//int 5()		// Compilation error!!!
{
	return 5;
}


int main()
{
	cout << return5()<< '\n';
	//cout << return 5()<< '\n';
	//cout << 5()<< '\n';
	return 0;
}
