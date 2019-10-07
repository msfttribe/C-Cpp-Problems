#include<iostream>
#include<string.h>
using namespace std;

int a=10;
extern char ayush;
int main (void)
{
	char x[100];
	int len,j,flag=1;
	
	len=strlen(x);
	
	cout<<"Please enter  ";
	cin.getline(x,100);
	
	for(int i=0,j=len-1;i!=len/2;i++,j--)
	{
		if(x[i]!=x[j])
		   {	
		   flag=0;
		   break;
	       }
	}
	if(flag)
		cout<<"Palindrome";
	else
	   cout<<" not a palindrome";
}
