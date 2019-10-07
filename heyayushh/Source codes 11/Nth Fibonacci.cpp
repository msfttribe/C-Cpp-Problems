//nth fibonacci no using recursion
#include<iostream>
using namespace std;

int fibonaccino(int n)
{
	if(n==0)
	   return 0;
	else if(n==1)
	   return 1;
	else
	   return (fibonaccino(n-2)+fibonaccino(n-1));
}

int main(void)
{
	int n;
	
	entry:
	
	cout<<"    Enter n  ";
	cin>>n;
	
	if(!n)
	   {
	   cout<<"start counting from 1";
	   goto entry;
       }
	
	cout<<fibonaccino(n-1);
	
}
