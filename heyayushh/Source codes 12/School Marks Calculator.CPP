#include<iostream.h>
#include<conio.h>
class student
{
protected:
int rno,m1,m2;
public:
void get()
{
cout<<"enter the roll no:";
cin>>rno;
cout<<"enter the two marks:";
cin>>m1>>m2;
}
};
class sports
{
protected:
int sm;
public:
void getsm()
{
cout<<"\n enter the sports marks:";
cin>>sm;
}};
class statement:public student,public sports
{
int tot,avg;
public:
void display()
{
tot=(m1+m2+sm);
avg=tot/3;
cout<<"\n\n\t roll no:"<<rno<<"\n\t total:"<<tot;
cout<<"\n\t average:"<<avg;
}
};
void main()
{
clrscr();
statement obj;
obj.get();
obj.getsm();
obj.display();
getch();
}
