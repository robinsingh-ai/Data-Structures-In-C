//DOUBLY LINKED LIST


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
  struct node  *next,*prev;
 }node;
 typedef struct
 {
  node *start,*last;
  }head;


void insertbeg(head *t,int ele)
{
 node *p;
 p=(node *)malloc(sizeof(node));
 p->data=ele;
 p->next=p->prev=NULL;
 if(t->start==NULL)
 {
  t->start=t->last=p;
  }
  else
  {
   p->next=t->start;
   t->start->prev=p;
   t->start=p;
   }
}


void insertend(head *t,int ele)
{
 node *p;
 p=(node *)malloc(sizeof(node));
 p->data=ele;
 p->next=p->prev=NULL;
 if(t->start==NULL)
 {
  t->start=t->last=p;
  }
  else
  {
   p->prev=t->last;
   t->last->next=p;
   t->last=p;

   }
}



void display(head *t)
{
 node *q;
 if(t->start==NULL)
 {
  printf("Empty Linked list\n");
  }
  else
  {
   q=t->start;
   while(q!=NULL)
   {
    printf("%d ",q->data);
    q=q->next;
    }
    printf("\n");
   }
}




void displayrev(head *t)
{
 node *q;
 if(t->start==NULL)
 {
  printf("Empty Linked list");
  }
  else
  {
  q=t->last;
  while(q!=NULL)
  {
   printf("%d ",q->data);
   q=q->prev;
   }
   printf("\n");
  }
}


int deletebeg(head *t)
{
 node *p;
 if(t->start==NULL)
 {
  printf("Empty LINKED LIST\n");
  return (-1);
  }
  else
  { p=t->start;
   if(t->start==t->last)
   {
    t->start=t->last=NULL;
    }
    else
    {
     t->start=t->start->next;
     t->start->prev=NULL;
     }
     return (p->data);
    }
}


int deleteend(head *t)
{
 node *p;
 if(t->start==NULL)
 {
  printf("EMPTY LINKED LIST\n");
  return (-1);
  }
  else
  {p=t->last;
   if(t->start==t->last)
   {
    t->start=t->last=NULL;
    }
    else
    {
     t->last=t->last->prev;
     t->last->next=NULL;
     }
     return (p->data);
    }
}



void main()
{
 int ch,ele;
 head x;
 x.start=x.last=NULL;
 clrscr();
 while(1)
 {
  printf("ENTRE YOUR CHOICE\n");
  printf("*******************\n");
  printf("1.INSERT BEGINNING\n2.INSERT END\n3.DISPLAY\n4.DISPLAY REVERSE\n5.DELETE BEGINNING\n6.DELETE END\n7.EXIT\n");
  scanf("%d\n", &ch);
  if(ch==7)
  {
   break;
   }

   switch(ch)
   {
     case 1: printf("Entre Your element u want to be push at the beginning of the doubly linked list\n");
	     scanf("%d", &ele);
	     insertbeg(&x,ele);
	     display(&x);
	     break;

     case 2: printf("Entre Your element u want to be push at the end of the doubly linked list\n");
	     scanf("%d", &ele);
	     insertend(&x,ele);
	     display(&x);
	     break;

     case 3: display(&x);
	     break;
     case 4: displayrev(&x);
	      break;
     case 5: ele=deletebeg(&x);
	     if(ele==-1)
	     {
	      printf("EMPTY LINKED LIST\n");
	      }
	      else
	      {
	       printf("Deleted element is %d \n",ele);
	       }
	      break;

     case 6: ele=deletend(&x);
	     if(ele==-1)
	     {
	      printf("EMPTY LINKED LIST\n");
	      }
	      else
	      {
	       printf("Deleted element is %d \n",ele);
	       }
	      break;

     default: printf("********INVALID OPTION********\n");

    }
    }
    }


