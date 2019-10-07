#include<iostream>
using namespace std;
int main()
{
	int x,y,z,n,i,sum=0;
	cout<<"Enter Any Integer...-";
	cin>>n;
	x=n;
    
    while(x!=0)
    {
    	y=x%10;
    	sum=sum*10+y;
    	x=x/10;
    }
    
    cout<<sum;
}
