//power (x,y)
#include<iostream>
using namespace std;

int power(int x,int y,int z=1)
{
	if(y==0)
		return 1;
	if(z==y)
		return x;
	return x*(power(x,y,z+1));
}

int main(void)
{
	int x,y,z;
	
	cout<<"Enter  x  ";
	cin>>x;
	
	cout<<"Enter  y  ";
	cin>>y;
	
	z=power(x,y);
	cout<<z;
}
