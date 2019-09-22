//A Double Ended Queue program using array
//have  some dispalying  error,just go through each printf statments to check
//set MAX as u  want

#include<stdio.h>
#include<conio.h>
#define MAX 7

//Declaring Structure
typedef struct
{
 int q[MAX];
 int r,f;
 }queue;

//****************************************
//Declaring Function for inserting element in the right side of double ended queue


void insertright(queue *t,int ele)
{
 if(t->r==MAX-1)
 {
  printf("Queue Is overflown\n");
  }
  else
  {
   t->r++;
   t->q[t->r]=ele;
   }
}

//Declaring function for the insertion of element on the left side of double ended queue

void insertleft(queue  *t,int ele)
{
 if(t->f==-1)
 {
 printf("Queue is Overflown\n");
 }
 else
 {
  t->q[t->f]=ele;
  t->f--;
  }
}


//function for checking whether the queue is empty or not

int isEmpty(queue *t)
{
 if(t->f==t->r)
 {
  return 1;
  }
  else
  {
  return 0;
  }
}

//Declaring Function For deletetaion of the element form the right of queue

int deleteright(queue *t)
{
 int z;
 if(isEmpty(t))
 {
  printf("Queue is underflown\n");
  return -1;
  }
  else
  {
   z=t->q[t->r];
   t->r--;
   }
   return z;
}


//Declaring function for the deletation of the element from left side of the queue


int deleteleft(queue *t)
 {
  int z;
  if(isEmpty(t))
   {
     printf("Queue is UnderFlown\n");
     return -1;
  }
  else
  {
   t->f++;
   z=t->q[t->f];
   return z;
   }
}


//Declaring function for displaying the queue

void display(queue *t)
{
 int i;
 if(isEmpty(t))
 {
  printf("Queue is Under Flown\n");
  }
  else
  {
   for(i=t->f;i<=t->r;i++)
   {
    printf("%d \t\n",t->q[i]);
    }
    printf("\n");
    }
}

//Main Function


void main()
{
 int ch,ele;
 queue x;
 x.r=x.f=MAX/2;
 clrscr();

 while(1)
 {
  printf("Entre your Choice\n");
  printf("1.Insert Right \n 2.Insert Left \n 3.Delete right \n  4.Delete Left\n  ");
  printf("5.Display \n   6.Exit\n");
  scanf("%d",&ch);

  if(ch==6)
  {
   break;
   }

  switch(ch)
 {
   case 1 :printf("Entre Element you Want To Insert At Right Side of the queue\n");
	   scanf("%d",&ele);
	   insertright(&x,ele);
	   display(&x);
	   break;
   case 2 :printf("Entre element you want to insert at left side of queue\n");
	   scanf("%d",&ele);
	   insertleft(&x,ele);
	   display(&x);
	   break;
   case 3:if(isEmpty(&x))
	   {
	    printf("Queue is Underflown\n");
	    }
	    else
	    {
	     ele=deleteright(&x);
	     printf("Deleted element from right is =%d",ele);
	     display(&x);
	     }
	     break;

   case 4: if(isEmpty(&x))
	   {
	    printf("Queue is Underflown\n");
	    }
	    else
	    {
	     ele=deleteleft(&x);
	     printf("Deleted element from left is =%d\n",ele);
	     display(&x);
	     }
	     break;
   case 5: display(&x);
	   break;
   default:printf("***********INVALID OPTION\n");
   }
  }

   }

