#include<iostream>
using namespace std;
int main()
{
	int x,y,z,a,sum=0;
	
	cout<<"enter any no.";
	cin>>x;
	a=x;
	do
	{
		y=x%10;
		sum=sum*10+y;
		x=x/10;
	}
	while(x!=0);
	
    if (a==sum)
	cout<<"eureka";
	else
	cout<<"shit";
}
