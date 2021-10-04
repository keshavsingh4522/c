#include <stdio.h>
int main() {

  int j, t;
  int n1 = 0, n2 = 1;
  int nextnum = n1 + n2;

  printf("Enter the number of terms: ");
  scanf("%d", &t);

  printf("%d,%d", n1, n2);

  for (j = 3; j <= t; ++j) {
    printf(" ,%d",nextnum);
    n1 = n2;
    n2 = nextnum;
    nextnum = n1 + n2;
  }

  return 0;
}

//Enter the number of terms: 10
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34
