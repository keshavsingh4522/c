#include <stdio.h>
int main()
{
  char c[]={48,49,50,51,52};
  int i;
  char *s;
  s=c;
  // while(*s)
  // {
  //   printf("%c", *s);
  //   s++;
  // }
  for(i=0;i<5;i++)
  {
    if (*s)
    {
      printf("%c",*s );
      s++;
    }
  }

  // printf("\n%s",c);
  return 0;
}
