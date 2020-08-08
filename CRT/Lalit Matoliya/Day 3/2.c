#include <stdio.h>
int main()
{
  int n[25];
  n[0]=100;
  n[24]=200;
  printf("%d %d\n",*n,*n+*(n+24));
  printf("n[24] = %d\n", n[24]);
  printf("24[n] = %d\n", 24[n]);
  return 0;
}
