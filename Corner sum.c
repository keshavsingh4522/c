#include <stdio.h>
#include <string.h>
int CornerSum(int r,int c){
    int matrix[100][100];
    int s;
    s=0;
    printf("Enter the elements: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    s=matrix[0][0] + matrix[0][c-1] + matrix[r-1][0] + matrix[r-1][c-1];
    return s;
}
int main(){
    int rows,col,sum;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    sum = CornerSum(rows,col);
    printf("Sum of corner elements is: %d",sum);
}

