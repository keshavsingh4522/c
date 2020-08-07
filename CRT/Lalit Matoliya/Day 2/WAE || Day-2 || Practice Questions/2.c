#include <stdio.h>
void main()
{
  int n,i,j;
  printf("Enter a number to print series: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i+1;j++)
    printf("%c",65+j);

    for(j=0;j<2*(n-i-1);j++)
    printf(" ");

    for(j=i;j>-1;j--)
    printf("%c",65+j);

    printf("\n");
  }
  for(i-=2;i>0;i--)
  {
    for(j=0;j<i+1;j++)
    printf("%c",65+j);

    for(j=0;j<2*(n-i-1);j++)
    printf(" ");

    for(j=i;j>-1;j--)
    printf("%c",65+j);

    printf("\n");
  }
  // printf("%c",65);
}
