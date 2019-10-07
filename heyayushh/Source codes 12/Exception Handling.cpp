#include<iostream>
using namespace std;

// Exception Handling

int main()
{
	int x=-2;
	// same code
	cout<<"before trY";
	
	try
	{
		cout<<"Inside try"<<endl;
		if(x<0)
		{
			throw x;
			cout<<<<"After Throw (never executed)"<<endl;
			;
		}
	}
	
	catch (int x)
	{
		cout<<"Exception Caught";
	}
	
	cout<<"After Catch( Wil be executed";
	
	return 0;
}
