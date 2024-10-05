

#include <stdio.h>

int sum(int a, int b, int c) {
    return a + b +c; 

}

int main() {
    int result = sum(3, 4, 5);
    printf("Sum: %d\n", result);
    return 0;
}