#include <stdio.h>
void main()
{
  char ch=127;// signed char
  int n=2147483647;
  ch+=2;
  n+=1;
  printf("%d\n%d\n%u\n",ch,n,n);
}
