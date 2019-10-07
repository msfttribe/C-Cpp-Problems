#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float f,first,sum,x,n,i;
	
	cout<<"enter n ";
	cin>>n;
	
    x=1,first=1,sum=1;
    for(i=1,x=1;i<n;i++,x++)
    {
    	for (f=1;f<x;f++)
    	{
    	first=(1/i)*(1/x);	
    	}
		sum=sum+first;
		for(f=1;f<x;f++)
    	{
    		first=first*first;
    	}
	}
    
    cout<<sum;
    return 0;
}
