#include <stdio.h>

int main() {
    int n, x;
    long long total_sum = 0;

    // Тут ми пишемо
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    printf("Введіть ціле число x: ");
    scanf("%d", &x);

    // Якщо n < 1 
    if (n < 1) {
        printf("Помилка: n має бути натуральним числом (>= 1).\n");
        return 1;
    }

    // Зовнішній цикл (сума по i від 1 до n)
    for (int i = 1; i <= n; i++) {
        // Внутрішній цикл (сума по j від 2 до n)
        for (int j = 2; j <= n; j++) {
            total_sum += (2 * x + i - j);
        }
    }

    // Виведення результату
    printf("\nРезультат обчислення подвійної суми: %lld\n", total_sum);

    return 0;
}