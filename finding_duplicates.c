#include <stdio.h>
#include <stdlib.h>

void finding_and_counting_duplicates_in_sorted_array(int A[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            j=i+1;
            while(A[j]==A[i]) j++;
            printf("%d is appearing %d times \n", A[i],j-i);
            i=j-1;
        }
    }
}

void finding_and_counting_duplicates_in_sortedorunsorted_array_using_hashing(int A[],int H[],int n,int h)
{
    int i;
    for(i=0;i<n;i++)   //for storing count in hashtable
        H[A[i]]++;

    for(i=0;i<=h;i++)
    {
        if(H[i]>1)
            printf("%d is repeated %d times \n",i,H[i]);
    }
}

void finding_and_counting_duplicates_in_unsorted_array(int A[],int n)
{
    int count,i,j;
    for (i=0;i<n-1;i++)
    {
        count =1;
        if(A[i]!= -1)
        {
            for(j=i+1;j<n;j++)
            {
                if(A[i]==A[j])
                {
                    count ++;
                    A[j]=-1;
                }
            }
        }
        if(count >1)
            printf("%d is appearing %d times\n",A[i],count);
    }
}

int main()
{
    int A[10]={3,2,2,7,10,16,12,15,15,20};
    int n = 10,h=20;
    int H[21]={0};
    //finding_and_counting_duplicates_in_sortedorunsorted_array_using_hashing(A,H,n,h);
    finding_and_counting_duplicates_in_unsorted_array(A,n);
    return 0;
}
