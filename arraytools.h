#include <stdio.h>

void
print_int_array(int A[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%4d", A[i]);
	}
	printf("\n");
}


/* exchange the values of the two variables indicated by the arguments */
void
int_swap(int *p1, int *p2) {
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

/* Returns the number of accessable elements */
int
remove_duplicates(int A[], int n) {
	/* i tracks the index of the main array */
	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] != A[i+1]) {
			A[counter++] = A[i];
		}
	}
	return counter;
}

void
sort_int_array(int A[], int n) {
	int i, j;
	/* assume that A[0] to A[n-1] have valid values */
	for (i=1; i<n; i++) {
		/* swap A[i] left into correct position */
		for (j=i-1; j>=0 && A[j+1]<A[j]; j--) {
			/* not there yet */
			int_swap(&A[j], &A[j+1]);
		}
	}
	/* and that's all there is to it! */
}
