<div align='center'><h1>Winner Academy of Excellence</h1></div>

### Day-3 Practice Questions (7th August 2020)
**1.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
int i,*j,k;
i=3;
j=&i;
printf("%d", i**j*i+*j);
}
```
(a) 30\
(b) 27\
(c) 9\
(d) Error

Correct Answer: **a**

**2.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
char *str;
str="%d\n";
str++;
str++;
printf(str-2,300);
}
```
(a) No Output\
(b) 30\
(c) 3\
(d) 300

Correct Answer: **d**

**3.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
char *str;
str="%s";
printf(str,”K”);
}
```
(a) Error\
(b) No Output\
(c) K\
(d) %s

Correct Answer: **c**

**4.** Which of the following is the correct output for the program given below, if an integer is 4
bytes long?
```c
#include<stdio.h>
void main()
{
int ***r, **q, *p, i=8;
p=&i;
q=&p;
r=&q;
printf("%d%d%d",*p,**q,***r);
}
```
(a) 8 8 8\
(b) 4000 4002 4004\
(c) 4000 4004 4008\
(d) 4000 4008 4016

Correct Answer: **a**

**5.** What will be the output of the following program?
```c
#include<stdio.h>
void main()
{
printf("%c",6["AGRA RAJASTHAN"]);
}
```
(a) RAJASTHAN\
(b) AGRA\
(c) A\
(d) ASTHAN

Correct Answer: **c**

**6.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
char *p;
p="Hello";
printf("%s",*&*&p);
}
```
(a) llo\
(b) Hello\
(c) ello\
(d) h

Correct Answer: **b**

**7.** Which of the following statement is correct about k used in the statement given below?
```c
char ****k;
```
(a) Pointer to a pointer to a pointer to a char.\
(b) Pointer to a char pointer.\
(c) Pointer to a pointer to a char.\
(d) Pointer to a pointer to a pointer to a pointer to a char.

Correct Answer: **d**

**8.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
char str[]="peace";
char *s=str;
printf("%s",s++ + 3);
}
```
(a) peace\
(b) eace\
(c) ace\
(d) ce

Correct Answer:**a**

**9.** Which of the following statements is correct about the program given below?
```c
#include<stdio.h>
void main()
{
int arr[3][3]={1,2,3,4};
printf("%d",*(*(*(arr))));
}
```
(a) It will output a garbage value.
(b) It will output a value 1.
(c) It will output a value 3.
(d) It will report an error: ‘Invalid Indirection’.

Correct Answer:**d**

**10.** The operator used to get value at address stored in a pointer variable is
(a) *
(b) &
(c) &&
(d) ||

Correct Answer:**a**

## Programming Questions

**1.** WAP to input any string and find the length of the given string
**2.** WAP to print the following pyramid
```
0
1 1
2 3 5
8 13 21 34
```
**3.** WAP to input any two matrix and find the following\
    1. Addition of Two Matrix\
    2. Subtraction Operation\
    3. Multiplication of Matrix

**4.** WAP to print the armstrong number from 1 to 50000
**5.** WAP to print the prime numbers from 2 to 100
