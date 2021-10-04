#include<stdio.h>  
 int main()    
{    
int a,b;      
  printf("Enter number 1 :");
  scanf("%d",&a);// if a=30
  printf("Enter number 2 :");
  scanf("%d",&b);// if b=20
 
  printf("Before swap a=%d b=%d",a,b);  //Before swap a=30 b=20     
  a=a+b;//a=50 (30+20)    
  b=a-b;//b=30 (50-20)    
  a=a-b;//a=20 (50-30)    
  printf("\nAfter swap a=%d b=%d",a,b); //After swap a=20 b=30  
return 0;  
}   
