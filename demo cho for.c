#include <stdio.h>
int main(){
    int n,s,i;
 //for neu biet truoc so lan lap
 //while hoac do while neu chua biet so lan lap
 //while,do while co the dung neu biet truoc so lan lap
 //for khong the dung cho truong hop khong biet truoc so lan lap
 //boi cua 4 tu 1 - 100
 for (i = 1; i <= 100; i++){
    if (i%4==0)
      printf ("%d\t",i);
 }
 //s= 1+3+5+7+...(2n+1)
  n=3;
  s=0;
 for (i=0;i<=5;i++){
    s += (2*i + 1);
    printf ("%d\t%d\n",i,s);
 }
 //in bảng cứu chương
 i=9;
 //n*i=(n*i)
 for(int j=1;j<=10;j++){
   printf("%2d * %2d=%3d\n",i,j,i*j);
 }
    return 0;
}
