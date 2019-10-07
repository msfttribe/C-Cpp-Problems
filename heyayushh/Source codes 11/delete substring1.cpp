//a program to search a string
#include<iostream>
#include<string.h>
using namespace std;

char find(char x[],char y[])
{ 
	int k,z,flag=0;
	int static i=-1;
	for(i++;x[i]!='\0';i++)
	{
		if(x[i]==y[0])
		{
			flag=1;
			return i;
			for(int j=0,k=i;y[j]!='\0';j++,k++)
			{  
				if(x[k]!=y[j])
				{
					i++;
				   flag=0;
				   break;
			    }
		    }
	    if(flag)
        { 
         z=i;
         i++;
         return z;
        }			
		}
	}
	if(!flag)
	{
		i++;
		return 0;
	}
}

int main(void)
{
    char x[1001],y[5];
	int k,j,pos,len1,len2;
	
	cout<<"enter  ";
	cin.getline(x,1000);
	
	cout<<"you want to delete  ";
	cin.getline(y,100);
	
	len1=strlen(x);
	len2=strlen(y);

    for(int z=0;z<len1;z++)	
    {
    	for(int m=0;m<len1-1;m++)	
        {
        	pos=find(x,y);
        		cout<<pos;
 	           for (;x[pos+1]!='\0';pos++)
		       {
		        	 x[pos]=x[pos+1];
	           }
	           len1--;	
 	    }
    }
    cout<<endl;
	cout.write(x,len1);
}


