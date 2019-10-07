#include<iostream>
using namespace std;

//Command line argument

int main(int argc, char **argv)
{
	cout<<"\n\nRecieved "<<argc<<" Arguments..\n";
	for(int i=0; i<argc ; i++)
	cout<<"Argument "<<i<<" : "<<argv[i]<<endl;
}
