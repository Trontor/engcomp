#include <stdio.h>
/* Define regularly used variables */
#define SLASH = '/'
#define ASTERIKS = '*'

/* Defines possible states for the FSM */
#define DEFAULT = 0
#define SAW_SLASH = 1
#define IN_COMMENT= 2
#define SAW_ASTERIKS = 3

int main(int argc, char* argv[]) {
	int ch, state = DEFAULT;
	printf("Enter text including ANSI C comments:\n");
	while ((ch = getchar()) != EOF) {
// Is everything normal?
		if (state == DEFAULT) {
// Cool, but is character a slash?
			if (ch == SLASH) {
// Wow, it might be a comment! Let's hold it.
				state = SAW_SLASH;
			} else {
// Nothing to see here, move along.
				putchar(ch)
			}
		}
// Wow, everything ISN'T normal!
		else if (state == SAW_SLASH) {
// Oh my, is this a comment?
			if (ch == ASTERIKS) {
// We found the comment! yeet
				state = IN_COMMENT;
			} else {
// We didn't detect a comment, refund the '/' character.
				putchar(SLASH);
//BUT there might be a slash after it to start a comment... like //*
				if (ch == SLASH) {
					state = SAW_SLASH;
				}
				else {
					putchar(ch);
				}
			}
			else if (state == IN_COMMENT) {
			}


		}
	}
}
