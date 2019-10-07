/*
*   Author: Tanay Mehta
*   Program: Tower of Hanoi for n-disks in C
*   Github: heytanay
*/

#include <stdio.h>

void tower_of_hanoi(int n, char beg, char end, char aux){
  if (n==1){
    printf("Move the rod %c to %c\n", beg, end);
    return;
  }

  tower_of_hanoi(n-1, beg, aux, end);
  printf("Move the rod %c to %c\n", beg, end);
  tower_of_hanoi(n-1, aux, beg, end);
}

int main(){
  int n;
  printf("\nEnter the number of disk:");
  scanf("%d", &n);
  tower_of_hanoi(n, 'A', 'C', 'B');
}