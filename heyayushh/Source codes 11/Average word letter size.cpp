//to give average word size using a function
#include<iostream>
#include<ctype.h>
using namespace std;

float AVWZ(char x[])
{
	int letter =0;
	int word=1;
	
	for(int i=0;x[i]!='\0';i++)
	{
		if(x[i]==' ')
		{
			word=word++;
		}
	   else
	   {
	   	if(isalpha(x[i]))
	   	{
	   		letter=letter++;
	   	}
	   }
	}
	
	float average=letter/word;
	
	return average;
}

int main()
{
	char x[101];
	float z;
	
	cout<<"enter  ";
	cin.getline(x,101);
	
	z=AVWZ(x);
	
	cout<<z;
}
	
	
