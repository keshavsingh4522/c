#include"conio.h"
#include"stdio.h"
#include"process.h"
void main()
{
clrscr();
	int stack[10],i,push,c,k=1;
	printf("enter no ofelements in array: ");
	 scanf("%d",&push);
     printf("enter elemens in array: \n");
	     for(i=0;i<push;i++)
	     scanf("%u",stack+i);
do
  {
      printf("\nenter 1 to push: ");
      printf("\nenter 0 to out from the loop");
	 scanf("%d",&k);
	 if(k==1)
	    {printf("enter element to push: ");
	    scanf("%d",&stack[push]);
	    push++;}
}while(k);
	    printf("after push list is: \n");
	    for(i=0;i<push;i++)
	    printf("%d ",i[stack]);

      do
      {
	push--;
       printf("\nenter 1 to pop: \n");
       printf("enter 2 to exit: \n");
       if(push==0)
	 printf("no element in list");
	  scanf("%d",&c);
	  if(c==1&&push!=0)
	     {
	      printf("after poping ur stack list is: \n");
	      for(i=0;i<push;i++)
	      printf("%d ",stack[i]);
	     }
	     else
	       exit(0);
      }while(1);
getch();
}
