#include <stdio.h>

#define MAX_VALUE 1000

void print_int_array(int A[], int n);

int main(int argc, char* argv[]) {
	printf("Enter as many as %d values, ^D to end:", MAX_VALUE);
	int readArray[MAX_VALUE], frequency[MAX_VALUE], next, counter = 0;
	while (scanf("%d", &next)) {
		int foundVal = 0;
		for (int i = 0; i < counter; i++) {
			if (readArray[i] == next) {
				foundVal = 1;
				frequency[i]++;
			}
		}
		if (!foundVal) {
			readArray[counter] = next;
			frequency[counter] = 1;
			counter++;
		}
	}
	printf("Value\tFreq.\n");
	for (int i = 0; i < counter; i++)
		if (frequency[i] != 0)
			printf("%4d\t%4d\n", readArray[i], frequency[i]);
}

void
print_int_array(int A[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%4d", A[i]);
	}
	printf("\n");
}
