#include <stdio.h>

struct person {
    int age;
    float height;
}p1;

int main() {
    struct person p1;
    p1.age = 25;
    p1.height = 5.9;
    printf("Age: %d, Height: %.1f", p1.age, p1.height);
    return 0;
}