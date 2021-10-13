#include <stdio.h>
int main(void) {
    int vector[10];
    int primes[10];
    int i;
    int i2=0;
    int i3=0;
    int amountprimes=0;
    int contdivisors=0;
    for(i=0;i<10;i++){
      printf("Type the number(%d): \n",i+1);
      scanf("%d%*c",&vector[i]);
    }
    i=1;
    while(1){
      if(i2>9){
        break;
      }
      if(i<=vector[i2]){
        if(vector[i2]%i==0){
        contdivisors++;
        }
        i++;
      }
      else{
        if(contdivisors==2){
          amountprimes++;
          primes[i3]=vector[i2];
          i3++;
        }
        i2++;
        i=1;
        contdivisors=0;
      }
    }
    printf("The primes are: \n");
    for(i=0;i<amountprimes;i++){
      printf("%d \n",primes[i]);
    }
}
