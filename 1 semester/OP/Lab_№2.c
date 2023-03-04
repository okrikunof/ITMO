#include <stdio.h>
#include <math.h>

int main() {
    float z1, z2, a;
    printf("Введите значение угла в градусах:\n");
    scanf("%f", &a);
    z1 = (1 - 2 * powf(sinf(a), 2)) / (1 + sinf(2 * a));
    z2 = (1 - tanf(a)) / (1 + tanf(a));
    printf("Результат вычислений в радианах: z1 = %f, z2 = %f", z1, z2);
    return 0;
}
