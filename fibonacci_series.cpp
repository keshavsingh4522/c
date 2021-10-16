#include"conio.h"
#include"stdio.h"
int fabnic(int);
void main()
{
clrscr();
    int n,i;
    printf("enter how many elements  are to be generated: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",fabnic(i));
getch();
}
int fabnic(int p)
{
  if(p<=1)
      return p;
  else
    return(fabnic(p-1)+fabnic(p-2));
}
