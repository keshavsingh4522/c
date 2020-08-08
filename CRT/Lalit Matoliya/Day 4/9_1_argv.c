#include<stdio.h>
int main(int argc, char*argv[])
{
	int a, b, c, sum;
	a = atoi(argv[1]); // atoi() - string to int
	b = atoi(argv[2]); // itoa() - int to string
	c = atoi(argv[3]);
	sum = a + b + c;
	printf("Sum=%d", sum);
	return 0;
}
/*
./1 10 20 30
*/
