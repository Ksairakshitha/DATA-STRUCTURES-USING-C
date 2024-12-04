/*SWITCH CASE
PROGRAM 2*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int op1,op2;
   char opr;
   clrscr();
   printf("ENTER THE VALUE OF OP1 :  " );
   scanf("%d",&op1);
   printf("ENTER THE  VALUE OF OP2 :   ");
   scanf("%d",&op2);
   printf("ENTER THE VALUE OF OPR  :   ");
   scanf(" %c",&opr);
   switch(opr)
   {
     case('+') : printf(" Addition of two numbers = %d",op1 + op2);
		 break;
     case('-') : printf("Subtraction of two numbers = %d",op1 - op2);
		 break;
     case('*') : printf("Multiplication of two numbers = %d",op1*op2);
		 break;
     case('/') : printf("Division of two numbers  = %d",op1/op2);
		 break;
     default  :  printf("INVALID OPERATOR");
		 break;
   }
   getch();
}