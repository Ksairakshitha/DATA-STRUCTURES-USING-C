#include<stdio.h>
#include<conio.h>
#define MAX 20
void insert();
void delet();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
void main()
{
   int choice;
   clrscr();
   while(1)
   {
     printf("1.Insert\n2.delete\n3.display\n4.exit\n");
     printf("enter your choice  :   ");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1 :  insert();
		  break;
	case 2 :   delet();
		   break;
	case 3 :   display();
		   break;
	case 4 :  exit(0);
	default:printf("wrong coice \n");
     }
  }
  getch();
}
void insert()
{
   int add_item;
   if(rear==MAX-1)
       printf("queur overflow \n");
   else
   {
      if(front==-1)
      front=0;
      printf("enter the element to be inserted in the queue :   ");
      scanf("%d",&add_item);
      rear=rear+1;
      queue_array[rear]=add_item;
   }
}
void delet()
{
   if(front==-1||front>rear)
   {
      printf("queue underflow\n");
   }
   else
   {
      printf("element deleted from queue is  %d\n",queue_array[front]);
      front=front+1;
   }
}
void display()
{
   int i;
   if(front==-1)
      printf("queue is empty\n");
   else
   {
      printf("queue is  \n");
      for(i=front;i<=rear;i++)
      {
	printf("%d",queue_array[i]);
	printf("\n");
      }
   }
}

