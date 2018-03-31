#include <stdio.h>

int int_pow_itr(int base, int exponent)
{
	int res = base;
	for (int i = 1; i < exponent; i++)
		res *= base;
	return res;
}

int int_pow_rec(int base, int exponent)
{
	// Support for negative exponents can be easily extended, trivial - left to reader xP
	if (exponent <= 1)
		return base;
	return base * int_pow_rec(base, exponent - 1);
}

int main(int argc, char* argv[])
{
	printf("Enter base then space then exponent: ");
	int base, exponent;
	while (scanf("%d %d", &base, &exponent) == 2)
	{
		printf("Ans (iterative method): %d\nAns (recursive method): %d\n",
		       int_pow_itr(base, exponent), int_pow_rec(base, exponent));
		printf("Enter base then space then exponent: ");
	}
	return 0;
}
