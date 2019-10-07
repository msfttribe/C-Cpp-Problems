//Ispalindrome
#include<iostream>
#include<string.h>
using namespace std;

int main (void)
{
	char x[100];
	int len,i,j;
	
	cout<<"enter len  ";
	cin>>len;
	
	for(i=0;i<=len;i=i+2)
	{
		x[i]='*';
		x[i+1]='#';
	}
	
	for(i=0;i<=len;i++)
    {
    	for(j=0;j<=i;j++)
    	    cout<<x[j];
    	cout<<endl;
	}
}

