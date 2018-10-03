#include"conio.h"
#include"stdio.h"
int fact(int);
void main()
{
clrscr();
	  int n,k;
	  printf("enterthe element to find factorial: ");
	  scanf("%d",&n);
	 k=fact(n);
       printf("factoial of n: %u",k);
getch();
}
int fact(int n)
{
  if(n==0)
  return 1;
   else
   return (fact(n-1)*n);
}
