#include<stdio.h>
#include<conio.h>
void push();
void pop();
void peek();
void display();
int stack[10],i,n,top=-1;
void main()
{
  int choice;
  clrscr();
  printf("enter the size of stack   :   ");
  scanf("%d",&n);
  while(1)
  {
     printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
     printf("enter your choice  :   ");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1 :  push();
		  break;
	case 2 :   pop();
		   break;
	case 3 :   peek();
		   break;
	case 4 :   display();
		   break;
	case 5 :   exit(0);
	default:  printf("wrong choice\n");
     }
  }
  getch();
}
void push()
{
  int ele;
  if(top==n-1)
    printf("Stack overflow\n");
  else
  {
     printf("enter the element to be inserted  :    ");
     scanf("%d",&ele);
     top=top+1;
     stack[top]=ele;
  }
}
void pop()
{
   if(top==-1)
     printf("stack underflow\n");
   else
   {
      printf("the deleted element is  :  %d \n",stack[top]);
      top=top-1;
   }
}
void peek()
{
   if(top==-1)
      printf("Stack underflow\n");
   else
     printf("the top most element of the stack is %d\n",stack[top]);
}
void display()
{
   if(top==-1)
      printf("stack underflow\n");
   else
   {
     for(i=top;i>=0;i--)
     {
	printf("%d\n",stack[i]);
      }
   }
}

