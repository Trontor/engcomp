#include <stdio.h>
#include <ctype.h>

int my_isupper();
int my_tolower();

int main(int argc, char* argv[]) {
	printf("Enter text, ^D to end:\n");
	int c;
	while ((c=getchar()) != EOF) {
		if (my_isupper(c)) {
			c = my_tolower(c);
		}
		putchar(c);
	}
	return 0;
}

int my_isupper(int c) {
	return c >= 'A' && c <= 'Z';
}

int my_tolower(int c) {
	if (my_isupper(c)) {
		return c - ('A' - 'a');
	} else {
		return c;
	}
}
