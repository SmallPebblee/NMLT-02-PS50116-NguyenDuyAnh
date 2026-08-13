#include <stdio.h>

int main(){
    struct PhanSo
    {
        int tuSo;
        int mauSo;
    };
    struct PhanSo ps1, ps2, tongPS, hieuPS, tichPS, thuongPS;
    //nhap phan so
    printf("Nhap phan so thu nhat:\n ");
    printf("Tu: ");
    scanf("%d", &ps1.tuSo);
    printf("Mau: ");
    scanf("%d", &ps1.mauSo);
    printf("Nhap phan so thu hai:\n ");
    printf("Tu: ");
    scanf("%d", &ps2.tuSo);
    printf("Mau: ");
    scanf("%d", &ps2.mauSo);
    //mau chung
    tongPS.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
    tongPS.mauSo = ps1.mauSo * ps2.mauSo;
    printf("Tong hai phan so la: %d/%d\n", tongPS.tuSo, tongPS.mauSo);
    scanf("%d/%d", &hieuPS.tuSo, &hieuPS.mauSo);




    return 0;
}

// //viet ham nhap phan so => tra phan so moi nhap ra ten ham
// struct PhanSo nhapPhanSo() {
//     struct PhanSo ps;
// ps.tuSo = 5;
// ps.mauSo = 10;
// return ps;
// }