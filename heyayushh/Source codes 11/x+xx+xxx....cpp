#include<iostream>
using namespace std;
int main()
{
	int first=1,sum=0,i,n,x;
	cout<<"enter x ";
	cin>>x;
	cout<<"enter n ";
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		first=first*x;
	    sum=sum+first;
	}
  
  cout<<sum;
return 0;	
}
