
#include <stdio.h>
int main(){
    int n,ind1=0,ind2=0,pin=0;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter an array with spaced inputs\n");
    int a[n],c[n],d[n];
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
  for(int i=0;i<n;i++){
     for(int j=0;j<ind1;j++){
       if(c[j]==a[i])//searching if the element is present in the array which contains distinct elements.
       pin=1;
     }
     if(pin==1){
       pin=0;
     for(int j=0;j<ind2;j++){
       if(d[j]==a[i])
       pin=1;
     }
     if(pin==0){
       d[ind2]=a[i];//if it is repeated before then inserting it into duplicate array.
       ind2++;
     }
  }
  else{
    c[ind1]=a[i];
    ind1++;
  }
  pin=0;
  }
  printf("duplicates: ");
  for(int i=0;i<ind2;i++)
  printf("%d ",d[i]);
}
