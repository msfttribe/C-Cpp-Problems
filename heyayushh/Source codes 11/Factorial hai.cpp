#include<iostream>
using namespace std;

long factorial(int x)
{
	if(x==1)
		return 1;
	else
	    return (factorial(x-1)*x);
}
int main(void)
{
	int x,y;
	
	cout<<"enter  ";
	cin>>x;
	
	y=factorial(x);
}
