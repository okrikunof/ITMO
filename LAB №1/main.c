#include <stdio.h>

int main() {
    char str;
    float real_num;
    printf("Введите строку:\n");
    scanf("%s", &str);
    printf("Введите вещественное число:\n");
    scanf("%f", &real_num);
    printf("Результат: %s, %g", &str, real_num);
    return 0;
}
