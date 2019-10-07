//simple pattern arrray wala
#include<iostream>
using namespace std;

int main (void)
{
	char x[101];
	int length=0;
	
	cout<<"enter  ";
	cin.getline(x,101);
	
	for(int len=0;x[len]!='\0';len++)
    	length++;
	
    for(int i=0;i<=length;i++)
	{
		for(int j=0;j<i;j++)
		cout<<x[j];
		cout<<'\n';
	}
	   
}
