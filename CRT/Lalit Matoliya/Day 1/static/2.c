#include <stdio.h>
void func(){
  static int x;
  x+=1;
  printf("x=%d\n",x);
}
void main()
{
  func();
  func();
  func();
  func();
}
