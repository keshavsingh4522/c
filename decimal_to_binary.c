#include <stdio.h>
int main(void) {
  int num;
  int bin_r[10];
  int bin[10];
  int size=0;
  int i;
  int i_r;
  printf("Type the number: \n");
  scanf("%d%*c",&num);
  i=0;
  while(1){
    if(num%2==0){
      bin_r[i]=0;
      size++;
    }
    else{
      bin_r[i]=1;
      size++;
    }
    num=num/2;
    i++;
    if(num==0){
      break;
    }
   }
  i_r=size-1;
  for(i=0;i<size;i++){
    bin[i]=bin_r[i_r];
    i_r--;
  }
  for(i=0;i<size;i++){
    printf("%d",bin[i]);
  }
}
