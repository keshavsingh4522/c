#include <stdio.h>
#include <stdlib.h>
int main()
{ //this is for hacktober 
    double num1;
    double num2;
    char op;
    printf("enter the number:");
    scanf("%lf", &num1);
    printf("enter second no:");
    scanf("%lf", &num2);
    printf("enter operator:");
    scanf(" %c", &op);
    if (op == '+')
    {
        printf("%f", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (op == '*')
    {
        printf("%f", num1 * num2);
    }
    else if (op=='/'){
        printf("%f", num1 / num2);
    }else{printf("nothing bruhh");}
    return 0;
}
