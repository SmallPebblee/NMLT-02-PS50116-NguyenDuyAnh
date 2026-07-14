#include <stdio.h>
#define PI 3.14
int main() {
 //nhap dai, rong tinh chu vi, dien tich hinh chu nhat
 float dai, rong, chuViHCN, dienTichHCN,r,chuViHT,dientichHT;
 printf("Nhap chieu dai, chieu rong: ");
 scanf("%f%f", &dai,&rong);
 chuViHCN = (dai + rong)*2;
 dienTichHCN = dai * rong;
 printf("dai: %.2f\nRong: %.2f\nChu vi: %.2f\nDien tich: %.2f", dai, rong, chuViHCN, dienTichHCN);

 printf("Nhap ban kinh: ");
 scanf("%f", &r);
 chuViHT = 2*PI*r;
 dientichHT = r*r*PI;
 printf("Hinh tron\nBan kinh: %.2f\nChu vi: %.2f\nDien tich: %.2f", r, chuViHT, dientichHT);
    return 0;
}