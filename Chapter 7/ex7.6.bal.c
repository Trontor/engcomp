#include <stdio.h>

#define MAXVAL 1000

void selection_sort();
void int_swap();
void recursive_selection_sort();
int main(int argc, char* argv[])
{
	int Arr[MAXVAL];
	printf("Enter up to %d integers seperated by a space:", MAXVAL);
	int index = -1, value = 0;
	while (scanf("%d", &value) == 1 && index < MAXVAL)
	{
		index++;
		Arr[index] = value;
	}
	/*recursive_*/ selection_sort(Arr, index /*, 0*/);
	printf("\nSorted Array: ");
	for (int i = 0; i <= index; i++)
		printf("%d ", Arr[i]);
	printf("\n");
	return 0;
}

void selection_sort(int A[], int n)
{
	for (int i = n; i >= 0; i--)
	{
		int min = i;
		for (int j = 0; j < i; j++)
			if (A[j] > A[min])
				min = j;
		int_swap(&A[i], &A[min]);
	}
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

void int_swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
