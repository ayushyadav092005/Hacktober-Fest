#include <stdio.h>

int main() {
    char grade;
    printf("Enter your grade (A, B, C, D, or F): ");
    scanf("%c", &grade);
    
    switch(grade) {
        case 'A':
            printf("\nExcellent!");
            break;
        case 'B':
            printf("\nGood job!");
            break;
        case 'C':
            printf("\nAverage performance.");
            break;
        case 'D':
            printf("\nNeed improvement.");
            break;
        case 'F':
            printf("\nFailed.");
            break;
        default:
            printf("\nInvalid Input!")

    }
    return 0;
}
