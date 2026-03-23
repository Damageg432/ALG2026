#include <stdio.h>
#include <math.h>

int main() {
    int a, b, y;
    double z;
    int success = 0; // Вихід із циклу

    while (!success) {
        printf("Введіть цілі числа a, b, y:\n");
        printf("a = "); scanf("%d", &a);
        printf("b = "); scanf("%d", &b);
        printf("y = "); scanf("%d", &y);

        // Умова, якщо задані числа допустимі
        if (a * b < 0) {
            printf("\nПомилка: добуток a*b = %d є від'ємним. Корінь неможливий.\n", a * b);
            printf("Задайте інші значення.\n\n");
        } 
        else if (a - b * b < 0) {
            printf("\nПомилка: вираз a - b^2 = %d є від'ємним. Корінь неможливий.\n", a - b * b);
            printf("Задайте інші значення.\n\n");
        } 
        else {
            // Якщо все гуд - йдемо далі
            z = sqrt(a * b) + 2 * sqrt(a - b * b) + y;
            success = 1; // Тепер ми можемо вийти з циклу
        }
    }

    printf("\nОбчислення успішне!\n");
    printf("Результат z = %.4f\n", z);

    return 0;
}