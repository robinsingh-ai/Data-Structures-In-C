
//Implementaion of Selection  sort
#include<stdio.h>
#include<conio.h>

void Selectionsort(int x[],int n)
{
 int i,j,min,pos;
 for(i=0;i<n-1;i++)
 {
   min=x[i];
   pos=i;
   for(j=i+1;j<n;j++)       // (instead of n-1 we can write n-i-1 for time comlexity)
   {
    if(x[j]<min)
    {
     min=x[j];
     pos=j;
     }
    x[pos]=x[i];
    x[i]=min;
    }
  }
 }


 void main()
{
 int a[50],i,n;
 clrscr();

 printf("Entre how many digits you have to sort\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d ",&a[i]);
      }
  Selectionsort(a,n);

  printf("Sorted Array :\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
   }
   printf("\n");

   getch();

  }
