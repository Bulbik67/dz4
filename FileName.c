#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int permission(int a, int b, int c);

int permission(int a, int b, int c)
{
    int condition = (a % 5 == 0) &&
        (b % 5 == 0) &&
        (c % 5 == 0);
    return condition;
}

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int A, B, C;
    int result;

    printf("|Погрузка грузов в контейнер|\n");
    printf("Введите вес грузов A, B, C (кг): ");

    if (scanf("%d %d %d", &A, &B, &C) != 3) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    result = permission(A, B, C);

    printf("Разрешение на погрузку (1-да, 0-нет): %d\n", result);

    return 0;
}