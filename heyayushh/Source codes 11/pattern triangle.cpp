#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	char m=' ',q;
	int n,i,x,j,k,f;
	
	cout<<"Enter n ";
	cin>>n;
	
	cout<<"Enter Character ";
	cin>>q;
	
	cout<<endl;
	
	for(i=1;i<=n;i++)
	cout<<' ';
	cout<<q<<endl;
	
	for(k=n,f=1;k>1;k--,f=f+2)
	{
		for(x=k;x>1;x--)
		{
			cout<<" ";
		}
		    cout<<q;
		    for(j=1;j<=f;j++)
		        cout<<' ';
		    cout<<q<<endl;
	    }	
}
	

