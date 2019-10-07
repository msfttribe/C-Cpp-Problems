#include<iostream>
using namespace std;
struct Sname
{
	char fname[25];
	char lname[25];
}s1;

class test
{
	int a,b;
	const int max;
	Sname &name;
	
	public:
		test()
		{
			a=0;
			b=10;
			max=300;
			name=s1;
		}
};

int main()
{
	test obj1;
}
