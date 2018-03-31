#include <stdio.h>

int factorial(int num)
{
	if (num == 1)
		return 1;
	return num * factorial(num-1);
}

int choose_k(int n, int k)
{
	return factorial(n)/((factorial(n-k) * factorial(k)));
}

int main(int argc, char* argv[])
{
	int n, k;
	printf("Enter n then space then k: ");
	if (scanf("%d %d", &n, &k) != 2)
	{
		printf("Invalid Input, cya.\n");
		return 0;
	}
	printf("There are %d ways to select a %d item subset of %d distinct items.\n",
	       choose_k(n,k), k, n);
	return 0;
}
