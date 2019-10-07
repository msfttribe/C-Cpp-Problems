//a program to search a string
#include<iostream>
using namespace std;

int main (void)
{
	char x[1001],y[100];
	int flag=0,k;
	
	cout<<"enter  ";
	cin.getline(x,1000);
	
	cout<<"you want to find  ";
	cin.getline(y,100);
	
	for(int i=0;x[i]!='\0';i++)
	{
		if(x[i]==y[0])
		{
			flag=1;
			
			for(int j=1,k=i+1;y[j]!='\0';j++,k++)
			{   
				if(x[k]!=y[j])
				{
				   flag=0;
				   break;
			    }
		    }
		    
	        if(flag)
            {
                cout<<"element you searched is on position  "<<i+1<<endl;
            }
					
		}
	}
	if(!flag)
	{
		cout<<"aur jagah nahi mila yaar";
	}
}
