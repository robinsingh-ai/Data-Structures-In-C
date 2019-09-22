#include<stdio.h>
#include<conio.h>
#define MAX 5

//Structure For queue

typedef struct
{
 int q[MAX];
 int f,r;
 }queue;

//>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<
//Function for inserting the element in the queue
void insert(queue *t,int ele)
{
 if(t->r==MAX-1)
 {
 printf("Queue is overflown\n");
 }
 else
 {
 t->r++;
 t->q[t->r]=ele;
 }
}

//-----------------------------------------------
//Function for checking whether the queue is empty or not

int isEmpty(queue *t)
{
 if(t->r==-1)
 {
 return 1;
 }
 else
 {return 0;}
}

//******************************************
//Function For deleteing the element from the queue

int del(queue *t)
{
 int z;
 if(isEmpty(t))
 {
  printf("Queue Is Overflown\n");
  return -1;
  }
 else
 {
  z=t->q[t->f];
  t->f++;
  return z;
  }
}

//=============================================
//Function for queue front

int queuefront(queue *t)
{
 if(isEmpty(t))
 {
  printf("Queue is Overflown");
  return -1;
  }
 else
 {
  return(t->q[t->f]);
  }
}


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Function For Displaying queue


void display(queue *t)
{
 int i;
 if(isEmpty(t))
 {
  printf("Queue is empty\n");
  }
 else
 {
  for(i=t->f;i<=t->r;i++)
  {
   printf("%d \t",t->q[i]);
   printf("\n");
   }
  }
 }


 //Main Function

 void main()
 {
  int ch,ele;
  queue x;
  x.f=0;
  x.r=-1;
  clrscr();

  while(1)
  {
   printf("Entre your choice\n");
   printf("1.Insert  2.Delete  3.Queue Front  4.Display   5.exit\n");
   printf("************************************************************\n");
   scanf("%d",&ch);

   if(ch==5)
   {
    break;
    }

   switch(ch)
   {
    case 1: printf("Entre your element to be pushed into the queue\n");
	    scanf("%d",&ele);
	    insert(&x,ele);
	    display(&x);
	    break;
    case 2: if(isEmpty(&x))
	       {
		printf("Queue is underflown\n");
		}
		else
		{
		  ele=del(&x);
		  printf("Deleted Element is %d\n",ele);
		  display(&x);
		  }
		break;
    case 3:  if(isEmpty(&x))
	      {
	       printf("Queue is underflown\n");
	       }
	       else
	       {
		 ele=queuefront(&x);
		 printf("Front element in the queue is %d\n",ele);
		 }
		break;
     case 4:  display(&x);
	      break;
     default: printf("*********INVALID OPTION*********");
    }
   }
  }



