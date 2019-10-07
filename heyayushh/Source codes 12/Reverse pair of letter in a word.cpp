#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	char temp,string[140];
	
	cout<<"enter text\n";
	cin.getline(string,sizeof(string));
	
	int j=0;
	
	while(string[j+1]!='\0')
	{
		if(string[j]!=' ')
		{
			temp=string[j];
			string[j]=string[j+1];
			string[j+1]=temp;
			j+=2;
		}
		else
		    j++;
	}
	
	for(int i=0;string[i]!='\0';i++)
	cout<<string[i];
}
