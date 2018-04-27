#include <stdio.h>

#define MAXVAL 1000
int all_zero(int A[], int n);

int main(int argc, char* argv[])
{
	printf("Enter an arbritary array of zeroes (<1000), if you be cheeky I'll find out:"); 
	int counter, value, A[MAXVAL];
	counter = 0;	
	while (scanf("%d", &value) == 1)
	{
		A[counter] = value;
		counter += 1;
	}
	printf("\nHmmm. Let me check...\n");
	if (all_zero(A, counter) == 0)
		printf("You're cheeky!\n");
	else printf("You're obedient.");
	return 0;
}

int all_zero(int A[], int n)
{
	for (int i = 0; i <= n; i++)
		if (A[i] != 0)	
			return 0;
	return 1;
}
