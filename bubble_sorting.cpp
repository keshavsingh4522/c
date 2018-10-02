#include"conio.h"
#include"stdio.h"
#include"alloc.h"
void main()
{
clrscr();
	int i,j,k,n,*p,t;
	printf("enter no of elements of array: ");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int)*n);
	 printf("enter %d elements: ",n);
	 for(i=0;i<n;i++)
	 scanf("%d",p+i);
	 for(i=0;i<n;i++)
	  { for(j=0;j<n-i-1;j++)
	     if(p[j]>p[j+1])
	       {  t=p[j];
	       p[j]=p[j+1];
	       p[j+1]=t;
		  }
	     for(k=0;k<n;k++)
	       printf("%d ",p[k]);
	       printf("\n");
	     }
	     printf("after bubble sorting: \n");
	     for(i=0;i<n;i++)
	     printf("%d\t",*(p+i));
getch();
}
