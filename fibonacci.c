#include <stdio.h>

int main(){
	// Fibonacci Sequence
	// 0, 1, 1, 2, 3, 5, 8, 13, 21, 55...
	int a = 0;
	int b = 1;
	int c;
	for(int i = 0; i < 20; i++){
		c = a;
		printf("%d\n", c);
		a = b;
		b = c + a;
	}
	return 0;
}
