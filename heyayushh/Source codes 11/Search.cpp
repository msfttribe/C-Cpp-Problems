//a program to search a string which you gave as input upto 3
#include<iostream>
#include<ctype.h>
using namespace std;

int main (void)
{
	char x[1001],y[5];
	int flag=1;
	
	cout<<"enter  ";
	cin.getline(x,1000);
	
	cout<<"you want to find  ";
	cin.getline(y,4);
	
	for(int i=0;x[i]!='\0';i++)
	{
		if(x[i]==y[0])
	    {
	    	if(x[i+1]==y[1])
	    	{
	    		if(x[i+2]==y[2])
	    		{
	    			flag=0;
	    			cout<<"element found at position "<<i+1<<'\n';
	    		}
	    	}
	    }
	}
    
    if(flag)
    {
    	cout<<"element you searched for is not anywhere in the text ";
    }
}
