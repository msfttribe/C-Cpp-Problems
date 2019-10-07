#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int v=0,c=0,i=0;
char s[30];
cout<<"enter string\n";
cin>>s;
while(s[i]!='\0')
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
v++;
}
else
c++;
i++;
}
cout<<"total vowels are\t"<<v<<"\n"<<"total consonants are\t"<<c;
getch();
}
