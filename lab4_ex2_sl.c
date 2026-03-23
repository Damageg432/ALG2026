#include <stdio.h>

int main() {
    int choice;
    int sum = 0;
    int count = 0;
    int i;
    float average;

    printf("Оберіть тип циклу для обчислення середнього арифметичного [10; 50]:\n");
    printf("1 - Цикл з параметром (for)\n");
    printf("2 - Цикл з передумовою (while)\n");
    printf("3 - Цикл з післяумовою (do...while)\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nЦикл FOR\n");
            for (i = 10; i <= 50; i++) {
                sum += i;
                count++;
            }
            break;

        case 2:
            printf("\nЦикл WHILE\n");
            i = 10;
            while (i <= 50) {
                sum += i;
                count++;
                i++;
            }
            break;

        case 3:
            printf("\nЦикл DO...WHILE\n");
            i = 10;
            do {
                sum += i;
                count++;
                i++;
            } while (i <= 50);
            break;

        default:
            printf("\nПомилка: невірний вибір способу.\n");
            return 1; // Завершуємо програму з кодом помилки
    }

    // Обчислюємо результат
    if (count > 0) {
        average = (float)sum / count;
        printf("Сума чисел: %d\n", sum);
        printf("Кількість чисел: %d\n", count);
        printf("Середнє арифметичне: %.2f\n", average);
    }

    return 0;
}