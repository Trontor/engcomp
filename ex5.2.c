#include <stdio.h>

int max_2_ints(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int max_4_ints(int a, int b, int c, int d)
{
	return max_2_ints(max_2_ints(a,b), max_2_ints(c,d));
}


int main (int argc, char* argv[])
{
	//Not really solid, haven't checked for a == b.
	printf("Enter your four integers separated by space:");
	int a, b, c, d;
	if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4)
		printf("Invalid input, cya.");
	else
		printf("%d is the largest number.\n", max_4_ints(a,b,c,d));
	return 0;
}
