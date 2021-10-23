C Program to Find Prime Factors of a Number
How to write a C Program to Find Prime Factors of a Number using For Loop, While Loop, and Functions.

C Program to Find Prime Factors of a Number Using For Loop
This program allows the user to enter any integer value. Next, this program finds Prime Factors of a number using For Loop.


In our previous article, we have already explained, How to write a program to Find Factors of a Number and Find Prime numbers.

/* C Program to Find Prime Factors of a Number using For Loop */
 
#include <stdio.h>
 
int main()
{
  	int i, j, Number, isPrime; 
   
  	printf("\n Please Enter any number to Find Factors :  ");
  	scanf("%d", &Number);
 
  	for (i = 2; i <= Number; i++)
   	{
     	if(Number % i == 0)
        {
   			isPrime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					isPrime = 0;
					break;
				}
			} 
			if(isPrime == 1)
			{
				printf("\n %d is a Prime Factor ", i);
			}	          	
		}
   }
  	return 0;
}
C Program to Find Prime Factors of a Number 1
C Program to Calculate Prime Factors of a Number Using While Loop
This C Program allows the user to enter any integer value. Using this value, this program will find the Prime Factors of a number using While Loop.

/* C Program to Find Prime factors of a Number using While Loop */
 
#include <stdio.h>
 
int main()
{
  	int Number, i = 1, j, Count; 
 
  	printf("\n Please Enter number to Find Factors  :  ");
  	scanf("%d", &Number);
 
 	while (i <= Number)
   	{
   		Count = 0;
    	if(Number % i == 0)
      	{
      		j = 1;
      		while(j <= i)
      		{
      			if(i % j == 0)
      			{
      				Count++;
				}
				j++;
			}
			if(Count == 2)
			{
				printf("\n %d is a Prime Factor ", i);
			} 
      	}
    	i++;
   	}
 
  	return 0;
}
We just replaced the For Loop in the above Program to Find Prime Factors of a Number example with While loop. If you don’t understand the WHILE LOOP.


C prime factors output

 Please Enter number to Find Factors  :  2550

 2 is a Prime Factor 
 3 is a Prime Factor 
 5 is a Prime Factor 
 17 is a Prime Factor 
C Program to Calculate Prime Factors of a Number Using Functions
This program allows the user to enter any integer value. User entered value will be passed to the Functions that we created. The find_factors function will find the Factors of a number, Find_Prime will check whether the factor is prime or not.

/* C Program to Find Prime Factors of a Number using Functions */
 
#include <stdio.h>

void Find_Prime(int Number)
{ 
  	int i, Count = 0; 
  
  	for (i = 2; i <= Number/2; i++)
   	{
    	if(Number%i == 0)
     	{
       		Count++;
     	} 
   	}
   	if(Count == 0 && Number != 1 )
   	{
   		printf("\n %d is a Prime Number", Number);
   	}
}
void Find_Factors(int Number)
{ 
  	int i; 
  
  	for (i = 1; i <= Number; i++)
   	{
    	if(Number % i == 0)
     	{
     		// Calling Find_Prime Function for every factor
       		Find_Prime(i);
     	} 
   	}
}
int main()
{
  	int i, j, Number, count; 
   
  	printf("\n Please Enter any number to Find it's Prime Factors :  ");
  	scanf("%d", &Number);
 
  	printf("\n Prime Factors of a Given Number are : \n");
	Find_Factors(Number);

  	return 0;
}
 Please Enter any number to Find it's Prime Factors :  10750

 Prime Factors of a Given Number are : 

 2 is a Prime Number
 5 is a Prime Number
 43 is a Prime Number
