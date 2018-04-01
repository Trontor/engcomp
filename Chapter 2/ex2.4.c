#include <limits.h>
#include <stdio.h>
#include <float.h>

/* For some reason, the book instructs the student to include
    only limits.h when. The header definitions for DBL_X and
    FLT_X are legacy in limits.h (in fact, they don't seem to be
    in the header file at all on my system).
    They can be found in float.h */

int main(int argc, char* argv[]) {
    printf("INT_MAX = %d\n"
           "INT_MIN = %d\n"
           "FLT_MIN = %f\n"
   /* An interesting thing to note is FLT_MIN is NOT 0 :) */
           "FLT_MIN (%%exponential form) = %e\n"
           "FLT_MAX = %f\n"
           "DBL_MIN = %lf\n"
   /* Same thing as above occurs for DBL_MIN. Try it out if you want */
           "DBL_MAX = %lf\n",
          INT_MAX, INT_MIN, FLT_MIN, FLT_MIN, FLT_MAX, DBL_MIN, DBL_MAX);
    return 0;
}
