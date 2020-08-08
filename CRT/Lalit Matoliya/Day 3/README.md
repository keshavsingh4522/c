<div align='center'><h1>Pointers</h1></div>
<h3>arithmetic operations</h3>
**Valid Operations**
- Increment.
- Decrement.
- Addition.
- Subtraction.
- Comparison.
**Invalid Operations**
- Multiply
- Divide

<div align='center'><h1>Accessing array elements with different ways</h1></div>
- **1-D**
```c
#include <stdio.h>
int main()
{
  int n[25];
  n[0]=100;
  n[24]=200;
  printf("%d %d\n",*n,*n+*(n+24));
  printf("n[24] = %d\n", n[24]);
  printf("24[n] = %d\n", 24[n]);
  return 0;
}
//Note: n[i]=*(n+i)=i[n]
/*
Output:
100 300
200
200
*/
```
```c
a[3][3]={1,2,3,4,5,6,7,8,9}
          a[0][0] a[0][1] a[0][2] a[1][0] a[1][1] a[1][2] a[2][0] a[2][1] a[2][2]
             1       2       3       4       5       6       7       8       9
address:   65432   65436   65440   65444   65448   65452   65456   65460   65464   65468

```
- a[i][j] --> \*(a[i]+j) --> \*(\*(a+i)+j)
- a     --> &a[0][0] --> 65432 --> Base address of array
- a+1   --> &a[1][0] --> 65444 --> Base address of next row
- \*a+1 --> a[0]+1 --> &a[0][1] -->  65436 --> Address of next element
