#include <stdio.h>
#include <string.h>
int main()
{
    char hoTen[20]; //= {'a', 'b', 'c'};
    char ngheNghiep[20];
    printf("nhap ho ten: ");
    gets(hoTen);

    printf("nhap nghe nghiep: ");
    gets(ngheNghiep);

    for (int i = 0; i < strlen(hoTen); i++)
    {
        printf("kt: %c\n", hoTen[i]);
    }
    printf("\n");
    for (int i = 0; i < strlen(ngheNghiep); i++)
    {
        printf("kt: %c\n", ngheNghiep[i]);
    }
    return 0;
}