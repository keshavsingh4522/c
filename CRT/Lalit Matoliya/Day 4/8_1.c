#include <stdio.h>
int H(int N)
{
  if(N<5)
  return 3*N;
  else
  return 2*H(N-5)+7;
}
int main()
{
  int N;
  scanf("%d",&N );
  printf("%d\n", H(N));
return 0;
}
