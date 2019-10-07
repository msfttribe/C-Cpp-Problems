//a program to count letters in a word
#include<iostream>
#include<ctype.h>
using namespace std;

int main (void)
{
	char x[101];
	
	cout<<" enter ";
	cin.getline(x,100);
	
	int z=0;
	
	for(int i=0 ;x[i]!='\0' ;i++ )
	{
		if(isalpha(x[i]))
		{
			z=z++;
		}
	}
	cout<<"no. of letters are "<<z;
	
}
