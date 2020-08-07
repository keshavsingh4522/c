#include <stdio.h>
int digit(int n)
{
  int sum=0;
  while (n>0)
  {
    sum+=n%10;
    n/=10;
  }
  return sum;
}
void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  while(n>9){
    n=digit(n);
  }
  printf("%d\n",n);
}
