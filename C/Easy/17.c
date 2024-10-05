#include <stdio.h>

int main() {
    int a = 10, *p;
    p = &a;
    printf("Value of a: %d", *p); // Wrong pointer dereference
    return 0;
}