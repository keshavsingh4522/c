C Program to find Second largest Number in an Array
How to write a C Program to find the Second largest Number in an Array with example.? Before going into this second largest number in c example.

C Program to find Second largest Number in an Array
This program for finding the second largest number in c array asks the user to enter the Array size, Array elements, and the Search item value. Next, this C program will find the Second largest Number in this Array using For Loop.


/* C Program to find Second largest Number in an Array */

#include <stdio.h>
#include <limits.h>
 
int main()
{
	int arr[50], i, Size;
	int first, second;
	
	printf("\n Please Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }
	 
	first = second = INT_MIN;  
	   
	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
	}
	printf("\n The Largest Number in this Array =  %d", first);
	printf("\n The Second Largest Number in this Array =  %d", second);
	
	return 0;
}
C Program to find Second largest Number in an Array 1
In this C Program to find second largest number in an array, We declared 1 One Dimensional Arrays arr[] of size 10 and also declared i to iterate the Array elements. Please refer to Array in C article.

Below statements will ask the user to enter the array arr[] size (Number of elements an Array can hold), and assign the user entered values to Size variable.

printf("\n Please Enter the size of an array \n");
scanf("%d",&Size);
Below For loop will help to iterate each cell present in a[5] array. Condition inside the for loops (i < Size) will ensure the compiler, not to exceed the array limit.


The C Programming scanf statement inside the for loop store the user entered values into individual array element such as arr[0], arr[1], arr[2], arr[3], arr[4]

for(i = 0; i < Size; i++)
{
 	scanf("%d",&arr[i]);
}
In the next line, We have one more for loop, used to iterate each element in an array. If Statement inside the For loop will check whether arr[i] is equal to search item or not. If it is true, then Flag will become 1 and exit from the Loop (using Break Statement)

for (i = 0; i < Size; i++)
{
	if(arr[i] > first)
	{
		second = first;
		first = arr[i];
	}
	else if(arr[i] > second && arr[i] < first)
	{
		second = arr[i];
	}	
}
From the above screenshot, you can observe that the user inserted values for C second largest number are
a[5] = {10, 90, 80, 90, 80}


First Iteration: for (i = 0; 0 < 5; 0++)

The value of i will be 0, and the condition (i < 5) is True. So, program will start executing the statements inside the loop until the condition fails.

If (arr[i] > Search)  => if(10 > Int_Min) – Condition is True
second = Int_Min
first = 10

Second Iteration: for (i = 1; 1 < 5; 1++)
The condition (1 < 5) is True.
If (arr[i] > Search)  => if(90 > 10) – Condition is True
second = 10
first = 90

Third Iteration: for (i = 2; 2 < 5; 2++) – The condition (2 < 5) is True.

If (arr[i] > Search)  => if(80 > 90) – Condition is false. So, it will enter into Else If block


else if(arr[i] > second && arr[i] < first)

=> else if(80 > 10 && 80 < 90) – Condition is True
second = arr[i] = 80

Fourth Iteration: for (i = 3; 3 < 5; 3++) – The condition (3 < 5) is True.


If (arr[i] > Search)  => if(90 > 90) – Condition is false. So, it will enter into Else If block

else if(arr[i] > second && arr[i] < first) => else if(90 > 80 && 90 < 90)
Condition is False

Fifth Iteration: for (i = 4; 4 < 5; 4++) – The condition (4 < 5) is True.


If (arr[i] > Search)  => if(80 > 90) – Condition is false. So, it will enter into Else If block

else if(arr[i] > second && arr[i] < first) => else if(80 > 80 && 80 < 90) – Condition is False

Sixth Iteration: for (i = 5; 5 < 5; 5++)
The condition (4 < 5) is False. So, it will exit from the For Loop

Let me try different array elements for C Program to find Second largest Number in an Array

 Please Enter the Number of elements in an array  :  10

 Please Enter 10 elements of an Array 
10 10 10 10 10 -5 -5 -2 10 10

 The Largest Number in this Array =  10
 The Second Largest Number in this Array =  -2
