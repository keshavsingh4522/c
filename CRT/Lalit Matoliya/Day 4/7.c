#include <stdio.h>
int main()
{
  char s[]="C is a philosphy of life";
  char t[40];
  char *ss,*tt;
  ss=s;
  tt=t;
  while(*ss)
    *tt++=*ss++;
  tt=ss;
  printf("\n%s",t);
  return 0;
}
