#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
    char x[1001],a;
    int len;
    
    cin.getline(x,1001);
    
    len=strlen(x);
    
    for(int i=0,j=len-1;i<len/2;j--,i++)
    {
    	a=x[i];
    	x[i]=x[j];
    	x[j]=a;
    	
    }
    cout<<x;
}
