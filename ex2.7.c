#include <stdio.h>

int main(int argc, char* argv[]) {
    int num, n; double z; char c;
    num = -1; n = 99; z = 9.99; c = '9';
    num = scanf("%d %lf %c", &n, &z, &c);
    printf("num = %d", num);
    printf(", n = %d, z = %f, c = %c\n", n, z, c);
    return 0;
}
