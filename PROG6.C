/*STANDARD DEVIATION
PROGRAM 6*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float a[20] ,sum=0,mean=0,sd=0,var=0;
  int i,n;
  clrscr();
  printf("ENTER THE NUMBER OF ELEMENTS :  ");
  scanf("%d",&n);
  printf("ENTER THE ARRAY ELEMENTS  :  ");
  for(i=0;i<n;i++)
  {
     scanf("%f",&a[i]);
     sum = sum+a[i];
  }
  mean= sum /n;
  for(i=0;i<n;i++)
  {
     var= var +(pow((a[i]-mean),2));
  }
  var = var/n;
  sd=sqrt(var);
  printf("SUM = %f\n",sum);
  printf("MEAN = %f\n",mean);
  printf("VARIANCE = %f\n",var);
  printf("STANDARD DEVIATION  = %f",sd);
  getch();
}