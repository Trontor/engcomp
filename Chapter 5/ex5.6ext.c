#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorSum(int num)
{
	int counter = 1;
	for (int i = 2; i < sqrt(num); i++)
		if (num % i == 0)
			counter += i + num/i;
	return counter;
}

int isAmicablePair(int a, int b)
{
	return factorSum(a) == b && factorSum(b) == a;
}

int main(int argc, char* argv[])
{
	printf("Welcome, let's try finding some amicable pairs.\n");
	printf("Do you want to restrict the number of pairs found? (Y/N): ");
	char c;
	scanf("%c", &c);
	int n = -1;
	if (c == 'Y')
	{
		do
		{
			printf("How many pairs do you want to find?(>0): ");
			scanf("%d", &n);
		}
		while (n < 1);
	}
	int a = 1;
	int counter = 0;
	while (1 == 1)
	{
		int facSum = factorSum(a);
		if (facSum != a && isAmicablePair(a, facSum) && a < facSum)
		{
			printf("%d and %d are amicable.\n", a, facSum);
			counter++;
		}
		if (n > 0 && counter == n)
			break;
		a++;
	}
	exit(0);
}
