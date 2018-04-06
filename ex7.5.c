#include <stdio.h>
#define MAXVAL 1000

/* Example Input
   823678 66
   765876 94
   864876 48
   785671 68
   854565 89
 */

void int_swap(int *p1, int *p2) {
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void sort_int_array_parallel(int A[], int B[], int n) {
	int i, j;
	/* assume that A[0] to A[n-1] have valid values */
	for (i=1; i<n; i++) {
		/* swap A[i] left into correct position */
		for (j=i-1; j>=0 && A[j+1]<A[j]; j--) {
			/* not there yet */
			int_swap(&A[j], &A[j+1]);
			int_swap(&B[j], &B[j+1]);
		}
	}
	/* and that's all there is to it! */
}

void print_int_array(int A[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main(int argc, char* argv[]) {
	int item = 0, next, counter = 0, studentID[MAXVAL], mark[MAXVAL];
	printf("Enter Student ID, Mark pairs:\n");
	FILE* f = stdin;
	while (scanf(" %d", &next) == 1) {
		if (!item) {
			studentID[counter] = next;
		} else {
			mark[counter++] = next;
		}
		item = !item;
	}
	sort_int_array_parallel(studentID, mark, counter);
	printf("ID\tMark.\n");
	for (int i = 0; i < counter; i++)
		if (studentID[i] != 0)
			printf("%6d\t%2d\n", studentID[i], mark[i]);

}
