#include<stdio.h>

int main()
{
    int arr1[20],arr2[20];
    int n=0;
    int *ptr1;
    ptr1=&arr1[0];//ptr=arr;

    printf("\nEnter number of elements\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",ptr1);
        ptr1++;
    }


    ptr1=&arr1[0];

    for(int i=0; i<n; i++)
    {
        printf("I arr1[%d] =%d \n",i,*ptr1);
        ptr1++;
    }

    ptr1=&arr1[0];

    printf("\n\n");
    for(int i=0; i<n; i++)
    {
        arr2[i]=*ptr1;
        printf("II arr2[%d] =%d \n",i,arr2[i]);

        ptr1++;
    }

    return 0;
}
