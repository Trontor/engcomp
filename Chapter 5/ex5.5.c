#include <stdio.h>

int sum_factors(int num) {
	int sum = 1;
	//For every divisor  i of num, there is also a corresponding divisisor num/i
	/* Running until sqrt(num) is faster than all */
	for (int i = 2; i*i < num - 1; i++) {
		if(num % i == 0) {
			sum += i;
			int d = num/i;
			if (d != i)
				sum += (num/i);
		}
	}
	return sum;
}

int is_perfect(int num) {
	return (num == sum_factors(num));
}

int main(int argc, char* argv[]) {
	int foundNumbers = 0;
	int num = 2;
	while (foundNumbers != 5) {
		if (is_perfect(num)) {
			foundNumbers++;
			printf("%d is perfect number #%d\n", num, foundNumbers);
		}
		printf("%d\n",num);
		num+=2;
	}
	return 0;
}
