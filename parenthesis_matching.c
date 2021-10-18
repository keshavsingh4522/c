#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

char a[MAX];
int top;

void initializeStack();
void push(int x);
int pop();
int isEmpty();
int isFull();

int isValid(char exp[]);
int matchParentheses(char leftPar, char rightPar);

int main()
{
	char expression[MAX];
	int choice = 'y';
	while (choice == 'y')
	{
		printf("Enter an expression with parentheses: ");
		fgets(expression,MAX,stdin);

		initializeStack();

		if (isValid(expression))
			printf("Valid Expression\n");
		else
			printf("Invalid Expression\n");

		printf("Want to check another expression (Enter 'y' for yes) : ");
		scanf("%c",&choice);
		fflush(stdin);
	}
}


void initializeStack()
{
	top = -1;
}

int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

int isValid(char expr[])
{
	int i;
	char ch;

	for (i = 0; i < strlen(expr); i++)
	{
		if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
			push(expr[i]);

		if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
			if (isEmpty())
			{
				printf("Right parentheses are more than left parentheses\n");
				return 0;
			}
			else
			{
				ch = pop();
				if (!matchParentheses(ch, expr[i]))
				{
					printf("Mismatched parentheses are :");
					printf("%c and %c\n", ch, expr[i]);
					return 0;
				}
			}
	}

	if (isEmpty())
	{
	   printf("Balanced Parentheses\n");
	   return 1;
	}
	else
	{
	   printf("Left parentheses are more than right parentheses\n");
	   return 0;
	}
}

int matchParentheses(char leftPar, char rightPar)
{
	if (leftPar == '[' && rightPar == ']')
		return 1;
	if (leftPar == '{' && rightPar == '}')
		return 1;
	if (leftPar == '(' && rightPar == ')')
		return 1;

	return 0;
}


int isFull()
{
	if (top == MAX - 1)
		return 1;
	else
		return 0;
}

void push(int x)
{
	if (isFull())
	{
		printf("Stack Overflow\n");
		return;
	}
	++top;
	a[top] = x;
}

int pop()
{
	int x;
	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	x = a[top];
	top--;
	return x;
}
