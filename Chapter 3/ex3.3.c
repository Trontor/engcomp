#include <stdio.h>
#include <stdlib.h> //This includes a macro for EXIT_FAILURE
#include <math.h>
/* Make sure to add -lm to the end of your compile code if you get an error
    compiling */
//gcc -Wall -o exec ex3.3.c -lm ; ./exec;

int main(int argc, char* argv[]) {
    printf("Welcome to the quadratic equation solver!\n" \
            "Please enter your value for a, b and c separated by a space.\n");
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("You have provided an invalid input, please try again!\n");
        exit(EXIT_FAILURE);
    }
    printf("Succesfully read in values: a = %f, b = %f, c = %f\n", a, b, c);
    double d = b * b - 4*a*c;
    double case1 = (-b + sqrt(d)) / (2 * a);
    double case2 = (-b - sqrt(d)) / (2 * a);
    if (d == 0)
        printf("There exists only one root: %.2f.\n", case1);
    else if (d > 0 && case1 != case2)
        printf("There exists two roots: %.2f and %.2f.\n", case1, case2);
    else {
        /* The quadratic equation can produce imaginary outputs.
            This occurs when the discriminant is negative. Since i^2 = -1 we can
            factor out an i and proceed as usual. If you do not understnad this
            case and/or imaginary roots, don't worry - it's not required. */
        double realPart = -b/(2*a);
        double imaginaryPart = sqrt(abs(d))/(2*a);
        printf("There exists two imaginary roots:\n");
        printf("\t %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("\t %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    return 0;
}
