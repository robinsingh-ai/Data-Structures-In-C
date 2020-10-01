//Circular Implemention of linked list
//CIRCULAR LINKED LIST

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//MAking structures

typedef struct node
{
 int data;
 struct node *next;
 }node;

 typedef struct
 {
  node *last;
  }head;
//Function for inserting the element at the beginning

  void insertbeg(head *t,int ele)
  {
   node *p;
   p=(node*)malloc(sizeof(node));
   p->data=ele;
   if(t->last==NULL)
   {
    p->next=p;
    t->last=p;
    }
    else
    {
     p->next=t->last->next;
     t->last->next=p;
     }
}

//function for inserting the element at the end of the linked list
void insertend(head *t,int ele)
{
 node *p;
 p=(node *)malloc(sizeof(node));
 p->data=ele;
 if(t->last==NULL)
 {
  p->next=p;
  t->last=p;
  }
  else
  {
   p->next=t->last->next;
   t->last->next=p;
   t->last=p;
   }
}

//function for displaying the linked list

void display(head *t)
{
 node *q;
 if(t->last==NULL)
 {
  printf("Empty Linked List\n");
  }
  else
  {
   q=t->last->next;
   do
   {
    printf("%d ", q->data);
    q=q->next;
    }
    while
     (q!=t->last->next);
     printf("\n");
}
}

//function for deleting the element from the beginning of the linked list
int deletebeg(head *t)
{
 node *p,*q;
 if(t->last->next==NULL)
 {
  printf("Empty Linked lsit\n");
  return (-1);
  }
  else
  {
   p=t->last->next;
   if(p->next==p)
   {
    t->last=NULL;
    }
    else
    {
     t->last->next=p->next;
     }
     return (p->data);

}
}

//function for deleting the element from the end of linked list
int deleteend(head *t)
{
 node *p,*q;
 if(t->last==NULL)
 {
  printf("Empty Linked list\n");
  return (-1);
  }
  else
  {
   p=t->last;
   if(p->next==p)
   {
    t->last=NULL;
    }


    else
    {
     q=t->last->next;
     while(q->next!=t->last)
     q=q->next;
     q->next=t->last->next;
     t->last=q;
     }
     return p->data;
}
}

//main function
void main()
{
 int ch,ele;
 head x;
 x.last=NULL;
 clrscr();

 while(1)
 {
  printf("Entre Your Choice\n");
  printf("1.Insert Begginning \n 2.Insert End \n  3.Dispaly\n4.Delete Beginning\n5.Delete End  \n 6.Exit\n    ");
     scanf("%d", &ch);
  if(ch==6)
  {
   break;
   }

   else
   {
    switch(ch)
    {
     case 1:printf("Entre element to be inserted at the beginning of the linked list\n");
	    scanf("%d", &ele);
	    insertbeg(&x,ele);
	    display(&x);

	    break;
      case 2:printf("Entre element to be inserted at the end of linked list\n ");
	     scanf("%d", &ele);
	     insertend(&x,ele);
	     display(&x);
	     break;
      case 3:display(&x);
	     break;

      case 4:
	     ele=deletebeg(&x);
	     if(ele==-1)
	     {
	     printf("Empty Linked list\n");
	     }
	     else
	     printf("deleted element =%d\n",ele);
	     break;
      case 5:
	     ele=deleteend(&x);
	     if(ele==-1)
	     {
	      printf("Empty Liked list n");
	      }
	      else
	     printf("deleted element =%d\n",ele);
	     break;

      default: printf("*********INVALID OPTION\n");
       }

 }
}
}
