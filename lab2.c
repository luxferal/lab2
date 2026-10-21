#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    double x = 0.0;
    double y = 0.0;

    double result_task1 = 0.0;
    double result_task2 = 0.0;
    double result_task3 = 0.0;
    double result_task4 = 0.0;
    double result_task5 = 0.0;

    printf("Введите значение x: ");
    while (scanf("%lf", &x) != 1) {
        printf("Ошибка: введение некорректно! пожалуйста, введите число.\n");
        while (getchar() != '\n');
        printf("Введите значение x: ");
    }
    printf("Введите значение y: ");
    while (scanf("%lf", &y) != 1) {
        printf("Ошибка: введение некорректно! пожалуйста, введите число.\n");
        while (getchar() != '\n');
        printf("Введите значение y: ");
    }
    printf("\n");

    // Задание 1 (18)
    if (18 * y - 1 == 0) {
        printf("Задание 1: Ошибка ОДЗ (деление на ноль, знаменатель 18y – 1 равен нулю)\n");
    }
    else {
        result_task1 = exp(x) - (pow(y, 2) + 12 * x * y - 3 * pow(x, 2)) / (18 * y - 1);
        printf("Задание 1 (Результат выражения): %.4f\n", result_task1);
    }

    // Задание 2 (19)
    if (x + 1 < 0) {
        printf("Задание 2: Ошибка ОДЗ (выражение под корнем x+1 отрицательное)\n");
    }
    else if (cos(12 * y - 4) == 0) {
        printf("Задание 2: Ошибка ОДЗ (деление на ноль, знаменатель cos(12y - 4) равен нулю)\n");
    }
    else {
        result_task2 = (1 + sin(sqrt(x + 1))) / cos(12 * y - 4);
        printf("Задание 2 (Результат выражения): %.4f\n", result_task2);
    }

    // Задание 3 (20)
    if (sin(3 * x) == 0) {
        printf("Задание 3: Ошибка ОДЗ (sin(3x) равен нулю, котангенс не существует)\n");
    }
    else if (cos(x) <= 0) {
        printf("Задание 3: Ошибка ОДЗ (cos(x) <= 0, логарифм не существует)\n");
    }
    else if (x == 0) {
        printf("Задание 3: Ошибка ОДЗ (деление на ноль, ln(1 + x^2) равен нулю)\n");
    }
    else {
        result_task3 = 2 * (1.0 / tan(3 * x)) - (log(cos(x))) / log(1 + pow(x, 2));
        printf("Задание 3 (Результат выражения): %.4f\n", result_task3);
    }

    // Задание 4 (21)
    if (x <= -1) {
        printf("Задание 4: Ошибка ОДЗ (основа степени 1+x <= 0, x должен быть > -1)\n");
    }
    else {
        result_task4 = exp(x) - x - 2 + pow(1 + x, x);
        printf("Задание 4 (Результат выражения): %.4f\n", result_task4);
    }

    // Задание 5 (22)
    if (x <= 0) {
        printf("Задание 5: Ошибка ОДЗ (x <= 0, логарифм ln(x) не существует)\n");
    }
    else if (cos(x) - x / 3.0 == 0) {
        printf("Задание 5: Ошибка ОДЗ (деление на ноль, знаменатель cos(x) - x/3 равен нулю)\n");
    }
    else {
        result_task5 = x * log(x) + y / (cos(x) - x / 3.0);
        printf("Задание 5 (Результат выражения): %.4f\n", result_task5);
    }

    return 0;
}