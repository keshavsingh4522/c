
#include"conio.h"
#include"stdio.h"
#include"alloc.h"
void main()
{
clrscr();
	int i,j,n,n1,*p,t,s=0,m,e;
	printf("enter no of elements of array: ");
	 scanf("%d",&n);
	  e=n-1;
	p=(int *)malloc(sizeof(int)*n);
	 printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	 scanf("%d",p+i);
	for(i=0;i<n;i++)
	 for(j=0;j<n-i-1;j++)
	  if(p[j]>p[j+1])
	   {
	     t=p[j];
	     p[j]=p[j+1];
	     p[j+1]=t;
	   }
	printf("sorted lists: \n");
	for(i=0;i<n;i++)
	 printf("%d ",*(p+i));
	printf("\nenter element to search in your list: ");
	 scanf("%d",&n1);
	m=(s+e)/2;
	while(s<=e)
	  {
	    if(n1<p[m])
	       e=m-1;
	    else
	       s=m+1;
	      m=(s+e)/2;
	   }
	 if(p[m]==n1)
	   printf("ur element at location: %u,%u",m+1,p+m);
	 else
	   printf("element not found");
getch();
}
