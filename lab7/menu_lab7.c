#include <stdio.h>
#include <string.h>
int main() {
//     //+---------------------------------------------------+
// |             MENU CHƯƠNG TRÌNH LAB 7               |
// +---------------------------------------------------+
// | 1. Đếm Nguyên âm và Phụ âm trong chuỗi            |
// | 2. Đăng nhập hệ thống (User & Password)           |
// | 3. Sắp xếp danh sách Chuỗi theo thứ tự Alphabet   |
// | 4. Chuyển đổi số Thập phân sang Nhị phân (Chuỗi)  |
// | 5. Thoát chương trình                             |
// +---------------------------------------------------+
// >> Xin mời chọn chức năng (1-5): 

    int chon;
    {
        printf ("          +-------------------------------+           \n");
        printf ("|      ==================menu=================      |\n");
        printf ("| 1. dem nguyen am va phu am trong chuoi            |\n");
        printf ("| 2. dang nhap he thong (User & Password)           |\n");
        printf ("| 3. sap xep danh sach chuoi theo thu tu Alphabet   |\n");
        printf ("| 4. chuyen doi so thap phan sang nhi phan (chuoi)  |\n");
        printf ("| 5. thoat chuong trinh                             |\n"); 
        printf ("ban hay chon chuc nang 1-5: ");
        scanf ("%d", &chon);
    }

    return 0;
}

void chucnang1(){
    printf ("Chuc nang 1: Dem Nguyen am va Phu am trong chuoi\n");
}

void chucnang2(){
    printf ("Chuc nang 2: Dang nhap he thong (User & Password)\n");
char userSys[] = "admin"; char passSys[] = "123456";
    char user[20], password[20];
    printf("User: "); fgets(user,sizeof(user),stdin);
    printf("Password: "); fgets(password,sizeof(password),stdin);
    printf("%d\n",strcmp(userSys,user));
}