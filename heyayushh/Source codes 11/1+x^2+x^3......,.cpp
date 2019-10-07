// Program to find out the Armstrong numbers


#include<iostream>

#include<conio.h>

using namespace std;

main()

{

int  n, i, k, s, d;

cout << "\n\t Enter the end limit ";

cin >> n;

for (i = 1 ;i <= n; i++)

{

s = 0;

k = i;

while (k != 0)

{

d = k % 10;

s = s + d * d * d;

k = k / 10;

}

if ( s == i)
{
cout << "\n" << i;
}


}
}
