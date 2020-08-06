#include <stdio.h>
void main()
{
  int a[5]={10,20,34,45,56};
  for(int i=0;i<5;i++)
   printf("a[%d]=%d Address=%u\n",i,a[i],&a[i]);
   printf("\n");
  printf("a=%u\n",a);
  printf("&a=%u\n",&a);
  printf("a+1=%u\n",a+1);
  printf("&a[1]=%u\n",&a[1]);
  printf("&a+1=%u\n",&a+1);
  printf("&a+2=%u\n",&a+2);
}
/*
Note:
If you write the name of the array,then its the base address of an array.(starting address of array)
OUTPUT:
a[0]=10 Address=1259118272
a[1]=20 Address=1259118276
a[2]=34 Address=1259118280
a[3]=45 Address=1259118284
a[4]=56 Address=1259118288

a=1259118272
&a=1259118272
a+1=1259118276
&a[1]=1259118276
&a+1=1259118292
&a+1=1259118312
*/
