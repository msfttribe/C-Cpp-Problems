#include<iostream>
using namespace std;
int main()
{
	float  first,sum,x,n,i;
	
	cout<<"enter n ";
	cin>>n;
    cout<<"enter x ";
    cin>>x;
    
    first=1,sum=1;
    for(i=1;i<n;i++)
    {
    	first=(first*x)/i;
    	sum=first+sum;
    }
    
    cout<<sum;
    return 0;
}
