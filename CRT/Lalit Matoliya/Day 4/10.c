#include <stdio.h>
void main()
{
  int y[4]={6,7,8,9};
  int *ptr=y+2;
  printf("%d",ptr[1]);
}
