#include <iostream>
using namespace std;

int calCube (int num)
{
	int numCube;
	numCube= num*num*num;
	return numCube;
}


int main ()
{
	int answer = calCube(3);
	cout << answer << "\n";	

return 0;
}

