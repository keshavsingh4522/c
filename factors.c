//program to calculate the factors of an entered number.
#include <stdio.h>
 
int main(void) {
	int num, fac=1;
	printf("\nEnter the number: ");
	scanf("%d",&num);
 
	printf("\nFactors of %d are :\n",num);
	for(int i=1; i<=num/2;++i)
	{
		if(num%i==0)	printf("%d\t",i);
	}
	printf("%d\t",num);
	printf("\n");
 
	return 0;
}
