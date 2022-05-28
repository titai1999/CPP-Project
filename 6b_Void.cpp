
#include <iostream>
using namespace std; 

 
// void means the function does not return a value to the caller
void returnNothing()
{
    cout << "Hi, it is an output from void" << '\n';
    // This function does not return a value so no return statement is needed
}
 
int main()
{
    	returnNothing(); // okay: function returnNothing() is called, no value is returned
 
    	//cout << "a return value" << returnNothing(); 
	// error: The above line will NOT compile.  You'll need to comment it out to continue.
 
    return 0;
}
