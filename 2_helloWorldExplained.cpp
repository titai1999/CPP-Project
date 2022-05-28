

#include<iostream> // It provide some facilities, available to some other program. iostream is part of standard c++ library. 
//  Its allow to take inputs from key board and provide output on the monitor. 

using namespace std; // namespace saves many keystrokes, will disscuss more when we discuss Classes function etc


int main() // This is the main function/body after the header above. Every C++ requires a main function. Lets look at the actual code at the body, it start with the open brace '{' and ends with the closing brace '}'. All the code with in the brace is the actual code. 

{
	cout<< "Hello World, \n Welcome to my first C ++ program \n \n" ; // cout stand for the character output of the string. This provide the ability to display something on the screen. Next we have this <<, which call output or insertion operator. Then \n is the new line character. 

// All c++ statements should be terminated by a semicolon (;)

	
  return 0;  // The last line of code. All function has to be specified by a return type. Any function has to return something and the return type has to be specified that is int (integer).  It means the function main returning the values of zero (0). 

//This 0 values simply says that our program has run and terminated successfully. But you might be wondering where it is returning to? It will be returned to anyone whoever call 'main'.   

}

