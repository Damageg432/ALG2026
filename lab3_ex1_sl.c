#include <stdio.h>
#include <math.h>

int main() {
    int x, y, b, choice;
    double a;

    printf("1 - Скорочена форма (Варіант А)\n");
    printf("2 - Повна форма (Варіант Б)\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    printf("\nВведіть x, y, b (10, 7, 0): ");
    scanf("%d %d %d", &x, &y, &b);

    if (choice == 1) {
        printf("\nВаріант А\n");
        switch (b) {
            case 10:
                if (x * y < 0) { printf("ERROR: корінь з від'ємного числа\n"); return 0; }
                a = b + 4 * sqrt(x * y);
                break;
            case 7:
                if (2 * y - 3 * x == 0) { printf("ERROR: ділення на 0\n"); return 0; }
                a = (double)(b * b) / (2 * y - 3 * x);
                break;
            case 0:
                a = b * b - 2 * x * y + 5;
                break;
            default:
                printf("Невірне значення b!\n"); return 0;
        }
        printf("Результат a = %.4f\n", a);
    } 
    else if (choice == 2) {
        printf("\nВаріант Б\n");
        switch (b) {
            case 10:
                if (x * y >= 0) {
                    a = b + 4 * sqrt(x * y);
                    printf("Результат a = %.4f\n", a);
                } else {
                    printf("ERROR: неможливо взяти корінь.\n");
                }
                break;
            case 7:
                if (2 * y - 3 * x != 0) {
                    a = (double)(b * b) / (2 * y - 3 * x);
                    printf("Результат a = %.4f\n", a);
                } else {
                    printf("ERROR: знаменник нуль.\n");
                }
                break;
            case 0:
                a = b * b - 2 * x * y + 5;
                printf("Результат a = %.4f\n", a);
                break;
            default:
                printf("Значення b не входить в умови задачі.\n");
                break;
        }
    } 
    else {
        printf("Невірний вибір в меню\n");
    }

    return 0;
}