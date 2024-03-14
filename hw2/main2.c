#include <stdio.h>

int main() {
    FILE* fp_source;
    FILE* fp_destination;
    char buffer[1000]; // 假設程式碼不會超過1000字元

 
    // 從程式碼檔案讀取數據，並寫入到目標檔案
    while (fgets(buffer, sizeof(buffer), fp_source) != NULL) {
        fputs(buffer, fp_destination);
    }

    // 關閉檔案
    fclose(fp_source);
    fclose(fp_destination);

    printf("程式碼已成功寫入到 main2.txt 中。\n");

    return 0;
}
