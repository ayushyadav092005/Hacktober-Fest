#include <iostream>
using namespace std;
int main()
{
    int A[3][3], B[3][3], C[3][3] = {0};
    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            for (int k = j; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[j][k];
            }
        }
    }
    cout << "Product of matrices A and B:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0
}
}
;
