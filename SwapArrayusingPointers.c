#include<stdio.h>


void inputarr(int *ptr1,int n);

void printarr(int *ptr1,int n);

void swap(int *ptr1,int *ptr2,int n);

int main()
{
    int arr1[20],arr2[20];
    int n=0;

    printf("\nEnter number of elements you want to insert\n");
    scanf("%d",&n);

//scanning array
    printf("\nEnter %d elements in array-1\n",n);
    inputarr(arr1,n);

    printf("\nEnter %d elements in array-2\n",n);
    inputarr(arr2,n);

//printing array for before swap
    printf("\nPrinting Elements of Array-1 \n\n");
    printarr(arr1,n);

    printf("\n\nPrinting Elements of Array-2 \n\n");
    printarr(arr2,n);


    //swapping elements
    swap(arr1,arr2,n);

    printf("\n\nArray after Replacing Elements\n \n");


    //printing array for before swap
    printf("\nPrinting Elements of Array-1 \n\n");
    printarr(arr1,n);

    printf("\n\nPrinting Elements of Array-2 \n\n");
    printarr(arr2,n);

    return 0;
}


void inputarr(int *ptr1,int n)
{

    for(int i=0; i<n; i++)
    {
        scanf("%d",ptr1);
        ptr1++;
    }

}

void printarr(int *ptr1,int n)
{

    for(int i=0; i<n; i++)
    {
        printf("| %d |",*ptr1);
        ptr1++;
    }

}


void swap(int *ptr1,int *ptr2,int n)
{
    int temp=0;

    for(int i=0; i<n; i++)
    {
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2++;
    }




}

