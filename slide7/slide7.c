#include <stdio.h>
#include <string.h>
int main()
{
    char hoTen[20]; //= {'a', 'b', 'c'};
    char ngheNghiep[20];
    printf("nhap ho ten: ");
    scanf("%s", hoTen);
    printf("nhap nghe nghiep: ");
    scanf("%s", ngheNghiep);

    for (int i = 0; i < 20; i++)
    {
        printf("kt: %c\n", hoTen[i]);
    }
    printf ("\n");
    for (int i = 0; i < 20; i++)
    {
        printf("kt: %c\n", ngheNghiep[i]);
    }
    return 0;
}