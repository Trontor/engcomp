#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void int_divide(int numerator, int denominator, int *quotient, int *remainder);

int main(int argc, char* argv[])
{
	printf("Enter numerator then / then denominator: ");
	int num, den, quo, rem;
	while (scanf("%d/%d", &num, &den) == 2)
	{
		int_divide(num, den, &quo, &rem);
		printf("The quotient is %d with remainder %d.\n", quo, rem);
		printf("Feel free to enter another one:");
	}
	return 0;
}


void int_divide(int numerator, int denominator, int *quotient, int *remainder)
{
	*quotient = numerator/denominator;
	*remainder = numerator%denominator;
}
