#include<iostream>
using namespace std;
int main()
{
	int n,j,i,k;
    cout<<"enter n";
    cin>>n;
	
	for(i=n;i>=1;i--)
	{   
 	     cout<<endl;
	        
			 for(j=i;j>=1;j--)
		    { 
		    	cout<<endl; 
			
			     for(k=j;k>=1;k--)
                 cout<<"*";
	    	} 
    
	}
   return 1; 
}
