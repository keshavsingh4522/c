C Program to check Matrix is a Symmetric Matrix
How to write a C Program to check Matrix is a Symmetric Matrix or Not with example. Any square matrix called a Symmetric Matrix if a matrix is equal to its Transposed Matrix.

C Program to check Matrix is a Symmetric Matrix or Not 1
C Program to check Matrix is a Symmetric Matrix Example
This program allows the user to enter the number of rows and columns of a Matrix. Next, we are going to check whether the given matrix is a symmetric matrix or not using For Loop.


/* C Program to check Matrix is a Symmetric Matrix or Not */
 
#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], b[10][10], Count = 1;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	//Transpose of matrix 
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j; columns++)
    	{
      		b[columns][rows] = a[rows][columns];
    	}
  	}
     
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
    		if(a[rows][columns] != b[rows][columns])
    		{
    			Count++;  
				break;  		
			}
   	 	}
  	}
  	if(Count == 1)
  	{
  		printf("\n The Matrix that you entered is a Symmetric Matrix ");
	}
	else
	{
		printf("\n The Matrix that you entered is Not a Symmetric Matrix ");
	}
  	
 	return 0;
}
C Program to check Matrix is a Symmetric Matrix or Not 2
In this Program to check Matrix is a Symmetric Matrix, We declared single Two dimensional arrays Multiplication of size of 10 * 10.

Below statements in this program asks the User to enter the Matrix size (Number of rows and columns. For instance 2 Rows, 2 Columns = a[2][2] )

printf("\n Please Enter Number of rows and columns  :  ");
scanf("%d %d", &i, &j);
Next, we used for loop to iterate every item present in a[2][2] matrix. Conditions inside the for loops ((rows < i) and (columns < j)) ensures the compiler, not to pass the matrix limit. Otherwise, the matrix will overflow. The scanf statement inside the C Programming for loop will store the user entered values in every individual array element such as a[0][0], a[0][1], …..

for(rows = 0; rows < i; rows++).
{
  for(columns = 0; columns < j; columns++)
   {
     scanf("%d", &a[rows][columns]);
   }
}
In the next line, We used For Loop to transpose this Matrix. I suggest you to refer Transpose a Matrix article to understand the same

for(rows = 0; rows < i; rows++)  	
{
   	for(columns = 0;columns < j; columns++)    	
        {
      		b[columns][rows] = a[rows][columns];
    	}
}
Next, we are trying to check whether each element in a matrix is equal to the transposed matrix or not.

for(rows = 0; rows < i; rows++)
{
   	for(columns = 0; columns < j; columns++)
    	{
    		if(a[rows][columns] != 1 && a[columns][rows] != 0)
    		{
    			Flag = 0;
    			break;
		}
   	}
}
Let me try the program with other values

 Please Enter Number of rows and columns  :  3 3

 Please Enter the Matrix Elements 
10 20 30
40 50 60
70 80 90

 The Matrix that you entered is Not a Symmetric Matrix 
