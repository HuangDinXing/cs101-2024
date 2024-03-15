#include <stdio.h>
#include <string.h>

int main() {
    FILE* fp_source;
    int count = 0;
    char buffer[100];
    fp_source = fopen(__FILE__, "r");

    while (fgets(buffer, sizeof(buffer), fp_source) != NULL) {
      //  if (strstr(buffer, "int main() {\n") != 0) {
            count++;
    //}
        if (strstr(buffer, "int main() {\n") != 0) {
            printf("%d int main() {", count);
            break;
        }
    }

    // 關閉檔案
    fclose(fp_source);

    return 0;
}
