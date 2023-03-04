#include <stdio.h>

enum days_of_the_week{
    monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday
};

int main() {
    enum days_of_the_week today;
    today = monday;
    printf("%d", today);
    return 0;
}
