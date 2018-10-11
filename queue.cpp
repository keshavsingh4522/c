#include"conio.h"
#include"stdio.h"
#include"process.h"
void enquee(int);
void dequee();
void display();
int FRONT=-1,REAR=-1,SIZE[10];
void main()
{
clrscr();
      int choice,num;
	while(1)
	{
	 printf("\n1.insertion in quee\n");
	 printf("2.deletion in quee\n");
	 printf("3.display of list elements\n");
	 printf("4.exit\n");
	 printf("\tenter your choice");
	  scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:printf("enter a element to insert: ");
		 scanf("%d",&num);
		 enquee(num);
		 break;
	  case 2: dequee();
		  break;
	  case 3: display();
		   break;
	  case 4: exit(0);
		  break;
	 }
	}
}
void enquee(int n)
{
 if(FRONT==-1)
  {
   FRONT=0;
   REAR=0;
   SIZE[REAR]=n;
  }
  else
   if(REAR==9)
    printf("list is full\n");
   else
   {
       if(FRONT==-1)
       {FRONT=0;}
    REAR++;
    SIZE[REAR]=n;
   }
}
void dequee()
{
 if(FRONT==-1)
   printf("list is empty\n");
 else
   if(FRONT==REAR)
    FRONT=REAR=-1;
   else
   FRONT++;
}
void display()
{
 int f=FRONT,r=REAR;
 if(f==-1)
  printf("list is empty\n");
 else
   do
   {
    printf("%d\t",SIZE[f]);
    f++;
   } while(f!=r+1);
}
