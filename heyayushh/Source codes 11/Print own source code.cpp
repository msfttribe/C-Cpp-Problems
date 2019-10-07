#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	FILE*fp=fopen(_FILE_,"r");
	char c;
	cout<<"hello";
	while(!feof(fp))
	{
		c=fget(fp);
		cout<<c;
	}
	return 0;
}
