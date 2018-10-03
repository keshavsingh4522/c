#include"conio.h"
#include"stdio.h"
#include"alloc.h"
#include"stdlib.h"
struct node
{ int info;
 struct node *link;
};
struct node* START=NULL;
struct node* creatnode()
{
 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 return n;
}
void insertnode()          //insertion at the last
{
 struct node *temp,*t;
 temp=creatnode();
 printf("enter a number: ");
 scanf("%d",&temp->info);
 temp->link=NULL;
 if(START==NULL)
     START=temp;
  else
   {  t=START;
      while(t->link!=NULL)
      t=t->link;
      t->link=temp;
   }
}
void deletnode()    //deletion of first node
{
 struct node *r;
  if(START==NULL)
  printf("list is empty");
  else
  {  r=START;
  START=START->link;
  }
 free(r);
}
void deletenodelast()    //deletion of last node
{
struct node *t;
 if(START==NULL)
  printf("list is empty");
 else
  { t=START;
    while(t->link!=NULL)
       t=t->link;
	t->info=NULL;
  }
}
void viewlist()
{
  struct node *t;
  if(START==NULL)
  printf("list is empty");
  else
  {
    t=START;
    while(t!=NULL)
    {
     printf("%d\t",t->info);
     t=t->link;
    }
  }
}
int menu()
{
  int ch;
   printf("\n1.Add value to the list");
   printf("\n2.Delete the first value");
   printf("\n3.Delete the last value");
   printf("\n4.View list");
   printf("\n5.Exit");
   printf("\nenter ur choise : ");
   scanf("%d",&ch);
return(ch);
}
void main()
{
   while(1)
   {
     clrscr();
     switch(menu())
     {
     case 1: insertnode();
	       break;
     case 2: deletnode();
	       break;
     case 3:deletenodelast();
	       break;
     case 4: viewlist();
		break;
     case 5: exit(0);
     default:
	     printf("invalid choise");
     }
 getch();
   }
}
