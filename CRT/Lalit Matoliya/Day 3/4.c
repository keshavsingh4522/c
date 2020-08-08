#include <stdio.h>
int main()
{
  int a[10];
  int c[4][5];
  printf("sizeof(int) : %d\n", sizeof(int));
  printf("sizeof(a) : %d\n", sizeof(a));
  printf("sizeof(a[0]) : %d\n", sizeof(a[0]));

  printf("sizeof(c) : %d\n", sizeof(c));
  printf("sizeof(c[0]) : %d\n", sizeof(c[0]));
  printf("sizeof(c[1]) : %d\n", sizeof(c[1]));
  printf("sizeof(c[1][1]) : %d\n", sizeof(c[1][1]));

  return 0;
}
