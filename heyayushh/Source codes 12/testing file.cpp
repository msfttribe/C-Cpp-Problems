//Testbook ques.. HOTS

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;

class ADMISSION
{
	private :
		
	int AD_NO;
	char NAME[25];
	char CLASS;
	float FEES;
	
	public:
			void Read_info();
			void Display();
			void Draw_nos(ADMISSION O[]);
};

void ADMISSION::Read_info()
{	
	add:
	
	cout<<"Enter Admission no."<<endl;
	cin>>AD_NO;
	if(AD_NO>10 and AD_NO<2000)
	{
		cout<<"Enter Name"<<endl;
		cin.getline(NAME ,25);
		
		cout<<"Enter Class"<<endl;
		cin>>CLASS;
		
		cout<<"Enter Fees"<<endl;
		cin>>FEES;
	}
	else
	{
		cout<<"You entered The Admission no. whish is not in Range \n try again";
		goto add ;
	}
	
}

void ADMISSION::Display()
{
	cout<<"Admission no.  :  "<<AD_NO<<endl;
	cout<<"Name           :  "<<NAME<<endl;
	cout<<"Class          :  "<<CLASS<<endl;
	cout<<"Fees           :  "<<FEES<<endl<<endl;
}

void ADMISSION::Draw_nos(ADMISSION O[])
{
	unsigned int i,z1,z2;
	
	srand(time(NULL));
	
	 z1=rand()%2000+10;
	
	srand();
	
	 z2=rand()%2000+10;
	 
	 for(i=0;i<2000;i++)
	{
		if(O[i].AD_NO==z1 )
		 {
		   cout<<"Random no. generated "<<endl<<endl;
		   cout<<"Admission no. "<<O[i].AD_NO<<endl;
		   cout<<"Name          "<<O[i].NAME<<endl;
	       cout<<"class         "<<O[i].CLASS<<endl;
	       cout<<"Fees          "<<O[i].FEES<<endl<<endl;
		 }
		 else if (O[i].AD_NO==z2)
		 {
		 	 cout<<"Random no. generated "<<endl<<endl;
		   cout<<"Admission no. "<<z2<<endl;
		   cout<<"Name          "<<O[i].NAME<<endl;
	       cout<<"class         "<<O[i].CLASS<<endl;
	       cout<<"Fees          "<<O[i].FEES<<endl<<endl;
		 }
		 else
		 {
		 	continue;
		 }  	
	}	
}

