// check whether the entered number is pallindrome or not
// logic : if num = reverse of num then it is pallindrome
// eg 121, 777, 1991, 2002, 9889889 are all pallindrome
// 124 123 not pallindrome

#include<stdio.h>
int main()
{
	int num,r1,r2=0,cp;
 
	printf("\nEnter a number: ");
	scanf("%d",&num);	//say 234
	cp=num;
 
	while(copy>0)		//234 
	{
	r1=cp%10;		//4 3 2 
	cp/=10; 	//43 4 0
	r2=r2*10+r1; 	// 0*10+4 4*10+3 43*10+2 
	}
 
	if (r2 == num)	printf("\nEntered number is a pallindrome\n");
	else printf("\nEntered number is NOT pallindrome\n");
	
	return 0;
}
