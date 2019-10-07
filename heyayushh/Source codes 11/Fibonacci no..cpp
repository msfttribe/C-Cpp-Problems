#include<iostream>

using namespace std;

int main()
{
	int first=0,second=1,third,i;
	
	cout<<"enter n";
	int n;
	cin>>n;
	
	cout<<"\n"<<first<<"\n"<<second;
	
	for (i=1;i<n-1;i++)
	{
		third=first+second;
		first=second;
		second=third;
		cout<<"\n"<<third;
	}
	
	return 0 ;
}

