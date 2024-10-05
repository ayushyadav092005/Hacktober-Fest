#include <stdio.h>

int main() {
    
    int array1[3] = {1, 2, 3}; 
    int array2[3] = {4, 5, 6}; 
    int concatenated[6];     

    
    for (int i = 0; i < 3; i++) {
       concatenated[i] = array1[i];
    }

   
    for (int i = 0; i < 3; i++) {
        concatenated[i] = array2[i];
    }

 
    for (int i = 0; i < 3; i++) {
        printf("%d ", concatenated[i]);
    }
    printf("\n");

    return 0;
}
