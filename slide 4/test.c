#include <stdio.h>
int main()
{
    int j, i;
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 2; i <= 5; i++)
        {
            printf("%2d * %2d = %3d\t", i, j, i * j);
        }
printf("\n");
    }
    printf("\n");
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 6; i <= 9; i++)
        {
            printf("%2d * %2d = %3d\t", i, j, i * j);
        }
printf("\n");
    }
    return 0;
}