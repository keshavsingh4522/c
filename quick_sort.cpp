#include"conio.h"
#include"stdio.h"
#include"stdlib.h"
void quick_sort(int a[],int first,int last)
{
   int temp,low,high,pivot;
   low=first;
   high=last;
   pivot=a[(last+first)/2];
   do
   {
     while(a[low]<pivot)
      low++;
      while(a[high]>pivot)
       high--;
       if(low<=high)
	{
	 temp=a[low];
	 a[low++]=a[high];
	 a[high--]=temp;
	}
   } while(low<=high);
 if(first<high)
 quick_sort(a,first,high);
 for(i=0;i<high;i++)
  printf("%d ",a[i]);
 if(low<last)
 quick_sort(a,low,last);
}
void main()
{
clrscr();
	      int a[50],i;
	       printf("unsorted list is: \n");
	       randomize();
	       for(i=0;i<20;i++)
	       {
	       a[i]=rand()%100;
	       printf("%d ",a[i]);
	       }
	       printf("\nstep involve in quick sorting\n");
	      quick_sort(a,0,19);
	      printf("\nsorted list is\n");
	      for(i=0;i<19;i++)
	      printf("%d ",a[i]);
getch();
}
