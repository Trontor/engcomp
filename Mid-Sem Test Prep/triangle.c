#include <stdio.h>
#include <stdlib.h>

// Completed second try (syntax errors first try)

int main(int argc, char* argv[]) {
	printf("Enter a number: ");
	int n;
	if (scanf("%d", &n) != 1 || n < 0) {
		printf("Error reading value!\n");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < n; i++) {
		int charIndex = n-1-i;
		for (int j = 0; j < n; j++) {
			if (j < charIndex) {
				printf(" ");
			} else {
				printf("X");
			}
		}
		printf("\n");
	}
	return 0;
}
