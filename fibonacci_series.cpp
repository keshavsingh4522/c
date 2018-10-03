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
  if(p==0)
   return 0;
  if(p==1)
   return 1;
 if(p!=0&&p!=1)
  return(fabnic(p-1)+fabnic(p-2));
}
