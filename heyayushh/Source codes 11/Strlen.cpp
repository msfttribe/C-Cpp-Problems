//to find length of a string
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	 char x[100];
	 int len1,j=0;
	 
	 cout<<"enter  ";
	 cin.getline(x,100);
	 
	 len1=strlen(x);
	 cout<<len1<<endl;
	 for(int len=0;x[len]!='\0';len++)
    {
    	j=j+1;
    }
     cout<<j;

}
