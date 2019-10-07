#include<iostream>
using namespace std;

int main()
{
	int x[3][3];
	int y[9],i,j,k;
	
	cout<<"enter the array you want to convert\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter elment \n";
			cin>>x[i][j];
		}
	}
	for(i=0,k=0;i<3;i++)
	{
		for(j=0;j<3;j++,k++)
		{
			y[k]=x[i][j];
		}
	}
	cout<<y;
}
