//to delete any repeated element in a array
#include<iostream>
using namespace std;

int main (void)
{
	char x[101];
	int length=0;
	
	cout<<"enter  ";
	cin.getline(x,101);
	
	for(int len=0;x[len]!='\0';len++,length++);
    
	for(int i=0 ;i<length-1;i++)
	{
		for (int j=i+1;j<length;j++)
		{
			if(x[i]==x[j])
			{
				length--;
				for(int l=j;l<length;l++)
				x[l]=x[l+1];
			    j--;
			}
		}
	}
	x[length]='\0';
	cout<<x;
} 
