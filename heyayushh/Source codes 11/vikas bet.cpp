#include<iostream>
using namespace std;

void y(void)
{
	cout<<"hi";
	y();
	
}

int main()
{
	y();
}
