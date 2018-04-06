#include <stdio.h>
#include <stdlib.h>

// Completed first try, debugging was done but is now
// commented out to make sure it was working fine.

double prime_density(int first, int last);
int isprime(int n);

int main(int argc, char* argv[]){
	int start, end;
	printf("Enter your start and end values separated by a space: ");
	if (scanf("%d %d", &start, &end) != 2 || end < start) {
		printf("Yeah nice bro\n");
		exit(EXIT_FAILURE);
	}
	double density = prime_density(start, end);
	printf("The prime density of range %d -> %d is %2f%%.\n",start, end, density*100);
}

double prime_density(int first, int last) {
	int primes = 0;
	if (last < first) {
		printf("yeah nice one bro have another try\n");
		return 0;
	}
	for( int i = first; i <= last; i++) {
		if (isprime(i)) {
			//printf ("prime: %d\n", i);
			primes++;
		}
	}
	return 1.0*primes/(last-first + 1);
}

int isprime(int n)
{
	if (n < 2)
		return 0;

	for (int divisor = 2; divisor * divisor <= n; divisor++)
		if (0 == n % divisor)
			return 0;
	return 1;
}
