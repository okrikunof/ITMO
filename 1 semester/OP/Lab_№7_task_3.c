#include <stdio.h>

union {
    struct {
        int num_lock : 1;
        int caps_lock : 1;
        int scroll_lock : 1;
    };
    char status;
}code;

int main() {
    scanf("%x", &code.status);
    
    if (code.num_lock)
        printf("num_lock is on\n");
    else
        printf("num_lock is off\n");

    if (code.caps_lock)
        printf("caps_lock is on\n");
    else
        printf("caps_lock is off\n");

    if (code.scroll_lock)
        printf("scroll_lock is on\n");
    else
        printf("scroll_lock is off\n");

    return 0;
}
