//Ispalindrome
#include<iostream>
#include<string.h>
using namespace std;

bool ispalindrome(char s[],int len,int i=0)
{
	if(i!=len/2)
	   return 1;
	else
	   return s[i]==s[len-1] && ispalindrome(s,len--,i++);
}

int main (void)
{
	char x[100];
	int len;
	
	cout<<"Please enter a string  ";
	cin.getline(x,100);
	
	len=strlen(x);
	
	if(ispalindrome(x,len))
	   cout<<"Palindrome";
	else
	   cout<<"not palindrome";
}
