#include <stdio.h>

/*
Mary had a little lamb,
little lamb, little lamb;
Mary had a little lamb,
its fleece was white as snow.
*/

int main (int argc, char* argv[]) {
    printf("Enter text:\n");
    int currChar; // Current char
    int charCount = 0, lineCount = 0;
    while ((currChar = getchar()) && currChar != EOF) {
        if (currChar == '\n')
            lineCount++;
        charCount++;
    }
    printf("Lines: %d\nChars: %d\n", lineCount, charCount);
    return 0;
}
