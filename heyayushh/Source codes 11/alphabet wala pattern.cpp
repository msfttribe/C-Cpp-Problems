#include<iostream>
using namespace std;
int main()
{
	char n,i;
	int j;
    cout<<"enter n\n";
    cin>>n;
	
	for(i='a';i<=n;i++)
	{   
	    cout<<endl;
		for(j=i;j<=n;j++)
			cout<<i;
   	}
   return 0; 
}
