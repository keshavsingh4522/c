
#include"conio.h"
#include"stdio.h"
#include"alloc.h"
void quick(int*,int,int,int);
void main()
{
clrscr();
	int i,n,*a;
	printf("enter no of box of an array: ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	printf("enter %d elements: \n",n);
	for(i=0;i<n;i++)
	  scanf("%d",a+i);
	quick(a,0,i-1,0);

   printf("after quick sort your list element is:\n");
   for(i=0;i<n;i++)
    printf("%d ",i[a]);
getch();
}
void quick(int* a,int beg,int end,int loc)
{
    int swp;
    if()
   while(a[beg]>a[end])
   {end--;}
    swp=a[beg];
    a[beg]=swp;
    a[end]=swp;
}
