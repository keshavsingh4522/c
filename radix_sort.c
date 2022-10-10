// C++ program for the implementation
// of MSD Radix Sort using linked list
#include <iostream>
#include <vector>

using namespace std;

// Linked list node structure
struct node {
	vector<int> arr;
	struct node* nxt[10];
};

// Function to create a new node of
// the Linked List
struct node* new_node(void)
{
	struct node* tempNode = new node;

	for (int i = 0; i < 10; i++) {
		tempNode->nxt[i] = NULL;
	}

	// Return the created node
	return tempNode;
}

// Function to sort the given array
// using MSD Radix Sort recursively
void msd_sort(struct node* root, int exp,
			vector<int>& sorted_arr)
{
	if (exp <= 0) {
		return;
	}

	int j;

	// Stores the numbers in different
	// buckets according their MSD
	for (int i = 0;
		i < root->arr.size();
		i++) {

		// Get the MSD in j
		j = (root->arr[i] / exp) % 10;

		// If j-th index in the node
		// array is empty create and
		// link a new node in index
		if (root->nxt[j] == NULL) {
			root->nxt[j] = new_node();
		}

		// Store the number in j-th node
		root->nxt[j]->arr.push_back(
			root->arr[i]);
	}

	// Sort again every child node that
	// has more than one number
	for (int i = 0; i < 10; i++) {

		// If root->next is NULL
		if (root->nxt[i] != NULL) {

			if (root->nxt[i]->arr.size()
				> 1) {

				// Sort recursively
				msd_sort(root->nxt[i],
						exp / 10,
						sorted_arr);
			}

			// If any node have only
			// one number then it means
			// the number is sorted
			else {
				sorted_arr.push_back(
					root->nxt[i]->arr[0]);
			}
		}
	}
}

// Function to calculate the MSD of the
// maximum value in the array
int get_max_exp(vector<int> arr)
{
	// Stores the maximum element
	int mx = arr[0];

	// Traverse the given array
	for (int i = 1; i < arr.size(); i++) {

		// Update the value of maximum
		if (arr[i] > mx) {
			mx = arr[i];
		}
	}

	int exp = 1;

	while (mx > 10) {
		mx /= 10;
		exp *= 10;
	}

	// Return the resultant value
	return exp;
}

// Function to print an array
void print(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";

	cout << endl;
}

// Driver Code
int main()
{
	// create the root node
	struct node* root = new_node();

	// Stores the unsorted array
	// in the root node
	root->arr.insert(root->arr.end(),
					{ 9330, 9950, 718,
					8977, 6790, 95,
					9807, 741, 8586,
					5710 });

	cout << "Unsorted array : ";

	// Print the unsorted array
	print(root->arr);

	// Find the optimal longest exponent
	int exp = get_max_exp(root->arr);

	// Stores the sorted numbers
	vector<int> sorted_arr;

	// Function Call
	msd_sort(root, exp, sorted_arr);

	cout << "Sorted array : ";

	// Print the sorted array
	print(sorted_arr);

	return 0;
}
