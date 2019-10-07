#include<iostream>
using namespace std;
#include<conio.h>

void hello(int x,int y)
{
int z;
cout<<"hello world\n";
z=x+y;
cout<<"result:"<<z<<endl;
}
int subtraction(int x,int y)
{
return x-y;
}
main()
{
int a,b,c;

cout<<"enter the two no.\n";
cin>>a>>b;
hello(a,b);
hello(4,7);
c=subtraction(a,b);
cout<<"the subtraction is:"<<c<<endl;
hello(a,b);
getch();
}
