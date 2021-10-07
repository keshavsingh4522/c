#include <stdio.h>
#include <stdlib.h>


// structure for binary tree node
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};


// function to create a new node from Node structure.
struct Node* newNode(int val){
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = val;
	node->left = NULL;
	node->right = NULL;

	return node;
}


// function to create BST from a sorted array
struct Node* createBST(int arr[], int l, int r){
	if(l > r)
		return NULL;

	int mid = (l+r)/2;
	struct Node *root = newNode(arr[mid]);
	// construct left subtree
	root->left = createBST(arr,l,mid-1);
	// construct right subtree
	root->right = createBST(arr,mid+1,r);

	return root;
}


// utility function to print preorder traversal of BST
void preorder(struct Node* root){
	if(root == NULL)
		return;

	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}


// utility function to print postorder traversal of BST
void postorder(struct Node* root){
	if(root == NULL)
		return;

	preorder(root->left);
	preorder(root->right);
	printf("%d ",root->data);
}


int main(){
	int size;
	printf("Enter the number of elements of array: ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements of the sorted array: ");
	for(int i=0;i< size;i++){
		scanf("%d",&arr[i]);
	}

	
	struct Node *root = createBST(arr,0,size-1);

	printf("PreOrder traversal of BST: \n");
	preorder(root);
	printf("\n");

	printf("PostOrder traversal of BST: \n");
	postorder(root);
	printf("\n");

	return 0;
}
