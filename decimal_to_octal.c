C Program to Convert Decimal to Octal Number
How to write a C Program to Convert Decimal to Octal Number with a practical example?. Before Converting Decimal to Octal Number in C, as we all know,

Decimal values are base 10 number systems, and they use numbers between 0 and 9
The octal numbers are Numbers of base 8, and they are they use numbers between 0 and 7
To convert Decimal Number to Octal Number in C – First, Divide Original value with 8. Next, Divide the Quotient by 8. Repeat the same procedure until the given number is zero.


C Program to Convert Decimal to Octal Number Example 1
It is the most straightforward and better approach to convert decimal numbers to octal numbers

/* C Program to Convert Decimal to Octal Number */
 
#include <stdio.h>
int main() 
{
    int number;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    printf("\n Octal Number of a Given Number =  %o", number);

    return 0;
}
C Decimal to Octal output


 Please Enter the Number You want to Convert  :  50

 Octal Number of a Given Number =  62
Convert Decimal to Octal Number Example 2
This program for converting decimal to octal in C uses For Loop to convert the user given Decimal value to Octal value. Finally, we used another For Loop to print Array elements. I suggest you refer Print Array article


/* C Program to Convert Decimal to Octal Number */
 
#include <stdio.h>
int main() 
{
    int octalNumber[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        octalNumber[i] = number % 8;
        number = number / 8;
    }
    
    printf("\n Equivalent Octal Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  
    {
        printf("%d", octalNumber[j]);
    }
    return 0;
}
 Please Enter the Number You want to Convert  :  25

 Equivalent Octal Number of a Given Number =  31
Convert Decimal to Octal Number example 3
This program is the same as above. Here, replaced the For Lop with While Loop.

/* C Program to Convert Decimal to Octal Number */
 
#include <stdio.h>
 
int main() 
{
    int octalNumber[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    while(number != 0)
    {
        octalNumber[i++] = number % 8;
        number = number / 8;
    }
    
    printf("\n Equivalent Octal Number of a Given Number =  ");
    for(j = i - 1; j > 0; j--)  
    {
        printf("%d", octalNumber[j]);
    }
    return 0;
}
C Program to Convert Decimal to Octal Number 3
Convert Decimal to Octal Number using Functions
In this program we used Functions to separate the logic.

/* C Program to Convert Decimal to Octal Number */
 
#include <stdio.h>

long Decimal_to_Octal(int number)
{
    long octalNumber = 0, i = 1;
    int remainder;
    while(number != 0)
    {
        remainder = number % 8;
        number = number / 8;
        octalNumber = octalNumber + (remainder * i);
        i = i * 10;
    }
    return octalNumber;
}

int main() 
{
    int number;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    long oct  = Decimal_to_Octal(number);
    printf("\n Equivalent Octal Number of %d =  %ld", number, oct);
    
    return 0;
}
 Please Enter the Number You want to Convert  :  22

 Equivalent Octal Number of 22 =  26
