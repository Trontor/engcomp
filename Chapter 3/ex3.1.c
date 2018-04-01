/*
The expression to reduce is:
    1 && -2 * - 3 - 4 < 5 && 6 <= 7 >= 8 != 9 / 10  > ! 11

Logical Operator Precedence:
! -  (not, and UNARY modifier ... not subtraction)
* /
<= >= < >
!= ==
&&
||
=

Reducing:
    1 && -2 * - 3 - 4 < 5 && 6 <= 7 >= 8 != 9 / 10 > 0
    1 && 6 - 4 < 5 && 6 <= 7 >= 8 != 0 > 0
    1 && 3 < 5 && 6 <= 7 >= 8 != 0 > 0
    1 && 1 && 0 != 0
    1 && 1 && 0
    0

Checking:
*/
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("%d\n", 1 && -2 * - 3 - 4 < 5 && 6 <= 7 >= 8 != 9 / 10  > ! 11);
    return 0;
}
