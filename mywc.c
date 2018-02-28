#include <stdio.h>

int main(int argc, char * argv[])
{
	printf("Enter text:\n");
	int ch, lines, chars;
	lines = 0;
	chars = 0;
	while (( ch = getchar()) != EOF)
	{
		if (ch == '\n')
			lines++;
		else chars ++;
	}
	printf("Lines = %d\nCharacters = %d\n", lines, chars);
	return 0;
}
