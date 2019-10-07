//Pythagorean Triplets between m-n
#include<iostream>
#include<math.h>
using namespace std;

void sq(int & x)
{
	x=x*x;
	return;
}

int main ()
{
	int m,n,x,y,z;
	
	cout<<"enter m, n ";
	cin>>m>>n;
	
	float zr;
	for (int i=m;i<=n;i++)
	{
		x=i;
		sq(x);
		for(int j=m;j<=n;j++)
		{
			y=j;
			sq(y);
			z=x+y;
			zr=sqrt(z);
			if(zr-(int)zr==0)
			{
				cout<<" a= "<<i<<" b= "<<j<<" c= "<<zr<<endl;
			}
		}
	}
}
