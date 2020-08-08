<div align='center'><h1>Winner Academy of Excellence</h1></div>

### Day-4 Practice Questions (8th August 2020)
**1.** A pointer is\
(a) A keyword used to create variables.\
(b) A variable that stores address of an instruction.\
(c) A variable that stores address of other variables.\
(d) All of the above

Correct Answer:

**2.** Which of the following statement is correct about the program given below?
```c
#include<stdio.h>
void main()
{
	int i=10;
	int *j=&i;
}
```
(a) j and i are pointers to an int.\
(b) i is a pointer to an int and stores address of j.\
(c) j is a pointer to an int and stores address of i.\
(d) j is a pointer to a pointer to an int and stores address of i.

Correct Answer:

**3.** Which statement will you add to the following program to ensure that the program outputs “AGRA-JECR” on execution?
```c
#include<stdio.h>
void main()
{
		char s[]=”AGRA-JECR”;
		char t[25];
		char *ps,*pt;
		ps=s;
		pt=t;
		while(*ps)
			*pt++=*ps++;
		/*add suitable statement here*/
		printf(“%s”,t);
}
```
(a)	*pt=’\0’;\
(b)	*pt=NULL;\
(c)	Both (a) or (b)\
(d)	Error

Correct Answer:

**4.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
	char str1[]=”Bombay”;
	char str2[]=”Pune”;
	char *s1=str1,*s2=str2;
	while(*s1++=*s2++);
	printf(“%s”,str1);
}
```
(a) Bombay Pune\
(b) Pune\
(c) Bombay\
(d) (null)

Correct Answer:

**5.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
	int arr[5],i=0;
	while(i<5)
		arr[i]=++i;
	for(i=0;i<5;i++)
		printf(“%d”,arr[i]);
}
```
(a)	1 2 3 4 5\
(b)	Garbage Value 1 2 3 4\
(c)	0 1 2 3 4\
(d)	2 3 4 5 6

Correct Answer:

**6.** Which of the following is the correct output for the program given below?
```c
#include<stdio.h>
void main()
{
	int arr[1]={10};
	printf(“%d”,0[arr]);
}
```
(a)	1\
(b)	10\
(c)	0\
(d)	None of the above

Correct Answer:

**7.** Which of the following statements are correct about 6 used in the following C expressions?
```c
int num[6];
num[6]=21;
```
(a)	In the first statement 6 specifies a particular element, whereas in the second statement it specifies a type.\
(b)	In the first statement 6 specifies the array size, whereas in the second statement it specifies a particular element of the array.\
(c)	In the first statement 6 specifies a particular element, whereas in the second it specifies the array size.\
(d)	In both the statements 6 specifies array size.\
(e)	In the first statement 6 specifies array size, whereas in the second statement it specifies that the array size be increased from 6 to 21.

Correct Answer:

**8.** What will be the output of the following program, if the array begins at address 1200 in memory?
```c
#include<stdio.h>
void main()
{
	int arr[]={2,3,4,1,6};
	printf(“%u %u %u”,arr,&arr[0],&arr);
}
```
(a)	1200 1200 1200\
(b)	1200 1202 1200\
(c)	1200 1210 1200\
(d)	1200 1204 1200

Correct Answer:

**9.** What will be the output of the following program, if the array begins at 65486 and each integer occupies 2 bytes?
```c
#include<stdio.h>
void main()
{
	int arr[]={12,14,15,23,45};
	printf(“%u %u”,arr+1,&arr+1);
}
```
(a)	65488 65490\
(b)	65488 65492\
(c)	65488 65496\
(d)	65488 65494

Correct Answer:

**10.** What will be the output of the following program?
```c
#include<stdio.h>
void main()
{
	float a[]={12.4,2.3,4.5,6.7};
	printf(“\n%d”,sizeof(a)/sizeof(a[0]));
}
```
(a)	4\
(b)	8\
(c)	2\
(d)	16

Correct Answer:

## Programming Questions

**1.** WAP to print the input number in the following format:
```
	I/P: 12345
	O/P: One Two Three Four Five
```

**2.** WAP to input any units of electricity bill. Find the total bill for the given units.
```
  Units		Charge for Units
	0-100		0.50 Rs. Per Unit
	101 - 200		1.00 Rs. Per Unit
	201 - 400		2.00 Rs. Per Unit
	> 400		5.00 Rs. Per Unit
```

**3.** WAP to print the sum of the following series:
```
  sum = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ....... + 1/n!
```

**4.** WAP to input any string and perform the following operations
```
     1. To concate two string without using inbuilt functions strcat()
     2. To copy one string into another array
     3. To compare the two string
```

**5.** WAP to print the following pyramid:
```
	A
	AB
	ABC
	ABCD
	ABCDE
```
