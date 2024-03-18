#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("main2.c", "r");
    if (inputFile == NULL) {
        return 1;
    }

    outputFile = fopen("main2.txt", "w");
    if (outputFile == NULL) {
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
