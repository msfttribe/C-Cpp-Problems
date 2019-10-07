#include<iostream.h>
#include<conio.h>
class box
{
public:
static int objectcount;
//constructor defination
box(double l=2.0,double b=2.0,double h=2.0)
{
cout<<"constructor called"<<endl;
length=l;
breadth=b;
height=h;
//increase every time object is created
objectcount++;
}
double volume()
{
return length*breadth*height;
}
private:
double length;
double breadth;
double height;
};
//initialize static member of class box int box::object count=0;
int box::objectcount=0;
int main()
{
double x,y;
clrscr();
box box1(3.3,1.2,1.5); //declare box1
box box2(8.5,6.0,2.0); //declare box2
x=box1.volume();
y=box2.volume();
//print total number of object.
cout<<"total objects:"<<box::objectcount<<endl;
cout<<"result ="<<x<<endl;
cout<<"result ="<<y<<endl;
getch();
}

