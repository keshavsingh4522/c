#include<stdio.h>
#include<stdlib.h>
#include<float.h>


// utility function to find maximum of two numbers
float max(float a, float b){
	if(a > b)
		return a;
	return b;
}


// recursive approach for rod cutting problem
float cutting_rod(float *array, int size){
	if(size == 0)
		return 0;
	float rev = FLT_MIN;
	// solve recursively using dynamic programming approach
	for(int i=0;i< size;i++){
		rev = max(rev, array[i] + cutting_rod(array,size-i-1));
	}
	//printf("%f\n",rev);
	return rev;
}

int main(){
	int n;
	printf("Enter the length of rod : ");
	scanf("%d",&n);

	float *arr = (float*)calloc(n,sizeof(float));
	printf("Enter elements of array containing price : ");
	for(int i=0;i < n;i++){
		scanf("%f",&arr[i]);
	}

	float max_revenue = cutting_rod(arr,n);
	printf("Maximum revenue by cutting and selling rod is Rs %.3f\n",max_revenue);
  
  return 0;
}
