#include <stdio.h>
#include <stdlib.h>

void int_sort2(int *p1, int *p2);
void int_sort3(int* p1, int* p2, int* p3);

int main(int argc, char* argv[])
{
	int x, y, z;
	x = 5;
	y = 4;
	z = 3;
	printf("Value for x = %d, y = %d, z = %d.\n", x, y, z);
	int_sort3(&x, &y, &z);
	printf("Value for x = %d, y = %d, z = %d.\n", x, y, z);
}

void int_sort2(int* p1, int* p2)
{
	if (*p2 > *p1)
		return;
	printf("Received arguments p1 = %p, p2 = %p.\n", p1, p2);
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void int_sort3(int* p1, int* p2, int* p3)
{
	if (*p1 > *p2)
		int_sort2(p1, p2);
	if (*p1 > *p3)
		int_sort2(p1, p3);
	if (*p2 > *p3)
		int_sort2(p2, p3);
}
