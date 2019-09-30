
//Implementaion of modified bubble sort
#include<stdio.h>
#include<conio.h>

void Bubblesort(int x[],int n)
{
 int i,j,t,ex=1;
 for(i=0;i<n-1&&ex==1;i++)
 {
  ex=0;
   for(j=0;j<n-1;j++)       // (instead of n-1 we can write n-i-1 for time comlexity)
   {
    if(x[j]>x[j+1])
    {
     ex=i;
     t=x[j];
     x[j]=x[j+1];
     x[j+1]=t;
     }
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
  Bubblesort(a,n);

  printf("Sorted Array :\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
   }
   printf("\n");

   getch();

  }
