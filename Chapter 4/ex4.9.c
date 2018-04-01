#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int n, divisor, isprime = 0;
    printf("Enter a number n for which you want to find the next prime for: ");
    if (scanf("%d", &n) != 1) {
        printf("Incorrect input\n");
        exit(EXIT_FAILURE);
    }
    /* a value for n has been read */
    n += 1;
    while (isprime == 0) {
        isprime = 1;
        for (divisor=2; divisor*divisor<=n; divisor++) {
            if (n % divisor==0) {
                isprime = 0;
                break;
            }
        }
        if (isprime)
            break;
        n++;
    }
    if (isprime == 1)
        printf("%d is the next prime number\n", n);
    else
        printf("No prime number has been found. Weird. Integer overflow?");
    return 0;
}
