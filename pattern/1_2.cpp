#include<stdio.h>
int main()
{
int i,j,n;
 printf("enter a number: ");
 scanf("%d",&n);
for(i=0;i<n;i++)
 {
  for(j=n-i;j>0;j--)
   printf("* ");
  printf("\n");
 }
return 0;
}
/*
output:
enter a number: 5
* * * * * 
* * * * 
* * * 
* * 
*
*/
