#include<stdio.h>
#include<conio.h>
void merge(int a[20],int low,int mid,int high);
void sort(int a[20],int low,int high);
int b[20],i,n;
void main()
{
  int a[20];
  clrscr();
  printf("enter the number of elements  :    ");
  scanf("%d",&n);
  printf("enter the array elements :  ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,0,n-1);
  printf("the sorted array is   :   ");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  getch();
}
void merge(int a[20],int low,int mid,int high)
{
  int i=low,j=mid+1,k=low;
  while(i<=mid&&j<=high)
  {
     if(a[i]<a[j])
     {
	b[k]=a[i];
	k++;
	i++;
      }
      else
      {
	b[k]=a[j];
	k++;
	j++;
      }
   }
   while(i<=mid)
   {
     b[k]=a[i];
     k++;
     i++;
   }
   while(j<=high)
   {
      b[k]=a[j];
      k++;
      j++;
    }
    for(i=low;i<=high;i++)
    {
      a[i]=b[i];
    }
}
void sort(int a[20],int low,int high)
{
   int mid;
   if(low<high)
   {
      mid=(low+high)/2;
      sort(a,low,mid);
      sort(a,mid+1,high);
      merge(a,low,mid,high);
   }
}

