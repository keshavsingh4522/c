#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("%d\n", argc); // Total number of argument supplied from the command prompt
	printf("%s\n", argv[0]); // Executable (Program Executable File Name)
	printf("%s\n", argv[1]); // First Argument
	printf("%s\n", argv[2]); // Second Argument
	return 0;
}
