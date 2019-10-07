//Template in c++
#include<iostream>
using namespace std;
//using template

template <class t>
class mypair
{
	t a,b;
	public:
		mypair(t first, t second)
		{
			a=first;
			b=second;
		}
	    t getmax();
};

template <class t>
t mypair<t>::getmax()
{
	t retval;
	retval = a>b?a:b;
	return retval;
}
int main()
{
	int i,j;
	
	cout<<"enter i";
	cin>>i;
	cout<<"enter j";
	cin>>j;
	mypair<int> myobject(i,j);
	cout<<myobject.getmax();
	
}

