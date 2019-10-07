/*  Program to print pyramid pattern in C : Pattern 5  */ 
#include <stdio.h>
#include <conio.h>
int main() 
{ 
      int i,j,k,t=0;  
  for(i=1; i<=5; i++) 
   {  
    for(k=t; k<5; k++) 
	  {   
	   printf(""); 
	  }   
		 for(j=0; j< i; j++) 
		   {  
		     printf("*");  
			   t = t + 1;
	       } 
	   printf("\n"); 
   }  
   getch();
}
