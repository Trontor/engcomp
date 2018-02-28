#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double my_log(int num, int base)
{
	//log_b(x) = log_a(x)/log_a_(b)
	return (double)(log(num)/log(base));
}

int log_star(double num, int base)
{	
	double application = my_log(num, base);
	printf("log_%d_(%lf) = %lf\n", base, num, application);
	if (application < 1)
		return 1;
	return 1 + log_star(application, base);	 	
}

int main(int argc, char* argv[])
{
	printf("\t Welcome!\nEnter the log base: ");
	int base;
	scanf("%d", &base);
	printf("Enter your number:");
	double arg;
	while(scanf("%lf", &arg) == 1) {
		printf("log*%.0lf with base %d is %d.\n", arg, base, log_star(arg, base));
		printf("Enter your number: ");
	}
	exit(0);
}
