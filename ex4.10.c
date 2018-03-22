#include <stdio.h>

int main(int argc, char* argv[]) {
    int ch, lastch = -1, incomment=0, newlinelast=0, nestedcomment = 0;
    printf("Enter your code with 1989/1999 ANSI/ISO C style comments:\n");
    lastch = getchar();
    putchar(lastch);
    // try change this line to a /**/ combination to see the error
    // test comment, you can run ./exec < ex4.10.c to see this change!
	while ((ch=getchar()) != EOF) {
		if (ch == '/' && !newlinelast) {
            // Case: start of a comment
            if (lastch ==)
            if (lastch == '/') {
    			putchar('*');
                incomment = 1;
            }
		}
        // Case: inside or outside a comment, but not a newline!
        else if (ch != '\n'){
            newlinelast = 0;
            putchar(ch);
        }
        // Case: Reached end of line, add */ and continue.
		else if (ch == '\n') {
            if (incomment) {
                putchar('*');
                putchar('/');
            }
            putchar(ch);
            incomment = 0;
			newlinelast = 1;
		} else {
			newlinelast = 0;
		}
        lastch= ch;
	}
	return 0;
}
