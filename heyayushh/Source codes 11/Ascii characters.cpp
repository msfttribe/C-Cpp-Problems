#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int ascii;
	
	for(ascii=0;ascii<=255;ascii++)
	{
		cout<<"The character "<<(char)ascii<<" has ASCII code no. as "<<ascii<<endl;
	}
}
