#include <stdio.h>
/* I'm not familiar with FSM's so this seem clunky. Optimising it requires
    diagramming (unless you are a genius). */

int main(int argc, char * argv[])
{
	int ch, lastch = -1, incomment = 0, newlinelast = 0;
	int potentialnestedstart = 0, potentialnestedend = 0;
	printf("Enter your code with 1989/1999 ANSI/ISO C style comments:\n");
	lastch = getchar();
	putchar(lastch);
	 // try change this line to a /**/ combination to see the error
	 // test comment, you can run ./exec < ex4.10.c to see this change!
	 /* This comment shouldn't be touched */
	while ((ch = getchar()) != EOF) {
		if (ch == '/' && !newlinelast) {
			 // Case: start of a comment
			if (lastch == '/') {
				putchar('*');
				incomment = 1;
			}
			 // Case: stop on a comment
			else if (incomment && !potentialnestedend) {
				potentialnestedstart = 1;
			}
			else if (potentialnestedend) {
				potentialnestedend = 0;
				// Do nothing, there has been a detected inner */
			}
			else
				putchar(ch);
		}
		else if (ch == '*' && incomment  && !potentialnestedstart && !potentialnestedend) {
			potentialnestedend = 1;
		}
		else if (potentialnestedstart && ch == '*') {
			potentialnestedstart = 0;
			// Do nothing, there has been a detected inner /*
		}
		 // Case: inside or outside a comment, but not a newline!
		else if (ch != '\n') {
			newlinelast = 0;
			if (potentialnestedstart) {
				potentialnestedstart = 0;
				putchar(lastch);
			} else if (potentialnestedend) {
				potentialnestedend = 0;
				putchar(lastch);
			}
			putchar(ch);
		}
		 // Case: Reached end of line, add */ and continue.
		else if (ch == '\n') {
			if (incomment) {
				putchar('*');
				putchar('/');
			}
			putchar(ch);
			incomment   = 0;
			newlinelast = 1;
		} else {
			newlinelast = 0;
		}
		lastch = ch;
	}
	return 0;
}
