#include <stdio.h>
void main()
{
  int n,i,f;
  double sum;
  printf("Enter number: ");
  scanf("%d",&n);
  printf("sum=");
  f=1;
  for(i=1;i<n+1;i++)
  {
    f*=i;
    printf("1/%d!+",i);
    sum+=1.0/f;
  }
  printf("\b.\nsum=%.2f",sum);
  // printf("%.2f\n", (float)3/4);
}
