#include <stdio.h>
void fib(int n)
{
  int i=0,j,c=0,p=1,temp;
  for(;i<n;i++)
  {
    for(j=0;j<i+1;j++)
    {
      printf("%d ",c);
      temp=c;
      c=p;
      p+=temp;
    }
    printf("\n");
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  fib(n);
  return 0;
}
