#include <stdio.h>
#include <stdlib.h>

void count(char str[], int len_str){
    int num_counter = 0, low_counter = 0, high_counter = 0;
    for (int i = 0; i < len_str; i++){
        if ((str[i] >= '1') && (str[i] <= '9')){
            num_counter++;
        }
        else if ((str[i] >= 'a') && (str[i] <= 'z')){
            low_counter++;
        }
        else if ((str[i] >= 'A') && (str[i] <= 'Z')){
            high_counter++;
        }
    }
    printf("Кол-во цифр: %d\nКол-во строчных букв: %d\nКол-во прописных букв: %d", num_counter, low_counter, high_counter);
    free(str);
} 

int main() {
    int len_str;
    printf("Введите кол-во элементов в строке:\n");
    scanf("%d", &len_str);
    char *str = (char *) malloc(len_str * sizeof (char));
    printf("Введите строку:\n");
    scanf("%s", str);
    count(str, len_str);
    return 0;
}