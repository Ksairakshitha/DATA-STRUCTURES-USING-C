/*BINARY SEARCH
PROGRAM-4*/
#include<stdio.h>
#include<conio.h>
int binarys(int a[20],int x,int low,int high);
void main()
{
   int i,n,element,index=0,a[20];
   clrscr();
   printf("ENTER THE NUMBER OF ELEMENTS :   ");
   scanf("%d",&n);
   printf("ENTER THE ARRAY ELEMENTS   :  ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("ENTER THE SEARCH ELEMENT :  ");
   scanf("%d",&element);
   index = binarys(a,element,0,n-1);
   {
     if(index == -1)
	  printf("ELEMENT NOT FOUND  ");
     else
	  printf("ELEMENT IS FOUND AT %d POSITION",index);
   }
   getch();
}
int binarys(int a[20],int x,int low,int high)
{
   int mid;
   if(low>high)
       return -1;
   else
      mid=(low+high)/2;
   if(x==a[mid])
      return mid;
   else if(x>a[mid])
       return binarys(a,x,mid+1,high);
   else
      return binarys(a,x,low,mid-1);
}
