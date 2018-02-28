#define CUBE_LOWER 1e-6
#define CUBE_UPPER 1e+6
#define CUBE_ITERATIONS 25

/* Return an approximate cube root calculated 
   by a converging iterative mechanism.*/

double cube_root(double v)
{
	double next = 1.0;
	int i;
	if (fabs(v) < CUBE_LOWER || fabs(v) > CUBE_UPPER)
		printf("Warning: cube root may be inaccurate\n");
	for (int i = 0; i < CUBE_ITERATIONS; i++)
		next = (2*next + v/(next*next))/3;
	return next;
}
