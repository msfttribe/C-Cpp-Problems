#include<iostream>
using namespace std;

int facti(int curn,int sum);
int fact(int n)
{
	if(n==0)
	   return 1;
	return facti(n,1);
}
int facti(int curn,int sum)
{
	if(curn==1)
	   sum;
	else
	   return facti(curn-1,sum*curn); 
}

int main(void)
{
	long int x,y;
	
	cout<<"Enter x  ";
	cin>>x;
	
	y=fact(x);
	cout<<endl<<y;
}
