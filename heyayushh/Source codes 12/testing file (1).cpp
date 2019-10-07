#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

class ADMISSION
{
	
	public:
		
	int AD_NO;
	char NAME[25];
	char CLASS;
	float FEES;
	
			void Read_info();
			void Display();
			void Draw_nos(ADMISSION O[], int n);
};

void ADMISSION::Read_info()
{
	add:
	
	cout<<"Enter Admission no."<<endl;
	cin>>AD_NO;
	if(AD_NO>10 and AD_NO<2000)
	{
		cout<<"Enter Name"<<endl;
		cin.getline(NAME,25);
		cout<<"Enter Class"<<endl;
		cin>>CLASS;
		cout<<"Enter Fees"<<endl;
		cin>>FEES;
	}
	else
	{
		cout<<"You entered The Admission no. whish is not in Range \n try again\n\n";
		goto add ;
	}
	
}

void ADMISSION::Display()
{
	cout<<"Admission no.  :  "<<AD_NO<<endl;
	cout<<"Name           :  "<<NAME<<endl;
	cout<<"Class          :  "<<CLASS<<endl;
	cout<<"Fees           :  "<<FEES<<endl;
}

void ADMISSION::Draw_nos( ADMISSION O[], int n)
{
	int i,y;
	
	for(i=0;i<2;i++)
	{
		srand(time(NULL));
		y=rand()%n;
		O[y].Display();
	}
}



int main()
{
	int n,i;
	
	cout<<"Enter the no. of students taking admission in year 2015";
	cin>>n;
	
	ADMISSION O[n];
	
	for(i=0;i<n;i++)
	{
	
		O[i].Read_info();
		cout<<endl;
	}	
	
	int choice;
	
	cout<<"what do you want to do ";
	cout<<endl<<" Enter Choice"<<endl;
	do
	{
		cout<<"1. Display Students "<<endl;
		cout<<"2. Display  2 Random Students"<<endl;
		cout<<"3. Exit "<<endl;
		
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"you chose to Display students  ";
			        for(i=0;i<n;i++)
			            O[i].Display();
						cout<<endl;
			        break;
			case 2: cout<<"you chose to Display 2 random student";
			        O[1].Draw_nos(O,n);
					break;     
			case 3: cout<<" Exiting. Thanks to use my program";
			        break;
			
	    }
	}while(choice>=1 and choice<3);
	
	return 1;
}
