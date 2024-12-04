/*Bubble sort
program 3*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,j,t,a[20];
   clrscr();
   printf("ENTER THE NUMBER OF ELEMENTS :  ");
   scanf("%d",&n);
   printf("ENTER THE ARRAY ELEMENTS :   ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      for(j=0;j<((n-i)-1);j++)
      {
	  if(a[j]>a[j+1])
	  {
	     t=a[j];
	     a[j]=a[j+1];
	     a[j+1]=t;
	   }
       }
    }
    printf("THE SORTED ARRAY IS  :   ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    getch();
}