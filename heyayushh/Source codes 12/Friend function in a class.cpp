//Friend function in a class
#include<iostream>
using namespace std;

class friendcl
{
	private:
		int a,b;
	public:
		friend int sum (friendcl x);
		void set (int,int);
};

void friendcl :: set (int m, int n)
{
	a=m;
	b=n;
}

int sum (friendcl x)
{
	return x.a+x.b;
}

int main()
{
	friendcl r;
	r.set(6,7);
	cout<<"the sum of values is : "<<sum(r);
}
