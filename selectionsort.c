#include <stdio.h>

int main() {
    
    
    
    int i,j;
    int a[5]={38,12,1,23,90,44};
    
 /*
    for(i=0;i<5;i++)
    {
     printf("Enter numbers @ a[%d]\n",i);
     scanf("%d",&a[i]);
        
    }
    */
    // printf("\nYou Entered\n");
   int temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
        }
    }
    
    
for(j=0;j<5;j++)
    {
     printf(" numbers @ a[%d]=%d\n",j,a[j]);
    }
    
    return 0;
}

b
