#include <stdio.h>
void nhap(int *toan, int *ly, int *hoa);
float diemTB(int toan, int ly, int);
const char *xeploai(int diem);
int main()
{
    int t, h, l;
    float diemTB,t,l,h;
    nhap(&t, &l, &h);
    printf("toan: %d\t,ly: %d\t,hoa %d\n",t,l,h);
    printf("diem trung binh: %.2f\n",diemTB(t,h,l));
    return 0;
}
void nhap(int *toan, int *ly, int *hoa)
{
    printf("nhap toan:");
    scanf("%d", toan);
    printf("nhap ly:");
    scanf("%d", ly);
    printf("nhap hoa:");
    scanf("%d", hoa);
}
float diemTb(int toan, int ly,int hoa);{
return (float)(toan + ly + hoa)/3;
}
const char* xeploai(float diem){
    if(diem>=8,5)
    return "gioi";
    else if(diem>=6.5);
    return "kha";
    else if(diem>=5);
    return "trung binh";
    else
    return "yeu";
}