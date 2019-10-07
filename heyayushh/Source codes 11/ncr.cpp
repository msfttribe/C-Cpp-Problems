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

int main(void)
{
	int r,n,j;
	cout<<"enter n and r"<<endl;
	cin>>n>>r;
	
	j=fact(n)/fact(n-r)/fact(r);
	cout<<j;
}
