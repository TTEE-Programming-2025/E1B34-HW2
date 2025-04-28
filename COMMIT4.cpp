#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#define PASSWORD "2025"
void drawTriangle(char ch) {
    int height = ch - 'a' + 1;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}
void multiplicationTable(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
}

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
char choice;
char triangleChar;

// 主選單
do {
    printf("請選擇 (a/b/c)：");
    getchar();
    scanf("%c", &choice);

    if (choice == 'a' || choice == 'A') {
        printf("請輸入字元（a到n之間）：");
        getchar();
        scanf("%c", &triangleChar);
        if (triangleChar >= 'a' && triangleChar <= 'n') {
            drawTriangle(triangleChar);
        } else {
            printf("輸入錯誤，請重新輸入。\n");
        }
    }else if (choice == 'b' || choice == 'B') {
    int n;
    printf("請輸入1到9之間的整數：");
    scanf("%d", &n);
    if (n >= 1 && n <= 9) {
        multiplicationTable(n);
    } else {
        printf("輸入錯誤，請重新輸入。\n");
    }
}
else if (choice == 'b' || choice == 'B') {
    int n;
    printf("請輸入1到9之間的整數：");
    scanf("%d", &n);
    if (n >= 1 && n <= 9) {
        multiplicationTable(n);
    } else {
        printf("輸入錯誤，請重新輸入。\n");
    }
}

    // 其他功能暫時留空
} while (1);

}
