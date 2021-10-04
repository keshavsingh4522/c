#include <stdio.h>

int sum(int n){
    if(n>1)
        return n*sum(n-1);
    else
        return n;
}

int main()
{
    int number, result;
    
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    
    result=sum(number);
    
    printf("sum=%d",result);

    return 0;
}
