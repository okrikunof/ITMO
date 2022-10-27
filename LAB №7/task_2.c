#include <stdio.h>

struct square{
    float a;
};

int main() {
    struct square square_1;
    float n, perimeter, square_area;
    printf("Введите длину стороны квадрата\n");
    scanf("%f", &n);
    square_1.a = n;
    perimeter = square_1.a * 4;
    square_area = square_1.a * square_1.a;
    printf("Периметр квадрата - %g\nПлощадь квадрата - %g", perimeter, square_area);
    return 0;
}
