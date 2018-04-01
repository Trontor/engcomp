#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    printf("Enter numbers (1 - 70) | CTRL + D to terminate:");
    int next;
    if (scanf("%d", &next) != 1) {
        printf("\nInvalid input. Try again.\n");
        exit(EXIT_FAILURE);
    }
    do {
        printf("%d |", next);
        for (int i = 0; i < next; i++)
            printf("*");
        printf("\n");
    }
    while (scanf("%d", &next) == 1);
    return 0;
}
