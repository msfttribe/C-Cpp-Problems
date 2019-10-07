#include<iostream>
#include<string.h>
using namespace std;
int main (void)
{
	char x[101] ;
	int j,strlen,i;
	int flag=1;
	
	cout<<"enter  - ";
	cin.getline(x,100) ;
	
	j=-1;
	
    for(int len=1;x[len]!='\0';len++)
    {
    	j=j++;
    }
	
	for(int i=1 ; i<=j/2 ; i++,j--)
	{
		if(x[i]!=x[j])
		{
		flag=0;
		break;	
		}
	}
	
	if(flag)
	   cout<<"is a PALINDROME";
	else
	   cout<<"is not a palindome :(";
	
	
}
