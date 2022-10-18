#include <stdio.h>
#include <stdlib.h>

int main() {
    char *array = malloc(4 * sizeof(char));
    array[0] = 'a';
    array[1] = 'b';
    array[2] = 'c';
    array[3] = 'd';
    for (int i = 0; i < 4; i++) {
        printf("%c ", *(array + i));
    }
    free(array);
    return 0;
}
