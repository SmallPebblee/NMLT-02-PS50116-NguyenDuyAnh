#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chucnang1();
void chucnang2();
void chucnang3();
void chucnang4();

int main()
{
    int luaChon;
    do
    {
        printf("\n+-------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 7              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Dem Nguyen am va Phu am trong chuoi            |\n");
        printf("| 2. Dang nhap he thong (User & Password)           |\n");
        printf("| 3. Sap xep danh sach Chuoi theo thu tu Alphabet   |\n");
        printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi)  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
        case 1:
            chucnang1();
            break;
        case 2:
            chucnang2();
            break;
        case 3:
            chucnang3();
            break;
        case 4:
            chucnang4();
            break;
        case 5:
            printf("Thoat chuong trinh... Tam biet!\n");
            break;
        default:
            printf("Lua chon khong hop le! Vui long nhap tu 1 den 5.\n");
        }
    } while (luaChon != 5);

    return 0;
}

// void chucnang1()
// {
//     printf("Chuc nang 1: Dem Nguyen am va Phu am trong chuoi\n");
//     char strNA[] = "aeiou";
//     char s[50];
//     int demNA = 0, demPA = 0;

//     printf("Nhap chuoi: ");
//     getchar();
//     if (fgets(s, sizeof(s), stdin) != NULL)
//     {
//         size_t len = strlen(s);
//         if (len > 0 && s[len - 1] == '\n')
//         {
//             s[len - 1] = '\0';
//         }
//     }

//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         if (isalpha((unsigned char)s[i]))
//         {
//             if (strchr(strNA, tolower((unsigned char)s[i])) != NULL)
//             {
//                 demNA++;
//             }
//             else
//             {
//                 demPA++;
//             }
//         }
//     }

//     printf("Chuoi vua nhap: %s\n", s);
//     printf("So nguyen am: %d\n", demNA);
//     printf("So phu am: %d\n", demPA);
// }

void chucnang2()
{
    printf("Chuc nang 2: Dang nhap he thong (User & Password)\n");
    char userSys[] = "admin";
    char passSys[] = "123456";
    char user[20], password[20];

    printf("User: ");
    getchar();
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';

    printf("Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    if (strcmp(user, userSys) == 0 && strcmp(password, passSys) == 0)
    {
        printf("Dang nhap thanh cong!\n");
    }
    else
    {
        printf("Dang nhap that bai! Sai user hoac password.\n");
    }
}

void chucnang1()
{
    printf("Chuc nang 1: Dem Nguyen am va Phu am trong chuoi\n");
    char strNA[] = "aeiou";
    char s[50];
    int demNA = 0, demPA = 0;

    printf("Nhap chuoi: ");
    getchar();
    if (fgets(s, sizeof(s), stdin) != NULL)
    {
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n')
        {
            s[len - 1] = '\0';
        }
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)s[i]))
        {
            if (strchr(strNA, tolower((unsigned char)s[i])) != NULL)
            {
                demNA++;
            }
            else
            {
                demPA++;
            }
        }
    }

    printf("Chuoi vua nhap: %s\n", s);
    printf("So nguyen am: %d\n", demNA);
    printf("So phu am: %d\n", demPA);
}

void chucnang3()
{
    printf("Chuc nang 3: Sap xep danh sach chuoi theo thu tu Alphabet\n");
    char s[5][50];
    for (int i = 0; i < 5; i++)
    {
        printf("Nhap chuoi thu %d: ", i + 1);
        if (fgetsts(s[i], sizeof(s[i]), stdin) != NULL)
        {
            s[i][strcspn(s[i], "\n")] = '\0';
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                char temp[50];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("Danh sach chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
}

void chucnang4()
{
    printf("Chuc nang 4 chua duoc implement.\n");
}
