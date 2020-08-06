#include <stdio.h>
void main()
{
  int a=10,*p,**q;
  p=&a;
  q=&p;
  printf("a=%d &a=%u\n",a,&a);
  printf("p=%u &p=%u\n",p,&p);
  printf("q=%u &q=%u\n",q,&q);
  printf("*q=%u **q=%u\n",*q,**q);
  printf("*p=%u\n",*p);
}
/*
OUTPUT:

a=10 &a=2798470052
p=2798470052 &p=2798470056
q=2798470056 &q=2798470064
*q=2798470052 **q=10
*p=10
*/
