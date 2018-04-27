#include <stdio.h>
#include "arraytools.h"
/* Note, saving ex7.3.c as a .h file is technically a better way to do
   this */

#define MAXVAL 1000

int main(int argc, char* argv[]) {
	printf("Enter values, ^D to terminate:\n");
	int A[MAXVAL], next, counter = 0;
	while (scanf(" %d", &next) == 1) {

		A[counter++] = next;
	}

	/* For some reason, scanf() runs erroneously and terminates if I don't
	   fflush the standard input stream */
	fflush(stdin);
	sort_int_array(A, counter);
	int newCount = remove_duplicates(A, counter);
	printf("\nFind the k'th smallest element  (1 <= k <= %d):", newCount);
	int k = -1;
	while (scanf("%d", &k) == 1) {
		if (k > newCount || k <= 0) {
			printf("Nope, can't do that. Read: 0 < k < %d\n", newCount + 1);
		} else {
			int kth = A[k - 1];
			printf("The smallest element (for k = %d) is %d\n", k, kth);
		}
		printf("Find the k'th smallest element  (1 <= k <= %d):", newCount);
	}
}

/* Problem specification says 'the array A may not be modified'.
   I'm not too sure what that really means. I'm assuming 'sorting'
   doesn't modify the array (as a whole), so ex7.3 is directly related.

   Selection sort operates in-place (without help from a temp array).
   Quickselect (based off quicksort) is an efficient algorithm that will achieve
   this task in O(n) time, but it seems too extra for this chapter.
 */
