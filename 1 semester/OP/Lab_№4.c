#include <stdio.h>
#include <stdbool.h>

int DecBin(int n)
{
    int m = 1;
    int ans = 0;
    while (n) {
        ans = ans + ((n % 2) * m);
        m = m * 10;
        n = n / 2;
    }
    printf("%d", ans);
    return ans;
}

int main() {
    int input_num, dn, input_num_2;
    char dchchar[32];
    scanf("%d", &input_num);
    bool flag = input_num >= 11 && input_num <= 12;
    switch (flag) {
        case true: {
            printf("Входит в диапазон\n");
            break;
        }
        case false: {
            printf("Не входит в диапазон\n");
            break;
        }
    }
    scanf("%d", &input_num_2);
    dn = DecBin(input_num);
    printf("%d\n", dn);
    sprintf(dchchar, "%d", dn);
    printf("%c", dchchar[input_num_2]);
    return 0;
}
