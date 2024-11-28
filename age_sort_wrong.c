#include <stdio.h>

void change(int count){
    int old[200001] = {};   // 假設數字的範圍是 1 到 200000
    int math[101] = {};      // 假設每個數字最大 100
    int tmp;
    
    // 讀取數字並存儲在 old 陣列中
    for(int i = 0 ; i < count ; i++){
        scanf("%d", &old[i]);  // 使用 &old[i] 來傳遞變數的地址
    }
    
    // 統計每個數字出現的次數
    for(int i = 0 ; i < count ; i++){
        math[old[i]]++;
    }
    
    // 打印出現過的數字，並保證每個數字只出現一次
    for(int i = 1 ; i <= 100 ; i++){  // 假設數字的範圍是 1 到 100
        if(math[i] != 0){
            printf("%d ", i);
            math[i]--;  // 減少計數，確保該數字只打印一次
        }
    }
    printf("\n");
}

int main(){
    int year[500001];  // 用於存儲每個測試案例的數字數量
    int s = 0;

    // 讀取所有輸入數字並記錄在 year 陣列中
    while(scanf("%d", &year[s]) != EOF){  // 讀取直到文件結尾
        s++;
    }

    // 根據每個數字的數量，呼叫 change 函數處理
    for(int k = 0 ; k < s ; k++){
        change(year[k]);
    }

    return 0;
}
