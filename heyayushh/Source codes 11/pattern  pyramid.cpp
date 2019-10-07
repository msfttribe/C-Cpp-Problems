#include<iostream>
using namespace std;
int main()
{
	int row,c,n,temp;
	cout<<"enter n";
	cin>>n;
	
	temp=n;
	
	for(row=1;row<=n;row++)
	{ 
		for(c=1;c<temp;c++,temp--)
		{
			cout<<"  ";
			for(int j=1;j<=2*row-1;j++)
			{
				cout<<"*"<<"\n" ;
			}
		}
	}
	
}
