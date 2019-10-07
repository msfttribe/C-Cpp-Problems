//to count the digits in a no.
#include<iostream>
using namespace std;
int main()
{
	int x,y,z=0;
	cout<<"enter any integer  \n";
	cin>>x;
	
	do
	{
		y=x%10;
		x/=10;
		z++;
	}
	while(x!=0);
	cout<<z;
}
