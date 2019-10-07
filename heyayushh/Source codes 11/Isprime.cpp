#include<iostream>
using namespace std;

bool isprime(int p,int i=2)
{
	if(p==1)
	   return 0;
	if(i==p)
	   return 1;
	if(p%i==0)
		return 0;
	return isprime(p,i+1);
}

int main(void)
{
	int x;
	
	cout<<"Enter  ";
	cin>>x;
	if(isprime(x))
		cout<<"The no. you entered is a Prime no...";
	else
		cout<<"The no. you entered is not a prime no...";
	
}
