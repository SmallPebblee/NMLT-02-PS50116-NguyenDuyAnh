#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("+-------------------------------+\n");
        printf("|   ==================menu=================  |\n");
        printf("+-------------------------------+\n");
        printf("| 0. thoat ung dung                          |\n");
        printf("| 1. kiem tra so nguyen                      |\n");
        printf("| 2. tim uoc chung va boi so chung cua 2 so  |\n");
        printf("| 3. tinh tien cho quan karaoke              |\n");
        printf("| 4. Tinh tien dien                          |\n");
        printf("| 5. chuc nang doi tien                      |\n");
        printf("| 6. tinh lai suat vay ngan hang vay tra gop |\n");
        printf("| 7. vay tien mua xe                         |\n");
        printf("| 8. sap xep thong tin sinh vien             |\n");
        printf("| 9. xay dung game poly lott                 |\n");
        printf("| 10. tinh toan phan so                      |\n");
        printf("+-------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 10): ");
        scanf("%d", &chon); // chon :2
        switch (chon)
        {
        case 0:
            printf("Ban da chon chuc nang: 0. Thoat chuong trinh.\n");
            // thêm các lệnh
            break;
        case 1:
            printf("Ban da chon chuc nang: 1. kiem tra so nguyen.\n");
            break;
        case 2:
            printf("Ban da chon chuc nang: 2. tim uoc chung va boi so chung cua 2 so.\n");
            break;
        case 3:
            printf("Ban da chon chuc nang: 3. tinh tien cho quan karaoke.\n");
            break;
        case 4:
            printf("ban da chon chuc nang: 4. Tinh tien dien.\n");
            break;
        case 5:
            printf("ban da chon chuc nang: 5. chuc nang doi tien.\n");
            break;
        case 6:
            printf("ban da chon chuc nang: 6. tinh lai suat vay ngan hang vay tra gop.\n");
            break;
        case 7:
            printf("ban da chon chuc nang: 7. vay tien mua xe\n");
            break;
        case 8:
            printf("ban da chon chuc nang: 8. sap xep thong tin sinh vien\n");
            break;
        case 9:
            printf("ban da chon chuc nang: 9. xay dung game poly lott\n");
            break;
        case 10:
            printf("ban da chon chuc nang: 10. tinh toan phan so\n");
            break;

        default:
            printf("Ban phai chon chuc nang 0 - 10\n");
            break;
        }
    } while (chon != 0);

    return 0;
}