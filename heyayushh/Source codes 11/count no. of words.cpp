#include<iostream>
#include<ctype.h>
using namespace std;

int main (void)
{
	char x[101];
	
	cout<<"enter  ";
	cin.getline(x,100);
	
	int z=1;
    int i;	
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]==' ')
		{
			z=z++;
		}
	}
     
	cout<<z;
}
