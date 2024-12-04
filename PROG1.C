/*1 PROGRAM
REVERSING A NUMBER*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int r,rev=0,n;
  clrscr();
  printf("ENTER THE VALUE OF NUM :  ");
  scanf("%d",&n);
  while(n!=0)
  {
     r= n%10;
     rev = rev*10+r;
     n=n/10;
  }
  printf("The reverse number is %d",rev);
  getch();

}
