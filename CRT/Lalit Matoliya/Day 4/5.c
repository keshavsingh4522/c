#include <stdio.h>
int main()
{
  char *c="Limericks";
  char *s;
  s=&c[6]-6;
  while(*s)
  {
    printf("%c",*s);
    s++;
  }
  return 0;
}
