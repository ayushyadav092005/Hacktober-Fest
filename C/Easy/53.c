
#include <stdio.h>
void func(int a) {
    printf("Value: %d\n", a);
}
int main() {
    void (*ptr)= func();
    ptr(5);
    return 0;
}
