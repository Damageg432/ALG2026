#include <stdio.h>

int main() {
    const double a;
    const double b;
    const double c;
    double y;

    printf("Введіть значення a (1): ");
    scanf("%lf", &a);
    
    printf("Введіть значення b (1): ");
    scanf("%lf", &b);
    
    printf("Введіть значення c (6): ");
    scanf("%lf", &c);

    double part1_top = 3 * a - 4 * b + 5 * c;
    double part1_bottom = a * b + 2 * b * c + 3 * a * c;
    
    double part2 = (a * b - c) / 4.0;

    y = (part1_top / part1_bottom) - part2;

    printf("\nПри a=%.1f, b=%.1f, c=%.1f\n", a, b, c);
    printf("Результат y = %.4f\n", y);

    return 0;
}