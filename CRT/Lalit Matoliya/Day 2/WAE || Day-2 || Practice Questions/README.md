<div align='center'><h1>Winner Academy of Excellence</h1></div>

### Day-2 Practice Questions (6th August 2020)

**1.** What will be the result of the following program if the inputs are 2 3?

```c
main()
{
  int a,b;
  printf(“Enter two numbers:”);
  scanf(“%d%d”,a,b);
  printf(“%d+%d=%d”,a,b,a+b);
}
```

(a) 2 + 3 =5\
(b) Syntax Error\
(c) Will generate run time error/core dump\
(d) A+b=5

_Correct Answer:_ **a**

**2.** What is the output of the following statement?
```c
printf(“%u”,-1);
```
(a) -1\
(b) Minimum int value\
(c) Maximum int value\
(d) Error

Correct Answer: **c**

**3.** What will be printed when the following code is executed?
```c
main()
{
  int i=4,a=6;
  double z;
  z=a/i;
  printf(“z=%.2f\n”,z);
}
```
(a) z=0.00\
(b) z=1.00\
(c) z=1.50\
(d) z=2.00\

Correct Answer: **b**

**4.** If break statement is omitted in each case statement
(a) The program executes the statements following the case statement where a match is
found and exist the switch case construct.\
(b) The program executes the statements following the case statement where a match is
found and also all the subsequents and default statements.\
(c) The program executes default statements only and continues with the remaining code.\
(d) Syntax error is produced.

Correct Answer:**b**

**5.**
```c
main()
{
  int x=0;
  for( ; ; )
  {
    if(x++ == 4)
      break;
    continue;
  }
  printf(“%d”,x);
}
```
What will be printed when the above code is executed?\
(a) 0\
(b) 1\
(c) 4\
(d) 5

Correct Answer:**d**

**6.**
```c
main()
{
  unsigned int i=10;
  while(i-- >=0);
}
```
How many times the loop will be executed?\
(a) 10\
(b) 0\
(c) 1\
(d) None of these

Correct Answer: **d**

**7.** What is output of the following code?
```c
main()
{
  int i=3;
  while(i--)
  {
    int i=100;
    i--;
    printf(“%d..”,i);
  }
}
```
(a) Infinite Loop\
(b) Error\
(c) 99..99..99..\
(d) 3..2..1..

Correct Answer: **a**

**8.** What is the output of the following code?
```c
main()
{
  int i=0;
  switch(i)
  {
    case 0: i++;
    case 1: i++ + 2;
    case 2: ++i;
  }
  printf(“%d”,i++);
}
```
(a) 1\
(b) 3\
(c) 4\
(d) 5\

Correct Answer: **b**

**9.** Result of the following program is
```c
main()
{
  int i=0;
  for(i=0;i<20;i++)
  {
    switch(i)
    {
      case 0: i+=5;
      case 1: i+=2;
      case 5: i+=5;
      default: i+=4;
      break;
    }
    printf(“%d”,i);
  }
}
```
(a) 0 5 9 13 17\
(b) 5 9 13 17\
(c) 12 17 22\
(d) 16 21

Correct Answer: **d**

**10.** In the following program how long will the for loop get executed?
```c
#include<stdio.h>
void main()
{
  int i;
  for(;scanf(“%d”,&i);printf(“%d”,i));
}
```
(a) The for loop would not get executed at all.\
(b) The for loop would get executed only once.\
(c) The for loop would get executed 5 times.\
(d) The for loop would get executed infinite times.

Correct Answer: **d**

## Problems based on Looping and Arrays and Functions

1. WAP to print the sum of the following series:
```
sum = 1 + 1/2! + 1/3! + 1/4! + ......... + 1/n!
```

2. WAP to print the following pyramid using function:
```
A       A
AB     BA
ABC   CBA
ABCD DCBA
ABCDEEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A
```

3. WAP to input any any ten values in an array, find the sum of positive numbers, sum of
negative numbers, count positive numbers, count negative numbers also.

4. WAP to find the lucky number of the given number\
I/P: ```1234567```\
O/P: ```1 + 2 + 3 + 4 + 5 + 6 + 7 = 28 => 2+8 = 10 => 1 + 0 = 1```

I/P: ```5598```\
O/P: ```5 + 5 + 9 + 8 = 27 = 2 + 7 = 9```

5. WAP to print the following pyramid using function
```
1
2 3
5 7 11
13 17 19 23
```

**Day-1 MCQ Answers**
```
Q1: A
Q2: C
Q3: A
Q4: C
Q5: D
Q6: A
Q7: B
Q8: A
Q9: C
Q10: D
```
