#include<stdio.h>
#include<conio.h>
struct student
{
  char name[10];
  char id;
  int cie1;
  int cie2;
  int cie3;
  int total;
  int avg;
}std[5];
void main()
{  int i,n;
   clrscr();
   printf("Enter the number of students  :    ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     printf("enter the name of the student  :  ");
     scanf("%s",&std[i].name);
     printf("enter the id of the student  :    ");
     scanf("%s",&std[i].id);
     printf("enter cie1 marks :   ");
     scanf("%d",&std[i].cie1);
     printf("enter cie2 marks   :   ");
     scanf("%d",&std[i].cie2);
     printf("enter cie3 marks :   ");
     scanf("%d",&std[i].cie3);
   }
   for(i=1;i<=n;i++)
   {
      std[i].total=std[i].cie1+std[i].cie2+std[i].cie3;
      std[i].avg=std[i].total/3;
      printf("total of %s is  %d  \n",std[i].name,std[i].total);
      printf("average of %s is %d  \n ",std[i].name,std[i].avg);
  }
  for(i=1;i<=n;i++)
  {
     if(std[i].avg<40)
       printf("%s is  below average\n ",std[i].name);
     else if(std[i].avg>40 && std[i].avg<=60)
	printf("%s is average  \n ",std[i].name);
     else if(std[i].avg>61&&std[i].avg<=89)
	printf("%s is above average\n",std[i].name);
     else
	printf("%s is outstanding\n ",std[i].name);
   }
   getch();
}
