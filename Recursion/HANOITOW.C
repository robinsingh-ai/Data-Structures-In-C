
//Implementation of tower of hanoi
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



//Recursive function
void towers(int n,char s,char d,char a)
{
 if(n==1)

 {
  printf("Move Disc From  %c to %c\n",s,d);
  }
  else
  {
   towers(n-1,s,a,d);
   towers(1,s,d,a);
   towers(n-1,a,d,s);
   }
}


void main()
{
 int n;
 clrscr();
 printf("Entre No of dics\n");
 scanf("%d",&n);
 towers(n,'A','B','C');
 getch();
 }
