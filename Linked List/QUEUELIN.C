// implemetaion of queue using LINKED LIST(SINGLY LINKED LIST)
//Uses dynamic memory allocation
//Can insert many function like queue front,counts for finding elements in the queue

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
 }node;

 typedef struct
 {
  node *start;
  }queue;


void insert(queue *t,int ele)
{
 node *p,*q;
 p=(node*)malloc(sizeof(node));

 p->data=ele;
 p->next=NULL;
 if(t->start==NULL)
 {
  t->start=p;
  }
  else
  {
   q=t->start;
   while(q->next!=NULL)
   {
    q=q->next;
    }
    q->next=p;


   }
 }

 int isEmpty(queue *t)
 {
  node *p;
  if(t->start==NULL)
  {
   return 1;
   }
   else
   {
    return 0;
    }
  }

void display(queue *t)
{
 node *p;
 if(isEmpty(t))
 {
  printf("Queue is Empty\n");
  }
  else
  {
   p=t->start;
   while(p!=NULL)
   {
    printf("%d \n ",p->data);
    p=p->next;
    }
    printf("\n");
   }
}

int del(queue *t)
{
 node *p;
 if(isEmpty(t))
 {
  printf("Queue is empty\n");
  return -1;
  }
  else
  {
   p=t->start;
   t->start=t->start->next;
   return (p->data);
   }
}



void main()
{
 int ch,ele;
 queue x;
 x.start=NULL;
 clrscr();
 while(1)
 {
  printf("Entre your choice\n");
  printf("**********************************************\n");
  printf("1.Insert  2.Delete  3.Display  4.Exit\n");
  scanf("%d",&ch);
  if(ch==4)
  {
   break;
   }

   switch(ch)
   {
    case 1:printf("Entre Element to be inserted in the queue\n");
	   scanf("%d",&ele);
	   insert(&x,ele);
	   display(&x);
	   break;
    case 2:if(isEmpty(&x))
	    {
	     printf("Queue is empty\n");
	     }
	     else
	     {
	      ele=del(&x);
	      printf("Deleted Element is %d \n",ele);
	      }
	      break;
    case 3: display(&x);
	    break;
    default:printf("*******INVALID OPTION\n");
    }
    }
    }

