// check whether the entered number is pallindrome or not
// logic : if num = reverse of num then it is pallindrome
// eg 121, 777, 1991, 2002, 9889889 are all pallindrome
// 124 123 not pallindrome

#include<stdio.h>
int main()
{
	int num,rem,rev=0,copy;
 
	printf("\nEnter a number: ");
	scanf("%d",&num);	//say 234
	copy=num;
 
	while(copy>0)		//234 
	{
	rem=copy%10;		//4 3 2 
	copy/=10; 	//43 4 0
	rev=rev*10+rem; 	// 0*10+4 4*10+3 43*10+2 
	}
 
	if (rev == num)	printf("\nEntered number is a pallindrome\n");
	else printf("\nEntered number is NOT pallindrome\n");
	
	return 0;
}
