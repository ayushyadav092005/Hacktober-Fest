#include <stdio.h>
#define MAX 10
void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int colFirst, int rowSecond, int colSecond)
{
    for (int i = 0; i <= rowFirst; i++)
    {
        for (int j = 0; j <= colSecond; j++)
        {
            for (int k = 0; k <= colFirst; k++)
        }
    }
}
}
void displayMatrix(int matrix[MAX][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rowFirst, colFirst, rowSecond, colSecond;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
    if (colFirst != rowSecond)
    {
        printf("Error: Number of columns in first matrix must equal number of rows in second.\n");
        return 1;
    }
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowFirst; i++)
    {
        for (int j = 0; j < colFirst; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowSecond; i++)
    {
        for (int j = 0; j < colSecond; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
    multiplyMatrices(first, second, result, rowFirst, colFirst, rowSecond, colSecond);
    printf("Resultant matrix:\n");
    displayMatrix(result, rowFirst, colSecond);
    return 0;
}
