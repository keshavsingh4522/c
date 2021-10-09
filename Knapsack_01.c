
#include <stdio.h>
#include <stdlib.h>


// utility function to find maximum of two values
int max(int a, int b){
	if(a > b)
		return a;
	return b;
}



// function to find maximum value of knapsack that theif can take.
int knapSack(int value[], int weight[], int constraint, int size){

	// construct matrix corresponding to each weight and weight that can be placed in bag
	// as column and rows resp.
	int fill[size+1][constraint+1];

	for(int i=0;i <= size;i++){
		for(int j=0;j<= constraint;j++){
			if(i==0 || j == 0)
				fill[i][j] = 0;
			else if(weight[i-1] <= j)
				fill[i][j] = max(value[i-1] + fill[i-1][j-weight[i-1]], fill[i-1][j]);
			else
				fill[i][j] = fill[i-1][j];
		}
	}

	return fill[size][constraint];
}




int main(){
	int n;
	printf("Enter number of items: ");
	scanf("%d",&n);

	int value[n], weight[n], constraint;
	printf("Enter values of items: " );
	for(int i=0;i<n;i++){
		scanf("%d",&value[i]);
	}

	printf("Enter weights of items: " );
	for(int i=0;i<n;i++){
		scanf("%d",&weight[i]);
	}

	printf("Enter weight constraint for the bag: ");
	scanf("%d",&constraint);

	printf("\nMaximum value of knapsack is %d\n",knapSack(value, weight, constraint, n));

	return 0;
}