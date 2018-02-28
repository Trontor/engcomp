#include <stdio.h>

void int_swap();

int main(int argc, char* argv[])
{
	int x, *pi;
	static int stat;
	printf("The memory address for var is: %p.\n", &x);
	printf("The memory address for static variable stat is: %p.\n", &stat);
	x = 1;
	pi = &x;
	*pi += 1;
	printf("I used pointers to increment the variable of x to: %d\n", *pi);
	x = 1;
	int y = 2;
	printf("Using pointers I swapped the value of x = %d and y = %d,", x, y);
	
	int_swap(&x, &y);
	
	printf(" to x = %d and y = %d.\n", x, y);
	
	return 0;
}

void int_swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
