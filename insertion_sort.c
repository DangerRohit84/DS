// Insertion Sort
#include <stdio.h>
// helper function to print the array
void print_array(int A[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}
void insertion_sort(int A[], int n) {
	for (int i = 1; i < n; i++) {
		int key = A[i], j = i - 1;
		while (j >= 0 && key < A[j]) {
			// Shift the element to right to make space
			A[j + 1] = A[j];
			// Decrement j to keep on comparing with elements on left
			j--;	
		}
		A[j + 1] = key;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	printf("Before Sorting: ");
	print_array(A, n);
	// Your sort function call goes here
	insertion_sort(A, n);
	printf("After Sorting: ");
	print_array(A, n);
	return 0;
}	