#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define CUBE_LOWER 1e-6
#define CUBE_UPPER 1e+6
#define CUBE_ITERATIONS 25 // Note, accuracy greatly improved for more iterations.

/* Return an approximate cube root calculated 
   by a converging iterative mechanism.*/
int near_equal(double x1, double x2)
{
	double diff = x2-x1;
	if (diff == 0)
		return 1; 
	//fabs() is in math.h and is a floating-point extension of abs()
	return fabs(x2-x1)/fabs(x1)*100 <= 0.01;
}

double cube_root(double v)
{
	double next = 1.0;
	if (fabs(v) < CUBE_LOWER || fabs(v) > CUBE_UPPER)
		printf("Warning: cube root may be inaccurate\n");
	/* for (int i = 0; i < CUBE_ITERATIONS; i++)
		next = (2*next + v/(next*next))/3; */
	// As per exercise 5.10 directs, the above code is replaced by:
	while(!near_equal(next * next * next, v))
	{
		next = (2 * next + v/(next*next))/3;
		printf("next = %lf, next ^3 = %lf, val = %lf\n", next, next * next * next,  v);
	}
	return next;
}

int main(int argc, char* argv[])
{
	printf("Enter a value to find the cubed root of: ");
	double val;
	while (scanf("%lf", &val) == 1)
	{
		double root = cube_root(val);
		printf("Value = %lf, root = %lf, ^3 = %lf\n", val, root, root * root * root);
		printf("Enter your next value:");
	} 
}
