#include <stdio.h>

double sum_sequence(int n);
int recursive_sum(int n);
double factorial(int n);

int main(int argc, char* argv[])
{
	for (int i = 1; i < 15; i++)
	{
		printf("Sum sequence (n = %d) is %lf\n", i, sum_sequence(i));
	}
	return 0;
}

int recursive_sum(int n)
{
	if (n == 0)
		return 0;
	return n + recursive_sum(n-1);
}

double sum_sequence(int n)
{
	if (n == 1)
		return 1;
	return recursive_sum(n)/factorial(n) + sum_sequence(n-1);
}

double factorial(int n)
{
	if (n == 1)
		return 1;
	return n * factorial(n-1);
}

