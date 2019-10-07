//Ispalindrome
#include<iostream>
#include<string.h>
using namespace std;

bool ispalindrome(char*s,int len)
{
	if(len<2)
	   return 1;
	else
	   return s[0]==s[len-1] && ispalindrome(&s[1],len-2);
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
