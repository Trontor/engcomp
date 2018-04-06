#include <stdio.h>

#define MAXVAL 1000

int main(int argc, char* argv[]) {
	printf("Enter values, ^D to terminate:\n");
	int A[MAXVAL], next, counter = 0;
	while (scanf("%d", &next) == 1) {
		A[counter++] = next;
	}
	char c = getchar();
	printf("%d", c);
	printf("\nFind the k'th smallest element  (k < %d):", counter + 1);

}
