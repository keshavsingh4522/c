#include <stdio.h>
int main()
{
  struct stud
  {
    int a;
    char name[10];
    float f;
  }s;
  printf("sizeof(s) : %d\n",sizeof(s) );
  printf("sizeof(s.a) : %d\n",sizeof(s.a) );
  printf("sizeof(s.name) : %d\n",sizeof(s.name) );
  printf("sizeof(s.f) : %d\n",sizeof(s.f) );
  printf("sizeof(s)=sizeof(s.a)+sizeof(s.name)+sizeof(s.f)+2 : %d\n",sizeof(s),sizeof(s.a)+sizeof(s.name)+sizeof(s.f)+2 );
  return 0;
}
