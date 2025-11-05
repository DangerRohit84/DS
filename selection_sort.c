// selection sort
#include <stdio.h>
// helper function to print array
void print_array(int A[], int n)
{
	for (int i = 0; i < n; i++) printf("%d ", A[i]);
	printf("\n");
}
void selection_sort(int A[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[min_index]) min_index = j;
		}
		// swapping A[i] and A[min_index]
		int temp = A[i];
		A[i] = A[min_index];
		A[min_index] = temp;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);	
	}
	printf("Before Sorting: ");
	print_array(A, n);
	// Selection sort function call
	selection_sort(A, n);
	printf("After sorting: ");
	print_array(A, n);
	
}