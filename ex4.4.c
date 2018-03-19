#include <stdio.h>
#include <stdlib.h>

#define PERLINE 8 /* Change to whatever you want! */

int main(int argc, char* argv[]) {
    printf("\t      ");
    for (int i = 0; i < PERLINE; i++) {
        printf("+%d  ", i);
    }
    printf("\n    \t    +");
    for (int i = 0; i < 4*PERLINE; i++) {
        printf("-");
    }
    for (int i = 32; i < 126; i++) {
        if ((i-32) % PERLINE == 0)
            printf("\n\t%3d | ", i);
        printf(" %c  ", (char)i);
    }
    printf("\n");
    return 0;
}
