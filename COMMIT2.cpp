#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#define PASSWORD "2025"
int main(void) {

char input[20];
int attempts = 0;

// 密碼驗證
while (attempts < 3) {
    printf("請輸入4位數密碼：");
    scanf("%s", input);
    if (strcmp(input, PASSWORD) == 0) {
        printf("密碼正確，進入系統。\n");
        break;
    } else {
        printf("密碼錯誤！\n");
        attempts++;
    }
}

if (attempts == 3) {
    printf("錯誤次數過多，系統結束。\n");
    return 0;
}
}
