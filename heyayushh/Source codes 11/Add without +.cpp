#include<iostream>
using namespace std;

int main (void)
{
	int a,b,sum;
	
	cout<<"enter a,b ";
	cin>>a>>b;
	
	sum=a-~b-1;
	cout<<sum;
}
	
	
