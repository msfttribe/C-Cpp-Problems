//a program to search a string
#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
    char x[1001],y[5];
	char k,j,pos,len1,len2,op=0;
	
	cout<<"enter  ";
	cin.getline(x,1000);
	
	cout<<"you want to delete  ";
	cin.getline(y,100);
	
	len1=strlen(x);
	len2=strlen(y);


	

    for(int z=0;z<len2;z++)	
    {
 	    int k,flag=0;
	    for(char i=0;x[i]!='\0';i++)
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
                    pos=i;
                    for (;x[pos+1]!='\0';pos++)
		            {
			             x[pos]=x[pos+1];
	                }
	              op++;  
                 }			
		      }
	    }
		
    }
    len1-=op;
	cout.write(x,len1);
}


