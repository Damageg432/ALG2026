#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;

    // Пишемо дані
    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);
    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);
   
    int remainder = num2 % num1;

    int difference = num2 - num1;

    double product = (double)num1 * num2;
    double squaredProduct = pow(product, 2); // Підносимо до квадрата (степінь 2)

    // Результат
    printf("Залишок від ділення %d на %d: %d\n", num2, num1, remainder);
    printf("Різниця другого і першого чисел: %d\n", difference);
    printf("Добуток чисел у квадраті: %.0f\n", squaredProduct);

    return 0;
}