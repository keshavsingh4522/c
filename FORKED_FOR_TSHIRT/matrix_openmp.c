//Program for matrix multiplication using OpenMp

#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

#define MAX_SIZE 1024

long int MatA[MAX_SIZE][MAX_SIZE], MatB[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
int i,j,k, num_threads;

int main(int args, char *argv[]){
	if(args < 2){
		printf("Enter the correct arguments !\n");
		exit(1);
	}
	num_threads = atoi(argv[1]);
	printf("No of Threads : %d\n", num_threads);
	for(i = 0; i < MAX_SIZE; i++){
		for(j = 0; j < MAX_SIZE; j++){
			MatA[i][j] = i + j;
			MatB[i][j] = i - j;
		}
	}
	
	omp_set_num_threads(num_threads);
	
	#pragma omp parallel shared (MatA, MatB, result) private(i, j, k)
	{
		#pragma omp for
		for(i = 0; i < MAX_SIZE; i++){
			for(j = 0; j < MAX_SIZE; j++){
				result[i][j] += MatA[i][k] * MatB[k][j];
			}
		}
	}
	return 0;
}
