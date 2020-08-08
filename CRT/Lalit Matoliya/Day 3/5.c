#include <stdio.h>
int main()
{
  char c[]={'H','E','L','L','O'};
  char c1[]={'H','E','L','L','O','\0'};
  char *p=c1;
  printf("%s\n",c );
  printf("%s\n",c1 );

// iterate one by one char
while(*p) //or while(*p!='\0')
{
  printf("%c\n",*p);
  p++;
}
printf("Successfully Iterated\n" );
  return 0;
}
