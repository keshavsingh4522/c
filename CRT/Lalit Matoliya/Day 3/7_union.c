#include <stdio.h>
int main()
{
  union stud
  {
    // int a;
    // char name[10];
    // float f;
    char c;
  }u;
  printf("sizeof(u) : %d\n",sizeof(u) );
  return 0;
}
