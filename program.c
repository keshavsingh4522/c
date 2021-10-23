C Program to Count Number of Digits in a Number

C Program to Count Number of Digits in a Number using While Loop
This C program to count digits in a number allows the user to enter any positive integer. And then, it will divide the given number into individual digits and count those individual digits using While Loop.


/* C Program to Count Number of Digits in a Number using While Loop */
#include <stdio.h>

int main()
{
  int Number, Reminder, Count=0;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);

  while(Number > 0)
  {
     Number = Number / 10;
     Count = Count + 1;  
  }

  printf("\n Number of Digits in a Given Number = %d", Count);
  return 0;
}
C Count Digits in a Number using While Loop output

Count the Number of Digits using While
This program to count number of digits in c allows the user to enter any positive integer, and then, that number assigned to the Number variable.

Next, Condition in the While Loop will make sure that the given number is greater than 0 (Means Positive integer and greater than 0)


User Entered value in this C program: Number = 9875 and Count = 0

First Iteration
Number = Number / 10 = 9875 / 10
Number = 987

Count = Count + 1 = 0 + 1
Count = 1


Second Iteration

From the first Iteration, the values of both Number and Count has changed as Number = 987 and Count = 1

Number = Number / 10 = 987 / 10
Number = 98

Count = Count + 1 = 1 + 1
Count = 2

Third Iteration
From the second Iteration, the values of both Number and Count has been changed as Number = 98 and Count = 2

Number = Number / 10 = 98 / 10
Number = 9


Count = Count + 1 = 2 + 1
Count = 3

Fourth Iteration
From the third Iteration of count digits in a number program, the values Number = 9 and Count = 3

Number = Number / 10 = 9 / 10
Number = 0


Count = Count + 1 = 3 + 1
Count = 4

Here Number = 0 so, the condition present in the while loop will fail

The last C Programming printf statement will print the number of digits present in the given number using the Count variable as the output. So, the output of the given variable 9875 is 4


C Program to Count Number of Digits in a Number using For Loop
This program to count the number of digits allows the user to enter any positive integer. Next, it divides the given number into individual digits, and counts those individual digits using For Loop.

/* C Program to Count Number of Digits in a Number using For Loop */ 

#include <stdio.h>

int main()
{
  int Number, Reminder, Count;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);

  for (Count=0; Number > 0;Number=Number/10)
  {
     Count=Count + 1;  
  }

  printf("\n Number of Digits in a Given Number = %d", Count);

  return 0;
}
We just replaced the While loop in the above count number of digits in a number example with the For loop. If you don’t understand the for loop program, then please refer For Loop article here: For Loop.


 Please Enter any number
256

 Number of Digits in a Given Number = 3
C Program to Count Number of Digits in a Number Using Functions
This program to count the number of digits allows the user to enter any positive integer. Then it divides the given number into individual digits and counting those individual digits using Functions.


/* C Program to Count Number of Digits in a Number Using Functions */

#include <stdio.h>

int Count_Of_Digits (int); 

int main()
{
  int Number, Count = 0;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);

  Count = Count_Of_Digits (Number);

  printf("\n Number of Digits in a Given Number = %d", Count);
  return 0;
}

int Count_Of_Digits (int Number)
{
  int Count;

  while(Number > 0)
  {
     Number = Number / 10;
     Count = Count + 1;  
  }

 return Count;
}

 Please Enter any number
9875

 Number of Digits in a Given Number = 4
Within this count number of digits program, When the compiler reaches to Count_Of_Digits (Number) line in the main() program then the compiler will immediately jump to below function:

int Count_Of_Digits (int Number)
We already explained the LOGIC above example. Please refer Program to Count Number of Digits of a Given Number using the While Loop Analysis section.

The last line ends with a return Count Statement.


NOTE: If we create a function with Void, then there is no need to return any value. But, if we declared a function with any data type (int, float. etc.), then we have to return something out from the function.

C Program to Count Number of Digits in a Number Using Recursion
This program to count the number of digits divides the given number and count those individual digits using Recursion.

/* C Program to Count Number of Digits in a Number Using Recursions */

#include <stdio.h>

int Count_Of_Digits (int); 

int main()
{
  int Number, Count = 0;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);

  Count = Count_Of_Digits (Number);

  printf("\n Number of Digits in a Given Number = %d", Count);
  return 0;
}

int Count_Of_Digits (int Number)
{
  static int Count =0;

  if(Number > 0)
  {
     Count = Count + 1;  
     Count_Of_Digits (Number / 10);
  }

 return Count;
}
C Count Digits in a Number Using Recursion output



 Please Enter any number
985682

 Number of Digits in a Given Number = 6
Within this program to count the number of digits, In the Count_Of_Digits (int Number) function definition,

A static variable will initialize the value only when the function called the first time.

Count_Of_Digits (Number / 10) statement will help to call the function Recursively with the updated value. If you miss this statement, after completing the first line, it will terminate.


For example, Number = 1234, then the output will be 4
