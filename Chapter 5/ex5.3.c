#include <stdio.h>
#include <math.h>


int main (int argc, char* argv[])
{
	//gcc -Wall -o  exec ex5.3.c -lm; ./exec;
	printf("Enter base then space then exponent:");
	int base, exponent;
	if (scanf("%d %d", &base, &exponent) != 2)
		printf("Invalid input, cya.");
	else
		printf("Answer: %.2lf\n", pow(base, exponent));
	return 0;
}
