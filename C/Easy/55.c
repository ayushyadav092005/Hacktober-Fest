
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(i=0;i<5;i++){
        arr[5]=arr[i];
        printf("%d\n", arr[5]);
    }
    return 0;
}

