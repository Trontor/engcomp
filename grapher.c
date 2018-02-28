#include <stdio.h>

int main(int argc, char *argv[])
{
	int next;
	printf("Enter values, control-D to end: ");
	if (scanf("%d", &next) != 1)
	{
		printf("\nNo data entered, terminating.");	
		return 0;
	}
	do
	{
		printf("%2d |", next);
		for(int i = 0; i < next; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	while (scanf("%d", &next) == 1);
	return 0;
}
