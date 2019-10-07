//starting recursion
#include<iostream>
using namespace std;

void print(int p,int i=1)
{
	if(i==p+1)
	   return;
	cout<<i<<endl;
	print(p,i+1);
	return;
}

int main(void)
{
	int p;
	cout<<"hooooh   ";
	cin>>p;
	
	print(p);
	
}
