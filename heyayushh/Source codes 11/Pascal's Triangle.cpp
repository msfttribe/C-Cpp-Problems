#include<iostream>
#include<string.h>
using namespace std;

int main (void)
{
	int i,j,k=2,l,m,n,o,p=0;
	
	cout<<"Enter N:  ";
	cin>>n;
	
	o=n;
	
	for(m=0;m<o;m++)
	{
		j=p;
		
		for(i=0;i<n;i++)
		    cout<<" ";
		
		for(l=1;l<k;l++)
		    cout<<l;
		
		for(;j>0;j--)
			cout<<j;
			
		k++,n--,p++;
		cout<<endl; 
	}

}

