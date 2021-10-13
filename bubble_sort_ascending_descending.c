#include <stdio.h>

int main() {
    int arr[100], tempVar, n, ascDes;

    printf("How many elements are there: ");
    scanf("%d", &n);

    printf("Enter the elements of your array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Press:\n 1 for Ascending sort\n 2 for Descending sort: ");
    scanf("%d", &ascDes);

    for(int j = 0; j < (n-1); j++){
        for(int i = 0; i < (n-1); i++){
            if(ascDes == 1){
                if(arr[i] > arr[i+1]){
                    tempVar = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tempVar;
                }
            } else if(ascDes == 2){
                 if(arr[i] < arr[i+1]){
                    tempVar = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tempVar;
                }
            }
        }
    }

    printf("Output: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}