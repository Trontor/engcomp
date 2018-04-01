#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int spores = 0, secondlast = 0, last = 1, day = 0;
    while (spores < 10000000) {
        if (spores == 0)
            spores = 1;
        else {
            spores = last + secondlast;
            secondlast = last;
            last = spores;
        }
        printf("At the end of day %d there are %d spores.\n", day++, spores);
    }
    return 0;
}
