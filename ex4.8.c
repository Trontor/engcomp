#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("Enter a value for n_max:");
	int n_max, maxSeed, maxCycles;
	scanf("%d", &n_max);
	maxCycles = 0;
	printf("\nDo you wish to see a step-by-step analysis for each seed? (Y/N):");
	char c;
	scanf(" %c", &c);
	if (c == 'Y')
	{
		printf("\nStarting analysis for 0 < n < %d. Brace yourselves.", n_max);
	}
	for (int i = 1; i < n_max; i++)
	{
		int n = i;
		int cycles = 0;
		while (n > 1)
		{
			if (n % 2 == 0)
				n = n/2;
			else
				n = 3 * n + 1;
			cycles++;
		}
		if (c == 'Y')
		{
			printf("\nSeed of %d gives rise to %d cycles.", i, cycles);
		}
		if (cycles > maxCycles)
		{
			maxCycles = cycles;
			maxSeed = i;
		}
	}
	printf("\nThe longest cycle generated was %d cycles long.", maxCycles);
	printf("\nIt had a seed value of %d.\n", maxSeed);
	return 0;
}
