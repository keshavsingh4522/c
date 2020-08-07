#include <stdio.h>
void main(){
  int a[8],i,p=0,p_s=0,n=0,n_s=0;
  printf("Enter 8 number in array: ");
  for(i=0;i<8;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]>0){
        p_s+=a[i];
        p+=1;
      }
      else
      {
        n_s+=a[i];
        n+=1;
      }
    }
    printf("Total +ve number is %d and their sum is %d\n",p,p_s);
    printf("Total -ve number is %d and their sum is %d\n",n,n_s);
}
