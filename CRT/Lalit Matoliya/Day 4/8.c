#include <stdio.h>
int Q(int j,int k)
{
  if(j<k)
  return 5;
  else
  return Q(j-k,k+2)+j;
}
int main()
{
  int j,k;
  scanf("%d%d",&j,&k );
  printf("%d\n", Q(j,k));
return 0;
}
