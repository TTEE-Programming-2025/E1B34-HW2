#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#define PASSWORD "2025"
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
}
