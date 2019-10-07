#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,k,d,sum;
	once_again :
	
	cout<<"enter no. ";
	cin>>n;
	
	sum=0;
	k=n;
		
	do
	{
		d=k%10;
		sum=sum+d*d*d;
		k=k/10;
	}while(k!=0);
	 
	if(n==sum)
    cout<<sum<<" is an armstrong no.";
    else
    cout<<n<<" is not an armstrong no.";
    
    char chara;
    cout<<"\n\n do you want to try ones again";
    cin>>chara;
    
	if(chara=='y') 
	goto once_again ; 
	else
	cout<<" \n exiting";
}

