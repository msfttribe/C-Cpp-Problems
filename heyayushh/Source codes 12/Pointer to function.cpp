#include<iostream>
#include<time.h>
using namespace std;
// Pointer to function

void getSeconds (unsigned long *par)
{
	// get the no. of seconds
	*par=time(null);
	return;
}

int main()
{
	unsigned long sec;
	getSeconds(&sec);
	
	//Print actual value
	
	cout<<"Number of seconds:"<<sec<<endl;
	
	return 0;
	
}
