
//Implementation of Binary Search tree

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Structures
typedef struct node
{
 int data;
 struct node *left,*right;
 }node;

 typedef struct
 {
  node *root;
  }head;

//*********************************
//Function for searching the father(Root of the tree)
node * father(head *t,node *p)
{
 node *q;
 if(p==t->root)
 {
  return NULL;
  }
  else
  {
   q=t->root;
   while(q!=NULL)
   {
    if(q->left==p|| q->right==p)
    {
     return q;
     }
     if(p->data<=q->data)
     {
      q=q->left;
      }
      else
      {
       q=q->right;
       }
       }
       return NULL;

    }
  }
 //###################################################
 //function for finding the max element in the tree

 node* findmax(node *r)
 {
  if(r->right==NULL)
  {
   return r;
   }
   else
   {
    return (findmax(r->right));
    }
  }
//+++++++++++++++++++++++++++++++++
//Function for searching the entered element
int search(head *t,int ele)
{
 node *q;
 q=t->root;
 while(q!=NULL)
 {
  if(ele==q->data)
    { return 1; }
   if(ele<q->data)
   {q=q->left;}
   else
   {q=q->right;}
   }
   return 0;
}

//====================================================
//function for inserting

void insert(head *t,int ele)
{
 node *p,*q;
 p=(node*)malloc(sizeof(node));
 p->data=ele;
 p->left=p->right=NULL;
 if(t->root==NULL)
 {t->root=p;
   return ; }
 else
 {q=t->root;
  while(q!=NULL)
  {
   if(ele<=q->data)
     {if(q->left==NULL)
      {q->left=p;}
      }
      else
      {
       q=q->left;
       }
       }


   if(q->right==NULL)

       q->right=p;

       else
       {
       q=q->right;
       }
    }
   }


//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//function for deleting the element
//this function is the main function of the program which have total 7 cases.


void deleteele(head *t,int ele)
  {node *p,*q,*f;
  if(t->root==NULL)
  {
   printf("Empty binary search tree\n");
   }

 q=t->root;
 while(q!=NULL)
 {
  if(ele==q->data)
      break;
  if(ele<q->data)
  {
   q=q->left;}
   else
   {
    q=q->right;
    }
   }
   if(q==NULL)
   {
    printf("%d is not found\n ",ele);
    }

 //Case 1
 if(q->left==NULL&&q->right==NULL)
 {
  if(q==t->root)
  {
   t->root=NULL;
   }

  else
  { node * f;
   f=father(t,q);
   if(f->left==q)
   {
    f->left=NULL;
    }
    else
    {
     f->right=NULL;
     }
    }
  }

//case 2
else
{
  if(q->left!=NULL)
  {
   int val;
   node *max=findmax(q->left);
   val=max->data;
   deleteele(t,val);
   q->data=val;
   }
}


//case 3



 if(q==t->root)
 {
  t->root=t->root->right;
  }

 f=father(t,q);
 if(f->left==q)
 {
  f->left=q->right;
  }
  else
  {
   f->right=q->right;
   }
  }





void inorder(node *x)
{
 if(x!=NULL)
 {
  inorder(x->left);
  printf("%d",x->data);
  inorder(x->right);
  }
 }


void postorder(node *x)
{
 if(x!=NULL)
 {
 postorder(x->left);
 postorder(x->right);
 printf("%d",x->data);
 }
 }


void preorder(node *x)
{
 if(x!=NULL)
 {
  printf("%d",x->data);
  preorder(x->left);
  preorder(x->right);
  }
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//main function

void main()
{
 int ele,ch;
 head x;
 x.root=NULL;
 clrscr();
 while(1)
 {
  printf("Entre your Choice\n");
  printf("1.Insert\n2.Delete\n3.Search\n4.Inorder\n5.Postorder\n6.Preorder\n7.Exit\n");
  scanf("%d",&ch);
  if(ch==7)
  {
   break;
   }
   switch(ch)
   {
    case 1:printf("Entre element to be inserted\n");
	   scanf("%d",&ele);
	   insert(&x,ele);
	   inorder(x.root);
	   break;
    case 2:printf("Entre element to be deleted \n");
	   scanf("%d",&ele);
	   deleteele(&x,ele);
	   inorder(x.root);
	   break;
    case 3:printf("Entre element to be searched\n");
	   scanf("%d",&ele);
	   if(search(&x,ele))
	   {
	    printf("Element is present\n");
	    }
	    else
							    {
	     printf("Element is not found\n");
	     }
	     break;
      case 4:inorder(x.root);
	   break;
      case 5:postorder(x.root);
	   break;
      case 6:preorder(x.root);
	   break;
    default : printf("******INVALID OPTION****\n");
	      break;

    }
   }
  }

















