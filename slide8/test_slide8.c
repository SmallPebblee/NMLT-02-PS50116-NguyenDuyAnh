#include <stdio.h>
int main()
{
    int n = 1;
    // char maSV1[8];
    // char tenSV1[20];
    // float diemsv1;

    // char dsMaSV[40][8];
    // char dsTenSV[40][30];
    // float dsDiemSV[40];
    // sap xep danh sach sinh vien theo diem
    // thay doi vi tri cua dsMaSV, dsTenSV
    struct SinhVien
    {
        char maSV1[8];
        char tenSV1[20];
        float diemsv1;

    } sv1, sv2;
    struct SinhVien dsSV[40];
    // nhap du lieu cho 3 sinh vien
    for (int i = 0; i < n; i++)
    {
        printf("Nhap ma sinh vien[%d]: ", i);
        gets(dsSV[i].maSV1);
        printf("Nhap ten sinh vien[%d]: ", i);
        gets(dsSV[i].tenSV1);
        printf("Nhap diem sinh vien[%d]: ", i);
        scanf("%f", &dsSV[i].diemsv1);
        getchar(); // Xóa ký tự newline còn lại trong bộ đệm
    }

    printf("xuat danh sach sinh vien vua nhap:\n");
    printf("STT  ma sinh vien    Ten sinh vien    Diem sinh vien\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-5d%-15s%-19s%-6.2f\n", i + 1, dsSV[i].maSV1, dsSV[i].tenSV1, dsSV[i].diemsv1);
    }

    return 0;
}
