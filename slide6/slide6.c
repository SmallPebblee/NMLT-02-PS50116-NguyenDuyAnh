#include <stdio.h>
int main()
{
    int n = 5;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        printf("nhap A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 != 0)
            A[i]++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("PT[%d] = %d\n", i + 1, A[i]);
    }

    int d = 3;
    int c = 4;
    int B[d][c];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("B[%d,%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("B[%d,%d] = %d\n", i, j, B[i][j]);
        }
    }

    return 0;
}