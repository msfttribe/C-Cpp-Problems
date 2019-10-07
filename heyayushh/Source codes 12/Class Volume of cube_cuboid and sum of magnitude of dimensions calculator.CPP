#include<iostream.h>
#include<conio.h>
class abc
{
public:
int b,l,w;
volume();
add(int a,int b);
};
abc::volume()
{
return b*l*w;
}
abc::add (int a,int b)
{
return a+b;
}
main()
{
abc ob1,ob2;
int w,t;
clrscr();
ob1.b=2;
ob1.l=3;
ob1.w=6;
ob2.b=3;
ob2.l=8;
ob2.w=7;
cout<<"result="<<ob1.volume()<<endl;
cout<<"result="<<ob2.volume()<<endl;
w=ob1.add(2,5);
t=ob2.add(4,7);
cout<<"result of addition ="<<w<<endl;
cout<<"result of addition ="<<t<<endl;
getch();
}
