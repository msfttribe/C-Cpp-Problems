#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
    char x[1001],y[5];
	int a,curp=1,ffp=1,m=0,z=0,i,k,j,pos,len1,len2,op=0;
	
	cout<<"enter  ";
	cin.getline(x,1000);
	
	len1=strlen(x);

	for(i=len1-1;i!=0;i--)
	{
	    for(j=0;j<i;j++)
	    {
		if(x[j+1]<x[j])
	    {
	    	     a=x[j];
	     		 x[j]=x[j+1];
		      	 x[j+1]=a;
		}
	    }
	}
	
	cout<<x;
}

