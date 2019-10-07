#include<iostream>
using namespace std;

void fibo(int n)
{
 	static long int first=0,second=1,sum;
	 if(n)
 	{
 		sum=first+second;
 		first=second;
 		second=sum;
 		cout<<'\t'<<sum;
 		fibo(n-1);
	 }
	 return;
}

int main(void)
{
	int x,y;
	
	cout<<"Upto n= ";
	cin>>x;

    if(x<0)
	   {
	   cout<<"th no. you entered can't be negetive ";
	   exit(x);
       } 
	
	switch(x)
	{
		case 0:  cout<<"0";break;
		case 1:  cout<<"1";break;
		case 2:  cout<<"1";break;
		default: cout<<"0"<<'\t'<<"1";
		         fibo(x-2);break;
	}
}
