#include<iostream.h>
#include<conio.h>
class A
{
public :
int a, b;
public:
A()
{
a=b=0;
}
A(int x,int y)
{
a=x;
b=y;
}
};
class B
{
public :
int a,b;
public:
B()
{
a=b=0;
}
B(int x,int y)
{
a=x;
b=y;
}
friend void display(A a,B b)
};
void display(A t1,B t2)
{
cout<<"a*b="<<t1.a*t1.b<<endl;
cout<<"a+b="<<t2.a+t2.b<<endl;
}
void main()
{
clrscr();
A a(2,5);
B b(3,6);
display(a,b);
getch();

}
