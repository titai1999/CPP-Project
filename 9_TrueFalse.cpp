// True / False

#include <iostream>
using namespace std;

int main()
{
	bool isMale = true;
	bool isTall = true;
       
	if (isMale)

       if (isMale&& isTall)
       {
	       cout << "The person is tall male" << endl;
       }	       
       else if (!isMale && !isTall)
       {
	       cout << "The person is short female" << endl;
       }
       else if (isMale && !isTall)
       {
	       cout << "The person is short male" << endl;
       }
       else 
	{
		cout << "The person is tall female"<< endl;
	}

	return 0;
}


