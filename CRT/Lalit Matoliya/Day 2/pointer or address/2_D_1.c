#include <stdio.h>
void main()
{
  int a[][3]={10,20,34,45,56,67,78,89,90},i,j;
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
          printf("a[%d][%d]=%d Address=%u\n",i,j,a[i][j],&a[i][j]);
  printf("\n");

  printf("a=%u\n",a);
  printf("&a=%u\n",&a);
  printf("a+1=%u\n",a+1);
  printf("&a[0][1]=%u\n",&a[0][1]);
  printf("&a[0]+1=%u\n",&a[0]+1);
  printf("&a[1][0]=%u\n",&a[1][0]);
  printf("&a+1=%u\n",&a+1);
  printf("&a+2=%u\n",&a+2);
  printf("*a=%u\n",*a);
  printf("*a+1=%u\n",*a+1);
  printf("*a+2=%u\n",*a+2);
}
/*
Note:
 a = base address of 2-D array
 a+1 = Address of next row's first element
 &a+1 = It will print the address beyond the array size
OUTPUT:
a[0][0]=10 Address=2419746816
a[0][1]=20 Address=2419746820
a[0][2]=34 Address=2419746824
a[1][0]=45 Address=2419746828
a[1][1]=56 Address=2419746832
a[1][2]=67 Address=2419746836
a[2][0]=78 Address=2419746840
a[2][1]=89 Address=2419746844
a[2][2]=90 Address=2419746848

a=2419746816
&a=2419746816
a+1=2419746828
&a[0][1]=2419746820
&a[0]+1=2419746828
&a[1][0]=2419746828
&a+1=2419746852
&a+2=2419746888
*a=2419746816
*a+1=2419746820
*a+2=2419746824
*/
