#include<iostream>
using namespace std;
int main()
{
	int x,y,z,n,i,sum=0;
	cout<<"Enter Any Integer...-";
	cin>>n;
	
	do
	{
		y=n%10;
		n=n/10;	
		sum+=y;
    }while(n!=0);
    
    cout<<sum;
    return 0;
}
