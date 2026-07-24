#include <stdio.h>

int main() {
    printf("================ BẢNG CỬU CHƯƠNG (DÀN NGANG) ================\n\n");

    // Lần 1: In cụm bảng từ 2 đến 5
    for (int j = 1; j <= 10; j++) {
        for (int i = 2; i <= 5; i++) {
            printf("%d x %2d = %2d\t", i, j, i * j); // \t dùng để thun đều khoảng cách
        }
        printf("\n"); // Xuống dòng sau khi in xong 1 hàng ngang
    }

    printf("\n"); // Khoảng trống giữa 2 cụm bảng

    // Lần 2: In cụm bảng từ 6 đến 9
    for (int j = 1; j <= 10; j++) {
        for (int i = 6; i <= 9; i++) {
            printf("%d x %2d = %2d\t", i, j, i * j);
        }
        printf("\n"); // Xuống dòng sau khi in xong 1 hàng ngang
    }

    return 0;
}