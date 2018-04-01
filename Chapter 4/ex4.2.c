#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;
    int j = 1;

    do
        printf("do statement: This runs once.\n");
    while (i == j); // 1 != 0 so this is never true.

    int hasRun = 0;
    while (!hasRun || i == j) {
        printf("while statement: This also runs only once.\n");
        hasRun = !hasRun; // or alternatively hasRun = 1;
    }
    printf("Now that was easy, wasn't it?\n");
    return 0;
}
