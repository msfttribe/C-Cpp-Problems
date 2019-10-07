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

int main()
{
	int x,flag,n,i,z,count=0;
	
	cout<<"Enter n   ";
	cin>>n;
	
	for(x=2; ;x++)
	{	
		if(isprime(x))
	    {
	    	count++;
	    	if(count==n)
	    	{
	    		cout<<x;
	    		break;
		    }
	    }
	}
}
