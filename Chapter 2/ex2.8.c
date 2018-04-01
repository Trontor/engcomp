#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Enter degrees in Fahrenheit: ");
    float temp;
    scanf("%f", &temp);
    float tempInCelcius = 5*(temp - 32)/9;
    printf("%.2f degrees Fahrenheit is %.2f degrees Celcius.\n", temp, tempInCelcius);
    return 0;
}
