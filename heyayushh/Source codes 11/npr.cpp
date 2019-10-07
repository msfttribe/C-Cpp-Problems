#include<iostream>
using namespace std;
// program to ncr

int fact (int k)
{
	int a,i,facto=1;
	for(i=1;i<=k;i++)
	{
		facto=facto*i;
	}
  return facto;
}	

int main (void)
{
	int j,n,r;
	cout<<"enter n and r ";
	cin>>n>>r;
	
	j=fact(n)/fact(r);
	cout<<j;
}
