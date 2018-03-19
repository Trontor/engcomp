#include <stdio.h>

/*
Mary had a little lamb,
little lamb, little lamb;
Mary had a little lamb,
its fleece was white as snow.

-------------
The above excerpt should return 20 words!
*/

int main (int argc, char* argv[]) {
    printf("Enter text:\n");
    int currChar; // Current char
    int charCount = 0, lineCount = 0, wordCount = 0, inaword = 0;
    while ((currChar = getchar()) && currChar != EOF) {
        if (lineCount == 0)
            lineCount = 1;
        if (currChar == '\n')
            lineCount++;
        charCount++;
        /* To handle words we have to note that the alpabet is restricted between
            64 < char < 90 (for capital letters)
            97 < char < 122 (for lower-case letters)

            HOWEVER, you can just look for spaces and newlines
            instead - but this is just in case.
            */
        int isUpperCaseAlphabet = currChar > 64 && currChar < 90;
        int isLowerCaseAlphabet = currChar > 96 && currChar < 122;
        if ((isUpperCaseAlphabet || isLowerCaseAlphabet)) {
            if (!inaword)
            {
                wordCount++;
                inaword = 1;
            }
        } else inaword = 0;
    }
    printf("Lines: %d\nChars: %d\nWords: %d\n", lineCount, charCount, wordCount);
    return 0;
}
