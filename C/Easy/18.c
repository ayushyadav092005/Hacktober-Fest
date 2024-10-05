#include <stdio.h>

struct student {
    char name[20];
    int age;
};

int main() {
    struct student s[3] = {{'John', 20}, {'Alice', 22}, {'Bob', 23}};
    printf("Name: %s, Age: %d", s[4].name, s[4].age);
    return 0;
}