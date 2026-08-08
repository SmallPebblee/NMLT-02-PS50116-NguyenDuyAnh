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