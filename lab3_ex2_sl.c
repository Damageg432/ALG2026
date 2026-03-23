#include <stdio.h>

int main() {
    float x, y;    
    float x1, y1;   
    float x2, y2;   
    float temp;

    // Ввід
    printf("Введіть координати точки A (x y): ");
    scanf("%f %f", &x, &y);

    printf("Введіть координати першого кінця діагоналі d1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Введіть координати другого кінця діагоналі d2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    if (x1 > x2) {
        temp = x1; x1 = x2; x2 = temp;
    }
    if (y1 > y2) {
        temp = y1; y1 = y2; y2 = temp;
    }

    // Перевірка, чи точка всередині (включаючи межі)
    if (x >= x1 && x <= x2) {
        if (y >= y1 && y <= y2) {
            printf("\nТочка A(%.1f, %.1f) потрапляє в прямокутник.\n", x, y);
        } else {
            printf("\nТочка A(%.1f, %.1f) НЕ потрапляє в прямокутник (поза Y-межами).\n", x, y);
        }
    } else {
        printf("\nТочка A(%.1f, %.1f) НЕ потрапляє в прямокутник (поза X-межами).\n", x, y);
    }

    return 0;
}