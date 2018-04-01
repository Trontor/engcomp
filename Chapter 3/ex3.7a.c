#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    printf("Enter a temperature: ");
    float temp;
    char suffix;
    if (scanf("%f%c", &temp, &suffix) != 2) {
        printf("The input you gave is invalid.\n");
        exit(EXIT_FAILURE);
    }
    char convertedSuffix;
    float convertedTemp;
    if (suffix == 'F') {
        convertedTemp = 5*(temp - 32)/9;
        convertedSuffix = 'C';
    } else if (suffix == 'C') {
        convertedTemp = 9 * temp / 5 + 32;
        convertedSuffix = 'F';
    } else {
        printf("You haven't appended a proper suffix to your temperature (C/F)!\n");
        exit(EXIT_FAILURE);
    }
    printf("The temperature %.1f%c is %.1f%c.\n", temp, suffix, convertedTemp, convertedSuffix);
    return 0;
}
