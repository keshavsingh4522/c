#include <stdio.h>
int main (){
	int a,b,c,d,e;
	printf("enter time in sec:  \n");
	scanf("%d",&a);
	b=a/3600;
	c=a%3600;
	d=c/60;
	e=c%60;
	printf("hours:%d minutes:%d second:%d",b,d,e);
	return 0;
}
