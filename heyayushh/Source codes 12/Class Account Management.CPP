#include<iostream>
using namespace std;

#include<conio.h>
class account
{
private:
int account_no;
int balance;
public:
account(int a,int b)
{
account_no=a;
balance=b;
}
void display()
{
cout<<"\n account number is:"<<account_no;
cout<<"\n balance is:"<<balance;
}
};
int main()
{
int an,bal;
cout<<"enter account no:";
cin>>an;
cout<<"\n enter balance:";
cin>>bal;
account*acc=new account(an,bal);
acc->display();
getch();
}

