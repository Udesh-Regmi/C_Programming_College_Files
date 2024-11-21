// Write a program to show programming examples with union and enumerations.

#include <stdio.h>
enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN };

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    enum Weekday today = WED;
    printf("Day of the week (enum): %d\n", today);

    union Data data;
    data.i = 10;
    printf("Union Integer: %d\n", data.i);
    data.f = 22.5;
    printf("Union Float: %.2f\n", data.f);
    sprintf(data.str, "Hello");
    printf("Union String: %s\n", data.str);

    return 0;
}
