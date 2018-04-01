#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    printf("Enter an integer amount between 0 and 99: ");
    int cents;
    if (scanf("%d", &cents) != 1 || cents > 99 || cents < 0) {
        printf("You have not entered an integer between 0 and 99.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nThe coins required to make %d cents are:\n", cents);
    while (cents > 0) {
        int removed = 0;
        if (cents >= 50)
            removed = 50;
        else if (cents >= 20)
            removed = 20;
        else if (cents >= 10)
            removed = 10;
        else if (cents >= 5)
            removed = 5;
        else if (cents >= 2)
            removed = 2;
        else if (cents >= 1)
            removed = 1;
        printf("%d", removed);
        cents -= removed;
        if (cents > 0)
            printf(", ");
        else printf("\n");
    }
}
