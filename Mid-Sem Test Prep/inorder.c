#include <stdio.h>

// Completed first try

int main(int argc, char* argv[]) {
	int lastNumber, currentNumber;
	scanf("%d", &lastNumber);
	while (scanf("%d", &currentNumber) == 1) {
		if (currentNumber < lastNumber) {
			printf("*** value %d is smaller than %d\n", currentNumber, lastNumber);
		}
		lastNumber = currentNumber;
	}
}
