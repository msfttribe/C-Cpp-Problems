//program to capitalize first letter of a word and lowerize all other letters
#include<iostream>
#include<ctype.h>
using namespace std;

int main (void)
{
	char x[101];
	
	cout<<" enter ";
	cin.getline(x,100);
	
    x[0]=toupper(x[0]);

	for(int i=1 ;x[i]!='\0' ;i++ )
	{
		if(x[i]==' ')
		{
			x[i+1]=toupper(x[i+1]);
			i=i+1;
		}
		
		else
		{
			x[i]=tolower(x[i]);
		}
	}
	cout<<"reqd word is "<<x;
	
}
