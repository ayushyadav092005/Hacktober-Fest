#include <stdio.h>

int main() {
    
    int numbers = {10, 20, 30, 40};  
    numbers[4] = 100;  
   
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
