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

// �ܴa��C
while (attempts < 3) {
    printf("Ոݔ��4λ���ܴa��");
    scanf("%s", input);
    if (strcmp(input, PASSWORD) == 0) {
        printf("�ܴa���_���M��ϵ�y��\n");
        break;
    } else {
        printf("�ܴa�e�`��\n");
        attempts++;
    }
}

if (attempts == 3) {
    printf("�e�`�Δ��^�࣬ϵ�y�Y����\n");
    return 0;
}
char choice;
char triangleChar;

// ���x��
do {
    printf("Ո�x�� (a/b/c)��");
    getchar();
    scanf("%c", &choice);

    if (choice == 'a' || choice == 'A') {
        printf("Ոݔ����Ԫ��a��n֮�g����");
        getchar();
        scanf("%c", &triangleChar);
        if (triangleChar >= 'a' && triangleChar <= 'n') {
            drawTriangle(triangleChar);
        } else {
            printf("ݔ���e�`��Ո����ݔ�롣\n");
        }
    }else if (choice == 'b' || choice == 'B') {
    int n;
    printf("Ոݔ��1��9֮�g��������");
    scanf("%d", &n);
    if (n >= 1 && n <= 9) {
        multiplicationTable(n);
    } else {
        printf("ݔ���e�`��Ո����ݔ�롣\n");
    }
}
else if (choice == 'b' || choice == 'B') {
    int n;
    printf("Ոݔ��1��9֮�g��������");
    scanf("%d", &n);
    if (n >= 1 && n <= 9) {
        multiplicationTable(n);
    } else {
        printf("ݔ���e�`��Ո����ݔ�롣\n");
    }
}

    // �������ܕ��r����
} while (1);

}
