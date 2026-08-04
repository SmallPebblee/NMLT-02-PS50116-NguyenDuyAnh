#include <stdio.h>
#define n 5
int main()
{
    int B[n];
    int C[n][n] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("C[%d][%d] = %d\t", i, j, C[i][j]);
        }
        printf("\n");
    }
    printf("nhap cac phan tu cua mang B:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    printf("\ncac phan tu cua mang B la:\n");

    for (int i = 0; i < n; i++)
    {
        printf("B[%d] = %d\n", i, B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (B[j] < B[i])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    printf("\ncac phan tu cua mang B sau khi sap xep tang dan la:\n");
    for (int i = 0; i < n; i++)
    {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}
