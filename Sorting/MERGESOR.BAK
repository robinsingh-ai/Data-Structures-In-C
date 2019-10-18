//Merge SOrt progrma using Array
//*******************************

#include<stdio.h>
#include<conio.h>

void merge(int x[],int lb,int m,int ub)
{
 int temp[50],i=lb,j=m+1,k=0;
 while(i<=m&&j<=ub)
 {
  if(x[i]<x[j])
  {
  temp[k++]=x[i++];
  }
  else
  temp[k++]=x[j++];
  }

 while(i<=m)
 {
 temp[k++]=x[i++];
 k=0;
 for(i=lb;i<=ub;i++)
 {
  x[i]=temp[k++];
  }

 }
 }
void mergesort(int x[],int lb,int ub)
{
 int m;
 if(lb<ub)
 {
  m=(lb+ub)/2;
  mergesort(x,1,m);
  mergesort(x,m+1,ub);
  merge(x,lb,m,ub);
  }
}

void main()
{
 int a[50],i,n,lb;
 clrscr();

 printf("Entre your numbers u want in the array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d ",&a[i]);
  }
  mergesort(a,0,n-1);
  printf("sorted array\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
  }
  printf("\n");
  getch();
  }
