C Program to Convert Celsius to Fahrenheit
How to write a C program to convert Celsius to Fahrenheit with an example. The formula behind the temperature conversion of Celsius to Fahrenheit in C is: Fahrenheit = (9/5) * Celsius) + 32

C program to convert Celsius to Fahrenheit
This C program to change Celsius to Fahrenheit lets the user enter the temperature value in Celsius. Next, we are going to convert the user-specified temperature in Celsius to Fahrenheit in C.


//C program to convert Celsius to Fahrenheit
#include <stdio.h>
 
int main()
{
    float celsius, fahrenheit;
 
    printf("Please Enter temperature in Celsius: \n");
    scanf("%f", &celsius);
 
    // Convert the temperature from celsius to fahrenheit 
    fahrenheit = ((celsius * 9)/5) + 32;
    // fahrenheit = ((9/5) * celsius) + 32;
    // fahrenheit = ((1.8 * celsius) + 32;
 
    printf("\n %.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
 
    return 0;
}
C program to convert Celsius to Fahrenheit
Within this C program to change Celsius to Fahrenheit example, the following statements will ask the user to enter the temperature value in Celsius. And the scanf statement in this C program will assign the user entered values to declare variable already Celsius.

printf("Please Enter temperature in Celsius: \n");
scanf("%f", &celsius);
We can use any of the below-specified formulas to convert the temperature in Celsius to Fahrenheit

fahrenheit = ((celsius * 9)/5) + 32
fahrenheit = ((9/5) * celsius) + 32 => ((1.8 * celsius) + 32;


Last C programming printf statement will print the output

printf("\n %.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
Let me show you the Fahrenheit value of Zero Celsius

Please Enter temperature in Celsius: 
0

 0.00 Celsius = 32.00 Fahrenheit
