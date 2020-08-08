#include <stdio.h>
int main()
{
  union stud
  {
    int a;
    char name[10];
    float f;
  }u;
  printf("sizeof(u) : %d\n",sizeof(u) );
  printf("sizeof(u.a) : %d\n",sizeof(u.a) );
  printf("sizeof(u.name) : %d\n",sizeof(u.name) );
  printf("sizeof(u.f) : %d\n",sizeof(u.f) );
  return 0;
}
