/*SWAPPING TWO NUMBERS
PROGRAM 5*/
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
  int t;
  t=*x;
  *x=*y;
  *y=t;
}
void main()
{
  int a,b;
  clrscr();
  printf("ENTER THE VALUE OF A AND B :   ");
  scanf("%d%d",&a,&b);
  printf("THE VALUE OF A AND B BEFORE SWAPPING : %d\t%d\n  ",a,b);
  swap(&a,&b);
  printf("THE VALUE OF A AND B AFTER SWAPPING  : %d\t%d   ",a,b);
  getch();
}
