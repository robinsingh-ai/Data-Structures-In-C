//Implemention of polynomial addition using linked list by using 2 polynomial

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//Making structures
typedef struct node
{
 int c,e;
 struct node *next;
 }node;

 typedef struct
 {
  node *start;
  }head;


//*************************
//Function for inserting the coefficient and exponent of the polynomail

  void insertend(head *t,int ce,int ex)
  {
   node *p,*q;
   p=(node *)malloc(sizeof(node));
   p->c=ce;
   p->e=ex;
   p->next=NULL;
   if(t->start==NULL)
     { t->start=p;
      }
      else
      {
       q=t->start;
       while(q->next!=NULL)
       {
	q=q->next;
	q->next=p;
	}

       }
    }

//++++++++++++++++++++++++++++++++++++
//funcion for creating the ploynomial
void create(head *t,int n)
{
 int ce,ex,i;
 for(i=0;i<n;i++)
 {
  printf("Entre coefficient and exponent of your ploynomial\n");
  scanf("%d%d",&ce,&ex);
  insertend(t,ce,ex);
  }
}

//=======================================
//function for displaying the addition and the individual ploynomial
void display(head *t)
{
 node *q;
 q=t->start;


   while(q!=NULL)
   {
     printf("%d %d",q->c,q->e);
     q=q->next;
     }
     printf("\n");
    }


//----------------------------------------------
//this the man main fucntion of the program in which we will add
//2 indiidual polynomial and will store it in the 3rd polynomial which will be printed by the display function

void add(head *t1,head *t2,head *t3)
{
 node *p=t1->start,*q=t2->start;
 while(p!=NULL&&q!=NULL)
 {
  if(p->e>q->e)
  {
   insertend(t3,p->c,p->e);
   p=p->next;
   }
  else

   if(q->e>p->e)
   {
    insertend(t3,q->c,q->e);
    q=q->next;
    }
    else
    {
     insertend(t3,p->c+q->c,p->e);
     p=p->next;
     q=q->next;
     }
    }
    while(p!=NULL)
    {
     insertend(t3,p->c,p->e);
     p=p->next;
     }
    while(q!=NULL)
    {
     insertend(t3,q->c,q->e);
     q=q->next;
     }
}


//Main function of the progam

void  main()
{
 int n;
 head x,y,z;
 x.start=y.start=z.start=NULL;
 clrscr();
 printf("Entre no of polynomials polynomial\n");
 scanf("%d",&n);

 create(&x,n);
 printf("Entre 2 polynomial\n");
 scanf("%d",&n);
 create(&y,n);


 display(&x);
 display(&y);

 add(&x,&y,&z);

 printf("Addition of the polynomial= ");
 display(&z);

 getch();

   }
