#include <stdio.h>

int main() {
    int a;

    printf("Enter your age: ");
    scanf("%d", &a);

    if (a >= 18) {
        printf("You are eligible for a license.\n");
    } else {
        printf("Sorry! You are not eligible for a license.\n");
    }

    return 0;
}
