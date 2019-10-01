
//Implementation of insertion sort
#include<stdio.h>
#include<conio.h>

void insertionsort(int  x[],int n)
{
 int i,j,val;
 for(i=1;i<n;i++)
 {
  val=x[i];
  for(j=i-1;j>0&&val<x[j];j--)
  {
   x[j+1]=x[j];

    }

     x[j+1]=val;
    }
  }





void main()
{
 int a[10],i,n;
 clrscr();
 printf("Entre numbers of element you want in the array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  insertionsort(a,n);
  printf("Sorted array:\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
   }
  printf("\n");
  getch();
 }

