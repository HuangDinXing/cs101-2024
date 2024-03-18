#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[1000];
    int lineNumber = 0;
    int mainLineNumber = 0;

    inputFile = fopen("main3.c", "r");
    if (inputFile == NULL) {
        return 1;
    }

    while (fgets(line, sizeof(line), inputFile)) {
        lineNumber++;
        if (strstr(line, "int main()")) {
            mainLineNumber = lineNumber;
            break;
        }
    }

    outputFile = fopen("main3.txt", "w");
    if (outputFile == NULL) {
        return 1;
    }

    fprintf(outputFile, "%d", mainLineNumber);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
