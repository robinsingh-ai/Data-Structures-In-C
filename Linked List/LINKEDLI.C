//A general linked list(SINGLY LINKED LIST) program using various functions

//Header Files used for these program
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//defineing structure for making nodes in th e linked list

typedef struct node
{
 int data;
 struct node *next;
 }node;
//Structure for making linked list
typedef struct
{
 node *start;
 }head;


//*****************************
//Function for inserting element in the beginning of the LL

void insertbeg(head *t,int ele)
{
 node *p;
 p=(node *)malloc(sizeof(node));
 p->data=ele;
 p->next=t->start;
 t->start=p;
}


//================================================
//Functon for inserting element in the end of the LL

void insertend(head *t,int ele)
{
 node *p,*q;
 p=(node *)malloc(sizeof (node));
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

//***********************************
void insertpos(head *t,int ele,int pos)
{
 int i;
 node *p,*q;
 p=(node *)malloc(sizeof(node));
 p->data=ele;
 q=t->start;

 for(i=0;i<pos-2;i++)
 {
  q=q->next;
  }
 p->next=q->next;
 q->next=p;
}

//You Can Also Make A function like (Insertmiddle to insert a element in the middle of the LL)
//In which you have to count and divide position by 2


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Function for Display

void display(head *t)
{
 node *q;
 q=t->start;
 if(t->start==NULL)
 {
  printf("Linked List Is Empty\n");
  }
  else
  {
   while(q!=NULL)      //This contion will check all the nodes
   {
    printf("%d \n",q->data);
    q=q->next;
    }
   printf("\n");
  }
}


//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//Function for deleting the elements from front

int deletebeg(head *t)
{
 node *p;
 if(t->start==NULL)
 {
  printf("Linked list is empty\n");
  return -1;
  }
  else
  {
   p=t->start;
   t->start=t->start->next;
   return(p->data);
   }
}


//******************************
//Function for deleting the element from the end

int deleteend(head *t)
{
 node *p,*q;
 if(t->start==NULL)
 {
 printf("Linked List Is Empty\n");


 }
 else
 {
  if(t->start->next==NULL)
  {
   p=t->start;
   t->start=NULL;
   }
   else
   {
    q=t->start;
    while(q->next->next==NULL)
    {
     q=q->next;
     p=q->next;
     q->next=NULL;
     }
     }
     }
     return(p->data);
}


//####################################
//Function for deleting element form given postions


int deletepos(head *t,int pos)
{
 int i;
 node *p,*q;
 q=t->start;
 for(i=0;i<pos-2;i++)
 {
  q=q->next;
  p=q->next;
  q->next=p->next;
  }
 return (p->data);
}


//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//Function for deleting the element given by the user

void deleteele(head *t,int ele)
{
 node *q;
 if(t->start==NULL)
 {
 printf("Linked list is empty\n");

 }
 else
 {
  if(t->start->data==ele)
  {
   t->start=t->start->next;
   return;}
   else
   {
    q=t->start;
    while(q->next!=NULL)     //this contion will stop at the end of the node

    {
     if(q->next->data==ele)
     {
      break;
      }
      else
      {
       q=q->next;
       }
     }
     }
     }
   if(q->next==NULL)
   {
    printf("%d is not found in The linked list",ele);
    }
    else
    {
     q->next=q->next->next;

   }
   }


//++++++++++++++++++++++++++++++++++
//Function for counting the elements is the given linked list

int count(head *t)
{
 int c=0;
 node *q;
 q=t->start;
 while(q!=0)
 {
  c++;
  q=q->next;
  }
  return c;
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//Function for searching a element in the given linked list


int search(head *t,int ele)
{
 node *q;
 q=t->start;
 while(q!=NULL)
 {
  if(ele==q->data)
  {
   return 1;
   }


   }
   return 0;
  }

//We can make many functions for this linked list

//Main Function for the program


void main()
{
 int ch,n,i,ele,pos;

 head x;               //You can make many linked list like (head x,y,z;)
 x.start=NULL;
 clrscr();
 printf("Entre number of elements you want in your linked list\n");
 //we will first make the linked list directly with the help of for loop
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Entre your Number\n");
  scanf("%d",ele);
  insertend(&x,ele);
  }

while(1)
{
 printf("Entre your choice\n ");
 printf("**********************************\n");
 printf("1.Insert At Beginning\n2.Insert At End\n3.Insert At position\n4.Display\n5.Delete At beginning\n6.Delete at End\n7.Delete Position\n8.Delete Element\n9.Counting\n10.Search For Element\n11.Exit\n");
 scanf("%d",&ch);

 if(ch==11)
 {
 break;
 }

 switch(ch)
  {
 case 1:printf("Entre your element to be inserted at ebginning\n");
	scanf("%d",&ele);
	insertbeg(&x,ele);
	display(&x);
	break;

 case 2:printf("Entre your element to be inserted at end\n");
	scanf("%d",&ele);
	insertend(&x,ele);
	display(&x);
	break;

 case 3:printf("Entre your element to be inserted and in which position\n");
	scanf("%d %d",&ele,&pos);
	insertpos(&x,ele,pos);
	display(&x);
	break;
 case 4:display(&x);
	break;
 case 5:if(x.start==NULL)
	 {
	  printf("Linked List is empty\n");
	  }
	 else
	 {
	  ele=deletebeg(&x);
	  printf("Deleted Element is %d\n",ele);
	  }
	 break;

 case 6:if(x.start==NULL)
	 {
	  printf("Linked List is empty\n");
	  }
	 else
	 {
	  ele=deleteend(&x);
	  printf("Deleted Element is %d\n",ele);
	  }
	 break;

 case 7: printf("Entre Position From which u want to delete element\n");
	 scanf("%d",&pos);

	 ele=deletepos(&x,pos);
	 display(&x);
	 break;
 case 8: printf("Entre your element u want to delete\n");
	 scanf("%d",ele);
	 deleteele(&x,ele);
	 display(&x);
	 break;
 case 9: printf("Numbers present in the linked list is %d",count(&x));
	 break;
 case 10:printf("Entre Number to be searched \n");
	 scanf("%d",&ele);
	 if(search(&x,ele)==1)
	 {
	  printf("ELEMENT FOUND\N");
	  }
	  else
	  {
	   printf("ELEMENT NOT FOUN\n");
	   }
	   break;
 default:printf("*********INVALID OPTION\N");
	 break;

  }
 }
}


