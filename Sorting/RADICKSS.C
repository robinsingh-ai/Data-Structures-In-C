
//Implememtaion Of radicks SOrt

#include<stdio.h>
#include<math.h>
#include<conio.h>

int findmaxdigit(int x[],int n)
{
 int i,max=x[0],u,d=0;
 for(i=1;i<n;i++)
 {
  if(x[i]>max)
  while(max!=0)
  {
    d++;
    max=max/10;
    }
    }
    return d;
    }


    void radixsort(int x[],int n)
    {
     int i,j,k,dig,d,r;
     d=findmaxdigit(x,n);
     for(k=1;k<=d;k++)
     {
      int nos[10][10]={0};
      int count[10]={0};
      for(i=0;i<n;i++)
      {
       dig=x[i]/(int)pow(10,k-1)%10;
       nos[dig][count[dig]]=x[i];
       count[dig]++;
       }
       r=0;
       for(i=0;i<10;i++)
	 for(j=0;j<count[i];j++)
	      x[r++]=nos[i][j];

	      }
	    }


void main()
{
 int a[50],n,i;

 clrscr();
 printf("Entre elements to be in the array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }

  radixsort(a,n);

  printf("Sorted array ::\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
   }
   printf("\n");
   getch();
 }



