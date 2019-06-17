#include<stdio.h>
int main()
{
 int i,j,n,sum=1,k=0;
 printf("enter number of rows: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(i%2==0)
   {
    sum=sum+i-1;
    k=sum;
   }
  else
   sum=k+1;
  for(j=i;j>0;j--)
  {
   printf("%d ",sum);
   if(i%2==0)
    sum-=1;
   else
    sum+=1;
  }
  printf("\n");
 }
return 0;
}
/*
output:
enter number of rows: 8
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15 
21 20 19 18 17 16 
22 23 24 25 26 27 28 
36 35 34 33 32 31 30 29

*/
