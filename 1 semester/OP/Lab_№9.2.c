#include <stdio.h>
#include <stdlib.h> 

int sub_cost(float talk_time, float payment, float cost_over_limit){
    if (cost_over_limit <= (499 / payment)){
        printf("Неверно указана стоимость минуты, превышающей лимит");
        exit(1);
    }
    if (talk_time <= 499){
        printf("Итоговая стоимость обслуживания составляет: %g", payment);
    }
    if (talk_time > 499){
        float final_cost;
        final_cost = payment + ((talk_time - 499) * cost_over_limit);
        printf("Итоговая стоимость обслуживания составляет: %g", final_cost);
    }
}

int main(){
    float talk_time, payment, cost_over_limit;
    printf("Введите кол-во потраченных минут, стоимость тарифа, и стоимость минуты при превышении лимита:\n");
    scanf("%f %f %f", &talk_time, &payment, &cost_over_limit);
    sub_cost(talk_time, payment, cost_over_limit);
    return 0;
}