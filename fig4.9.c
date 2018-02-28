#include <stdio.h>
#define PERLINE 8
int main(int argc, char* argv[])
{
	printf("Enter a value for n:");
	int n;
	scanf("%d", &n);
	int max = n;
	int cycles = 0;
	while (n > 1)
	{
		printf("%5d ", n);
		if (n % 2 == 0)
			n = n/2;
		else
			n = 3 * n + 1;
		if (n > max)
			max = n;
		cycles++;
		if (cycles % PERLINE == 0)
		{
			printf("\n");
		}
	}
	printf("\n%d cycles consumed, maximum was %d\n", cycles, max);
	return 0;
}
