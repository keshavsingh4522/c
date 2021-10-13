#include <stdio.h>
#include <string.h>

reverseStr(){
    char string[100];
    char outStr[100];
    printf("Enter a string: ");
    scanf("%s", &string);
    for(int i = 99; i >= 0; i-- ){
        for(int j = 0; j <=99; j ++){
            outStr[j] = string[i];
        }
    }
    printf("reversed: %s", outStr);
}

int main() {
    reverseStr();
    return 0;
}