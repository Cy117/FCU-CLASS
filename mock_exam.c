#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 比較函數，用於排序
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int total;
    int i, j;
    int left, right, count;
    int C[500001] = {};

    // 讀取數量
    scanf("%d", &total);
    
    // 讀取陣列 C
    for (int i = 0; i < total; i++) {
        scanf("%d", &C[i]);
    }

    // 進行查詢
    while (scanf("%d %d", &i, &j) != EOF) {
        left = i;
        right = j;
        count = 0;

        // 找到大於 left 的最小位置
        int low = 0, high = total;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (C[mid] > left) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        int start = low;

        // 找到小於 right 的最大位置
        low = 0, high = total;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (C[mid] < right) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        int end = low;

        // 計算區間內的數字個數
        count = end - start;

        // 輸出結果
        printf("%d\n", count);
    }

    return 0;
}
