//to check maximum and minimum in a array

#include<iostream>
#include<ctype.h>
using namespace std;

int main (void)
{
	char x[101],max=0,min=0;
	
	cout<<" enter ";
	cin.getline(x,100);
	
	for(int i=1;x[i]!='\0';i++)
	{
		if(x[i]>max)
		{
		   max=x[i];
	    }
		if(x[i]<min)
		{
	     min=x[i];
	    }
	}
	
	cout<<"max is "<<max<<"  and min is "<<min;
}
