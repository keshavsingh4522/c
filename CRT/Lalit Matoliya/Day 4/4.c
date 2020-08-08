#include <stdio.h>
int main()
{
  char *c="Helllo";
  char *s="Hello";
  if (c==s)
  printf("True\n");
  else
  printf("False\n");


  if (*c==*s)
  printf("True\n");
  else
  printf("False\n");

  return 0;
}
