#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int near_equal(double x1, double x2)
{
	double diff = x2-x1;
	if (diff == 0)
		return 1;
	//fabs() is in math.h and is a floating-point extension of abs()
	return fabs(x2-x1)/x1*100 <= 0.01;
}
int main(int argc, char * argv[])
{
	double a = 0;
	double b = 0.00001;
	if (near_equal(a,b))
		printf("%lf and %lf are nearly equal!", a, b);
	else printf("not near equal :(");

	exit(0);
}
