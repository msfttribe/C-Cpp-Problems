// Copy Constructor
#include<iostream>
using namespace std;

class Sample
{
	int i,j;
	public:
		Sample(int a, int b)
		{
			i=a;
			j=b;
		}
		Sample(Sample &s)
		{
			j=s.j;
			i=s.i;
		}
		void print()
		{
			cout<<i<<j<<'\n';
		}
};

int main()
{	
	cout<<" Enter a,b to initialize s1\n";
	int a,b;
	cin>>a>>b;
	Sample s1(a,b);
	
	cout<<"object s1 was intilaised as\n\n";
	s1.print();
	
	cout<<"copying object s2 into s1\n\n";
	
	Sample s2=s1;
	
	cout<<"object s2 was intialised as\n";
	s2.print();
}
