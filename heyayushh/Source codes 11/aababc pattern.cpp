#include<iostream>
using namespace std;
int main()

{
	int i,j,n;
	char ch='a';
	
	cout<<"enter  ";
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		ch='a';
		for(j=1;j<=i;j++,ch++)
		{
			cout<<ch;
		}
		
	  cout<<endl;
	}
}
