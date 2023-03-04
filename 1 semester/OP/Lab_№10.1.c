#include <stdio.h>
#include <stdlib.h>

void NOD(unsigned int a1, unsigned int a2){
    if ((a1 == 0) || (a2 == 0)){
        printf("Одно из чисел или оба числа равны нулю, поэтому нельзя определить НОД и НОК\n");
        exit(1);
    }
    unsigned int min_a = (a1 > a2) ? a2 : a1;
    for (min_a; min_a> 0; min_a--){
        if ((a1 % min_a == 0) && (a2 % min_a == 0)){
            printf("НОД = %u\n", min_a);
            break;
        }
    }
}

void NOK(unsigned int a1, unsigned int a2){
    unsigned int max_a = (a1 > a2) ? a1 : a2;
    for (max_a; max_a < 4294967295; max_a++){
        if ((max_a % a1 == 0) && (max_a % a2 == 0)){
            printf("НОК = %u", max_a);
            break;
        }
    }
}

int main(){
    unsigned int a1, a2;
    printf("Введите два натуральных числа:\n");
    scanf("%u %u", &a1, &a2);
    NOD(a1, a2);
    NOK(a1, a2);
    return 0;
}
