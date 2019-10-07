#include<iostream.h>
#include<conio.h>
class vikas
{
public:
int p,q,r;
vikas()
{
cout<<"default constructor\n hello vikas=\n";
}
vikas(int x,int y,int z)
{
p=x;
q=y;
r=z;
}
show()
{
cout<<"result =\n"<<p<<endl<<q<<endl<<r<<endl;
}
};
main()
{
int w;
clrscr();
vikas ob1;
vikas ob2(3,6,9);
w=ob2.show();
getch();
}