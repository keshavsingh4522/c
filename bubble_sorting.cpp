#include"conio.h"
#include"stdio.h"
#include"alloc.h"

void main()
{
	clrscr();
	
	int i, j, k, n, *p, t;
	
	printf("enter no of elements of array: ");	//taking input for size of array
	scanf("%d",&n);
	
	p=(int *)malloc(sizeof(int)*n);		//allocating memory to the array using dynamic memory allocation 
	
	printf("enter %d elements: ",n);	
	for(i=0;i<n;i++)			//taking inputs of element
	 scanf("%d",p+i);
	
	for(i=0;i<n;i++)
	{ 	int swapping = 0;
		for(j=0;j<n-i-1;j++)
	     	if(p[j]>p[j+1])
	        {  
			t=p[j];
	       		p[j]=p[j+1];
	       		p[j+1]=t;
			swapping = 1;
		 }
		
	         for(k=0;k<n;k++)
	       		printf("%d ",p[k]);	//displaying array after each sort
	         printf("\n");
	 
	 	 if(swapping = 0)		//exiting the loop on finding the array sorted as there is no swapping
			 break;
	}
	
	printf("after bubble sorting: \n");
	for(i=0;i<n;i++)			//printing the array after sorting
		printf("%d\t",*(p+i));		
	getch();
}
