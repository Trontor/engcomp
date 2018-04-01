#include <stdio.h>
#include <stdlib.h>

#define READ_OK 0
#define READ_ERROR 1

int read_num(int lo, int hi, int *num);

void int_sort2(int* p1, int* p2);

int main(int argc, char* argv[])
{
	printf("Enter your limits seperated by a space: ");
	int lowerLim, higherLim;
	if (scanf("%d %d", &lowerLim, &higherLim) == 2)
	{
		int_sort2(&lowerLim, &higherLim);
		int value;
		if (read_num(lowerLim, higherLim, &value) != READ_OK)
		{
			printf("Read error, program abort!\n");
			exit(EXIT_FAILURE);
		}
		printf("Wow, you entered a number within the limits! Number %d!\n", value);
	}
	exit(0);
}

void int_sort2(int* p1, int* p2)
{
	if (*p2 > *p1)
		return;
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int read_num(int lo, int hi, int *num)
{
	int next;
	printf("Enter a number between %d and %d inclusive: ", lo, hi);
	while (scanf("%d", &next) == 1)
	{
		if (lo <= next && next <= hi)
		{
			*num = next;
			return READ_OK;
		}
		printf("%d is not between %d and %d\nTry again: ", next, lo, hi);
	}
	return READ_ERROR;
}
