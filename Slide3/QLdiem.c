#include <stdio.h>
int main(){
 float diem;
 printf("nhap diem: ");
 scanf("%f", &diem);
 // kiểm tra hợp lệ
 if(diem < 0.0f || diem > 10.0f){
    printf("diem khong hop le\n");
    return 0;
 }

 // xet dau/rot
 if(diem >= 5.0f){
   printf("dau\n");
 } else {
   printf("rot\n");
 }

 // xep loai
 // 0 <= yeu < 5.0 <= trung binh < 7.0 <= kha < 8.0 <= gioi <= 10.0
 if(diem >= 8.0f){
    printf("gioi\n");
 } else if(diem >= 7.0f){
    printf("kha\n");
 } else if(diem >= 5.0f){
    printf("trung binh\n");
 } else {
    printf("yeu\n");
 }

 return 0;
}