#include<stdio.h>
#include<stdlib.h>
#include<limits.h>



void activity_select(int*, int*, int, int);


// utility function to swap two numbers
void swap(int* a, int* b){
	int temp;
	temp = *a; *a = *b; *b = temp;
}


// utility function to sort an array of elements
void sort(int* start, int* end, int size){
	for(int i=0;i<size;i++){
		for(int j=0;j< (size-i-1);j++){
			if(end[j] > end[j+1]){
				swap(&end[j], &end[j+1]);
				swap(&start[j], &start[j+1]);
			}
		}
	}
}

int main(){
	int n;
	printf("Enter the number of activities : ");
	scanf("%d",&n);

	int* start_time = (int*)calloc(n, sizeof(int));
	printf("Enter starting time of every activity : ");
	for(int i=0;i<n;i++)
		scanf("%d",&start_time[i]);

	int* end_time = (int*)calloc(n, sizeof(int));
	printf("Enter finishing time of every activity : ");
	for(int i=0;i<n;i++)
		scanf("%d",&end_time[i]);

	activity_select(start_time, end_time, 0, n);
}



// function to select maximum activities that can be performed without collision
void activity_select(int* initial, int* final, int x, int y){
	// sort based on final time of activities
	sort(initial, final, y);

	
	printf("Activities which can be performed are -- ");
	int i=0;
	int count = 1;
	printf("%d ",i+1);
	for(int j=1;j<y;j++){
		// If this activity has start time greater than or equal to the finish time of previously selected activity, then select it.
		if(final[i] <= initial[j]){
			printf("%d ",j+1);
			count++;
			i = j;
		}
	}
	printf("\nSo total activities that can be performed are %d\n",count);

}
