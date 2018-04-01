#include <stdio.h>

int max_2_ints(int a, int b)
{
	if (a > b)
		return a > b;
	return b;
}

int main (int argc, char* argv[])
{
	 //Not really solid, haven't checked for a == b.
	printf("Enter your two integers separated by space:");
	int a, b;
	if (scanf("%d %d", &a, &b) != 2)
		printf("Invalid input, cya.");
	else
		printf("%d is the bigger number.\n", max_2_ints(a,b));
	return 0;
}
