#include <stdio.h>
#include <string.h>

int main() {
    int c;  // 句子數量
    char sentence[1000];  // 用來儲存整個句子的字串
    int askii[256] = {0};  // 只需要 256，代表所有 ASCII 字符
    int add = 0;  // 記錄不同字符的數量

    scanf("%d\n", &c);  // 讀取句子數量

    // 讀取每一句並計算字符出現次數
    while (c--) {
        fgets(sentence, sizeof(sentence), stdin);  // 讀取整個句子
        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] != '\n' && sentence[i] != ' ') {  // 忽略換行和空格
                askii[(unsigned char)sentence[i]]++;  // 增加該字符的計數
            }
        }
    }

    // 計算不同字符的數量
    for (int i = 0; i < 256; i++) {
        if (askii[i] != 0) {
            add++;
        }
    }

    printf("%d\n", add);  // 顯示不同字符的數量

    // 輸出字符及其對應的出現次數
    for (int i = 0; i < 256; i++) {
        if (askii[i] != 0) {
            printf("%c %d\n", i, askii[i]);
        }
    }

    return 0;
}
