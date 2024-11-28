#include <stdio.h>

int main() {
    int year;

    // 讀取每組測試資料
    while (scanf("%d", &year) != EOF) {
        // 初始化陣列，假設年齡範圍是 1 到 100
        int old[101] = {};
        int tmp;

        // 讀取年齡並統計頻率
        for (int i = 0; i < year; i++) {
            scanf("%d", &tmp);
            old[tmp]++;  // 年齡 tmp 出現次數加 1
        }

        // 根據年齡順序輸出年齡，按照頻率輸出
        for (int i = 1; i < 101; i++) {
            if (old[i] != 0) {  // 如果這個年齡出現過
                for (int j = 0; j < old[i]; j++) {
                    printf("%d ", i);  // 輸出年齡 i，old[i] 次
                }
            }
        }
        printf("\n");  // 每組測試資料後換行
    }

    return 0;
}