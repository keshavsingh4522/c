#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>


// structure for tree / node
struct tree {
	int data;
	struct tree *left;
	struct tree *right;
	struct tree *parent;
};


// function for creating a new node of tree
struct tree* create(int value){
	struct tree *ptr = (struct tree*)calloc(1,sizeof(struct tree));
	ptr->data = value;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->parent = NULL;
	return ptr;
}



// utility function to swap two numbers.
void swap(int *x, int *y){
	int temp;
	temp = *x; *x = *y; *y = temp;
}


// utility function to sort the elements of an array
int* bubble_sort(int *arr, int size){
	for(int i=0;i<size-1;i++){
		for(int j=1;j<=size-1-i;j++){
			if(arr[j-1] > arr[j])
				swap(&arr[j-1], &arr[j]);
		}
	}
	return arr;
}



// utility function to print an array (for debugging)
void print_array(int *arr, int size){
	printf("Elements of array are :");

	for(int i=0;i<size;i++)
		printf(" %d",arr[i]);
	printf("\n");
}



// function for preorder traversal of tree
void preorder(struct tree *root){
	if(root == NULL)
		return;

	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}



// function for recursively insert nodes into BST
struct tree* insert_bst(struct tree *root,int key){
	if(root==NULL){
		struct tree *ptr=create(key);
		root = ptr;
		return root;
	}

	// insert in left sub-tree
	else if(root->data > key){
		root->left=insert_bst(root->left,key);
		root->left->parent = root;
	}

	// insert in right sub-tree
	else if(root->data < key){
		root->right=insert_bst(root->right,key);
		root->right->parent = root;
	}
	return root;
}



// function for creating minimum depth BST from given elements
struct tree* min_heightBST(struct tree *root, int* arr, int size){

	int *sorted_arr = bubble_sort(arr,size);
	//print_array(sorted_arr, size);

	for(int i=0;i<size;i++)
		root = insert_bst(root, sorted_arr[i]);

	return root;
}



// function for creating maximum depth BST from given elements
struct tree* max_heightBST(struct tree *root, int *arr, int start, int end){
	if(start > end)
		return NULL;

	int mid = (end + start)/2;
	root = insert_bst(root,arr[mid]);

	root->left = max_heightBST(root->left,arr,start,mid-1);
	root->right = max_heightBST(root->right,arr,mid+1,end);

	return root;
}




int main(){
	// create two empty trees
	struct tree *min_bst = NULL;
	struct tree *max_bst = NULL;

	int n;
	printf("Enter the number of elements for tree : ");
	scanf("%d",&n);

	int *array = (int*)calloc(n, sizeof(int));
	printf("\nEnter the elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);

	printf("1. Create BST of minimum height.\n2. Create BST of maximum height.\n");
	int choice;
	printf("-------------------------------------------------------\nEnter your choice : ");
	scanf("%d",&choice);


	switch(choice){
		case 1: //---------create BST of minimum height from n nodes-----------------
		{
			min_bst = min_heightBST(min_bst,array,n);
			printf("Preorder traversal of created BST: \n");
			preorder(min_bst);
			printf("\n");
			break;
		}
		case 2: //------ create BST of maximum height from given n nodes-----------
		{
			int *sorted_arr = bubble_sort(array,n);
			max_bst = max_heightBST(max_bst,sorted_arr,0,n-1);
			printf("Preorder traversal of created BST: \n");
			preorder(max_bst);
			printf("\n");
			break;
		}
	}

	return 0;
}