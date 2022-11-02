#include <stdio.h>
#include <string.h>

int main() {
////  ПУНКТ №2

//    int len_str, n, len_str_max;
//    printf("Введите максимальное кол-во элментов в строках\n");
//    scanf("%d", &len_str);
//    len_str_max = len_str * 2 + 1;
//    len_str++;
//    char str_1[len_str], str_2[len_str], str_3[len_str_max], buffer[len_str_max];
//    printf("Введите значения строк через пробел\n");
//    scanf("%s", &str_1);
//    scanf("%s", &str_2);
//    for (int i = 0; i < len_str; i++) {
//        str_3[i] = str_1[i];
//    }
//    printf("Введите количество первых элементов из 2 строки, которых вы хотите объединить с 1 строкой\n");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        buffer[i] = str_2[i];
//    }
//    strcat(str_3, buffer);
//    printf("%s", str_3);


////    ПУНКТ №4

//    int len_str, n, k = 0;
//    printf("Введите максимальное кол-во элментов в строках\n");
//    scanf("%d", &len_str);
//    len_str++;
//    char str_1[len_str], str_2[len_str];
//    printf("Введите значения строк через пробел\n");
//    scanf("%s", &str_1);
//    scanf("%s", &str_2);
//    printf("Введите количество элементов, которые вы хотите сравнить\n");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        if (str_1[i] == str_2[i]) {
//            k++;
//        }
//    }
//    if (k == n){
//        printf("+");
//    }
//    else{
//        printf("-");
//    }


//// ПУНКТ №6

//    int len_str, n, len_str_max;
//    printf("Введите максимальное кол-во элментов в строках\n");
//    scanf("%d", &len_str);
//    len_str_max = len_str * 2 + 1;
//    len_str++;
//    char str_1[len_str], str_2[len_str_max], buffer[len_str];
//    printf("Введите значения строк через пробел\n");
//    scanf("%s", &str_1);
//    scanf("%s", &str_2);
//    printf("Введите количество первых элементов из 1 строки, которых вы хотите копировать во 2 строку\n");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        buffer[i] = str_1[i];
//    }
//    strcat(str_2, buffer);
//    printf("%s", str_2);


////  ПУНКТ №11

//    int len_str, k = 0, n, kmax = 0;
//    printf("Введите максимальное кол-во элментов в строках\n");
//    scanf("%d", &len_str);
//    len_str++;
//    char str_1[len_str], str_2[len_str];
//    printf("Введите значения строк через пробел\n");
//    scanf("%s", &str_1);
//    scanf("%s", &str_2);
//    printf("Введите количество элементов, которые хотите сравнить\n");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        if (str_1[i] == str_2[i]) {
//            k++;
//            if (kmax < k){
//                kmax = k;
//            }
//        }
//        else{
//            k = 0;
//        }
//    }
//    printf("%d", kmax);


////  ПУНКТ №13

//    int len_str;
//    printf("Введите максимальное кол-во элментов в строках\n");
//    scanf("%d", &len_str);
//    len_str++;
//    char str_1[len_str], str_2[len_str];
//    printf("Введите значения строк через пробел\n");
//    scanf("%s", &str_1);
//    scanf("%s", &str_2);
//    char *del = strtok(str_1, str_2);
//    while (del != NULL)
//    {
//        printf("%s\n", del);
//        del = strtok (NULL, str_2);
//    }
    return 0;
}
