#include <stdio.h>
void main()
{
  int a[5]={10,20,34,45,56};
  for(int i=0;i<5;i++)
   printf("a[%d]=%d Address=%u\n",i,a[i],&a[i]);
}
/*
OUTPUT:

a[0]=10 Address=3035251984
a[1]=20 Address=3035251988
a[2]=34 Address=3035251992
a[3]=45 Address=3035251996
a[4]=56 Address=3035252000
*/
