#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertion_sort(int n, int nums[])
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key)
        {
            nums[j+1]=nums[j];
            j--;
            count++;
        }
        nums[j+1]=key;
    }
    printf("according to step count method, total steps are: %d\n", count);
}
int main()
{
    int n;
    printf("enter size: \n");
    scanf("%d",&n);
    int nums[n];

    printf("enter elements: \n");

    for(int i=0;i<n;i++)
    scanf("%d",&nums[i]);

    clock_t t=clock();
    insertion_sort(n,nums);
    t=clock()-t;
    double time=((double)t)/CLOCKS_PER_SEC;
    printf("insertion sort took %f seconds to execute \n",time);

    printf("show array after sorting:\n");

    for(int i=0;i<n;i++)
    printf("%d\t",nums[i]);

    return 0;
}
