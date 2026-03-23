#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    double k;

    // Вводимо числа
    printf("Введіть ціле число x: ");
    scanf("%d", &x);
    
    printf("Введіть ціле число y: ");
    scanf("%d", &y);
    
    printf("Введіть ціле число z: ");
    scanf("%d", &z);

    // Основа
    double base = pow(x, 2) + pow(z, 3);
    
    // Показник степеня
    double exponent = (double)(1 - y) / (1 + x);

    // Рахуємо
    k = pow(base, exponent) + z;

    // Виводимо результат
    printf("\nРезультат обчислення k = %.5f\n", k);

    return 0;
}