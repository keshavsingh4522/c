#include <stdio.h>
int main()
{
  char *c="\nMalayalaM >>>";
  char *s;
  s=c+13;
  while(s>=c)
  {
    printf("%c",*s);
    s--;
  }

}
