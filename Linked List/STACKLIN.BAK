//Implementaion of stack using LINKED LIST(SINGLY LINKED LIST)
//In This Program the main advantage is we don't have to make a array in additional
//we can make the use of dynamic memory allocation so  we can push many element, means there is no ristrictions in pushing elemets like we have in stacks using array


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Structures for making nodes for stack implementation
typedef struct node
{
 int data;
 struct node *next;
 }node;

 typedef struct
 {
  node *start;
  }stack;

void push(stack *t,int ele)
{
 node *p;
 p=(node*)malloc(sizeof(node));
 {
  p->data=ele;

  p->next=t->start;
  t->start=p;
  }
  }

int isEmpty(stack *t)
{
 if(t->start==NULL)
 {
  return 1;
  }
  else
  {
   return 0;
   }
}
void display(stack *t,int n)
{
 node *p;
 int i;
 if(isEmpty(t))
 {

  printf("Stack Is Empty\n");
  }
  else
  {
   p=t->start;
   while(p!=NULL)
   {
    printf("%d \n",p->data);
    p=p->next;
    }
    printf("\n");
   }
}

int pop(stack *t)
{
 node *p;
 if(isEmpty(t))
 {
  printf("Stack Is Empty\n");
  return -1;
  }
  else
  {
   p=t->start;
   t->start=t->start->next;
   return (p->data);
   }
}

int stacktop(stack *t)
{
 node *p;
 if(isEmpty(t))
 {
  printf("Stack Is Empty\n");
  return -1;
  }
  else
  {
    p=t->start;
    return(p->data);
    }

}

int count(stack *t)
{
 int c=0;
 node *p;
 p=t->start;
 while(p->next!=NULL)
 {
  c++;
  p=p->next;
  }
  return c;
 }




void main()
{
 int ch,i,n,ele;
 stack x;
 x.start=NULL;
 clrscr();


 while(1)
 {
  printf("Entre Your choice\n");
  printf("**************************\n");
  printf("1.PUSH  2.POP  3.DISPLAY  4.STACKTOP   5.EXIT   6.Counts\n");
  scanf("%d",&ch);
  if(ch==5)
  {
   break;
   }

switch(ch)
{
  case 1: printf("Entre element to be pushed in the stack\n");
	 scanf("%d",&ele);
	 push(&x,ele);

	 break;
  case 2: if(isEmpty(&x))
	 { printf("Empty Stack\n");
	   }
	 else
	  { ele=pop(&x);
	   printf("Popped element is %d\n",ele);
	   display(&x,n);}
	   break;
  case 3: display(&x,n);
	  break;
  case 4: if(isEmpty(&x))
	  { printf("Empty Stack\n");
	  }
	  else
	  {
	   ele=stacktop(&x);
	   printf("Element on the top of stack is %d\n",ele);
	   }
	   break;
  case 6:  n=count(&x);
	   break;
  default: printf("*****INVALID OPTION********\n");

  }
  }
 }
