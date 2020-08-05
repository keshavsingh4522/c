#include <stdio.h>
void main()
{
  extern int x;
  printf("%d",x);
}
int x; // or int x=0;
