#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
int main()
{
    int arr[6][6];
    char start = 1;
    int sum = 0;
    int temp = 0;
    int sum_prev = 0;
    int y_index = 0;
    //Taking Array Input.
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
            scanf("%d",&arr[i][j]);
    }
    for(y_index=0; y_index<4; y_index++)
    {
        for(start=0; start<=3; start++)
        {
            sum = 0;
            for(int i=start; i<start+3; i++)
            {
                sum += arr[y_index][i];
            }
            sum += arr[y_index+1][start+1];
            for(int i=start; i<start+3; i++)
            {
                sum += arr[y_index+2][i];
            }
            if(temp)
            {
                if(sum_prev < sum)
                {
                    sum_prev = sum;
                }
            }
            else
            {
                temp = 1;
                sum_prev = sum;
            }
        }
    }
    printf("%d",sum_prev);
}
