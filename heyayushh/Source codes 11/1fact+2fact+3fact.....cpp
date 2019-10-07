#include<iostream>
using namespace std;
int main()
{
	int fv,sum,n,i;
	cout<<"enter n -> ";
	cin>>n;
	fv=1,sum=0;
	for(i=1;i<=n;i++)
	{
		fv=fv*(i);
		sum=sum+fv;
	}
	cout<<sum;
}
