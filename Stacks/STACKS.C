//Stack Implementaion Using Turbo C
//All HeaderFiles Used For Input, Output and Library Functions
#include<stdio.h>
#include<conio.h>
#define MAX 5

//Making Structure
typedef struct
{
 int s[MAX];
 int tos;
 }stack;

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<
//Function For Pushing The Element Into The Stack

void push(stack *t,int ele)
{
 if(t->tos==MAX-1)
 { printf("Stack Is Overflown\n\n");}
 else
 {t->tos++;
  t->s[t->tos]=ele;
 }
}

//****************************************************
//Function For Checking Whether Stack Is Empty Or Not

int isEmpty(stack *t)
{
 if(t->tos==-1)
 {return 1;}
 else
 {return 0;}
}

//-----------------------------------------------------------------
//Function For Poping Out The Element From The Stack Or Deleting it

int pop(stack *t)
{
 int z;
 if(isEmpty(t))
 {
 printf("Stack Is UnderFlown\n\n");
 return -1;
 }
 else
 {
 z=t->s[t->tos];
 t->tos--;
 return z;
 }
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//Function For Finding The Element On The Top Of The Stack

int stacktop(stack *t)
{
 if(isEmpty(t))
 {
  printf("Stack Is Underflown\n");
  return -1;
 }
 else
 { return (t->s[t->tos]);
 }
}

//>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//Function For Displaying All The Elements In The Stack

void display(stack *t)
{
 int i;
 if(isEmpty(t))
 {
  printf("Stack Is Empty\n\n");
 }
 else
 {
  for(i=t->tos;i>=0;i--)
  {
   printf("%d\t",t->s[i]);
   printf("\n");
  }
 }
}

//>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//Main Function

void main()
{
 int ch,ele;
 stack x;
 x.tos=-1;
 clrscr();
 while(1)	   //While(1) Is Always True So No Need To Check For Conditions And Loop Will Run Again And Again

 {
  printf("Entre Your Choice\n");
  printf("************************************\n");
  printf("1.Push  2.Pop  3.StackTop  4.Display  5.Exit\n");
  scanf("%d",&ch);

  if(ch==5)
  {break;}     //While Loop Will End Here

  switch(ch)
  {
   case 1: printf("Entre Element To Be Pushed\n ");
	   scanf("%d",&ele);
	   push(&x,ele);
	   display(&x);     //Just To Show Whether The Element Is Pushed or Not
	   break;

   case 2: if(isEmpty(&x))
	   { printf("Stack Is Underflown\n");
	   }
	   else
	   {
	   ele=pop(&x);
	   printf("Poped Element Is %d\n",ele);
	   display(&x);            //Just To Show Whether The Element Is Poped Or Not
	   }
	   break;

   case 3: if(isEmpty(&x))
	   { printf("Stack Is Underflown\n");
	   }
	   else
	   {
	   ele=stacktop(&x);
	   printf("Element On The Top Of Stack Is %d\n",ele);
	   }
	   break;

   case 4: display(&x);
	   break;

   default : printf("Invalid Option\n ");

 }
}
}