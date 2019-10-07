#include<iostream>
#include<string.h>
using namespace std;

int a=10;
extern char ayush;
int main (void)
{
	char str1[100],x[100];
	
	cout<<"Please enter a string  ";
	cin.getline(x,100);
	
	strcpy(str1,x);
	strrev(x);
	
	if(!strcmp(str1,x))
	   cout<<"Palindrome";
	else
	   cout<<"not Palindrome";
}
