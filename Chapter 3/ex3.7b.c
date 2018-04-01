#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    printf("Enter a quantity: ");
    float value;
    char suffix;
    if (scanf("%f%c", &value, &suffix) != 2) {
        printf("The input you gave is invalid.\n");
        exit(EXIT_FAILURE);
    }
    char convertedSuffix;
    float convertedValue;
    if (suffix == 'M') {
        convertedValue = 1.609 * value;
        convertedSuffix = 'K';
    } else if (suffix == 'K') {
        convertedValue = 1/1.609 * value;
        convertedSuffix = 'M';
    } else if (suffix == 'P') {
        convertedValue = 0.453592 * value;
        convertedSuffix = 'G';
    } else if (suffix == 'G') {
        convertedValue = 1/0.453592 * value;
        convertedSuffix = 'P';
    } else if (suffix == 'F') {
        convertedValue = 5*(value - 32)/9;
        convertedSuffix = 'C';
    } else if (suffix == 'C') {
        convertedValue = 9 * value / 5 + 32;
        convertedSuffix = 'F';
    } else {
        printf("You haven't appended a proper suffix to your value (C/F M/K P/G)!\n");
        exit(EXIT_FAILURE);
    }
    printf("The ");
    switch (convertedSuffix) {
        case 'M':
        case 'K':
            printf("distance");
            break;
        case 'P':
        case 'G':
            printf("mass");
            break;
        case 'F':
        case 'C':
            printf("temperature");
            break;
    }
    printf(" %.1f%c is %.1f%c.\n", value, suffix, convertedValue, convertedSuffix);
    return 0;
}
