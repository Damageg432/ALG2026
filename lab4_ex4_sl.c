#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159265;
    double x, y;

    printf("---------------------------\n");
    printf("|    x    |    y = f(x)   |\n");
    printf("---------------------------\n");

    for (x = -pi; x <= pi + 0.001; x += pi / 10.0) {
        
        y = 5 * x * sin(x);

        printf("| %7.3f | %10.4f |\n", x, y);
    }

    printf("---------------------------\n");

    return 0;
}