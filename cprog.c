#include <stdio.h>

int fib(int n)
{	
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib (n - 2);
}

int main(int argc, char *argv[])
{
	int day = 1;
	int spores = 0;
	while(spores < 10000000)
	{
		spores = fib(day);
		printf("At the end of day %d there were %d spores!\n", day, fib(day));
		day++;
	}
}

