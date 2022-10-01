// C++ code to find
// duplicates in O(n) time

#include <stdio.h>

int main()
{

	int numRay[] = {1,2,3,4,5,6,7 };
	int arr_size = sizeof(numRay) / sizeof(numRay[0]);
	
	
	// count the frequency
	for (int i = 0; i < arr_size; i++) {
		numRay[numRay[i] % arr_size]
			= numRay[numRay[i] % arr_size] + arr_size;
	}
	printf("The repeating elements are : \n");
	for (int i = 0; i < arr_size; i++) {
		if (numRay[i] >= arr_size * 2) {
			printf("%d \n", i );
		}
	}
	return 0;
}

