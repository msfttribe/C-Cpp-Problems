#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	int x,y,z;
	
	Main:
	cout<<endl<<endl<<"              A MATHEMATICS PROJECT   "<<endl<<endl<<endl<<"    Enter the desired value: "<<endl<<endl<<" 1. Take Quiz "<<endl<<" 2. About "<<endl<<" 3. Exit"<<endl<<endl<<"Waiting for Reply : ";                                
	cin>>x;
	
	switch (x) 
	{
		case 1 : cout<<endl<<endl<<" Get Ready"<<endl<<endl<< "Press 1 When Ready"<<endl<<"Press 2 For Main Menu"<<endl<<endl<<"Waiting for Reply : ";
		        cin>>y;
		        if(y==1)
		        cout<<" Question 1:"<<endl<<endl<<" A worm can gnaw through 1 mm of paper for a single day. On a bookshelf there are two volumes , A each 4 cm thick. Each of the covers is 2 mm thick. How long will it take the warm to gnaw from the first page of the first volume to the last page of the second volume?";                                        
      else if(y==2)
		        goto Main;
		        else
		        cout<<endl<<endl<<"Enter the correct no.";
		        break;
		        
		case 2 : cout<<endl<<endl<<"Made By Ayush"<<endl<<endl<<"Press 2 For Main Menu"<<endl<<endl;
		        cin>>y;
		        if(y==2)
		        goto Main;
				break;
		
		case 3 : exit ;
		
		
	}          
return 0;

<<endl<<
}
