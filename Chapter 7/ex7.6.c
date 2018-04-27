#include <stdio.h>

#define MAXVAL 1000

void int_swap(int* p1, int* p2);
void selection_sort(int A[], int n);
void print_int_array(int A[], int n);
void recursive_selection_sort(int A[], int n, int currentIndex);
int main(int argc, char* argv[]) {
	printf("Enter values, terminate with ^D:");
	int counter = 0, next, A[MAXVAL];
	while (scanf("%d", &next) == 1) {
		A[counter++] = next;
	}
	recursive_selection_sort(A, counter, 0);
	print_int_array(A, counter);
}

void recursive_selection_sort(int A[], int n, int currentIndex)
{
	if (currentIndex > n)
		return;
	int min = currentIndex;
	for (int i = currentIndex; i <= n; i++)
		if (A[i] < A[min])
			min = i;
	int_swap(&A[min], &A[currentIndex]);
	recursive_selection_sort(A, n, currentIndex + 1);
}

void selection_sort(int A[], int n) {
	for (int i = n; i >= 0; i--)
	{
		int max = i;
		for (int j = 0; j < i; j++) {
			if (A[j] > A[max]) {
				max = j;
			}
			int_swap(&A[i], &A[max]);
		}
	}
}

void print_int_array(int A[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void int_swap(int* p1, int* p2)  {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
