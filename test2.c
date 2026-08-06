#include <stdio.h>

// 2. Hàm tính điểm trung bình
float tinhTrungBinh(float toan, float ly, float hoa) {
    return (toan + ly + hoa) / 3.0;
}

// 3. Hàm xếp loại dựa trên điểm trung bình
void xepLoai(float dtb) {
    printf("diem trung binh: %.2f\n", dtb);
    printf("xep loai: ");
    
    if (dtb >= 8.0) {
        printf("gioi\n");
    } else if (dtb >= 6.5) {
        printf("kha\n");
    } else if (dtb >= 5.0) {
        printf("trung binh\n");
    } else {
        printf("yeu\n");
    }
}

int main() {
    float toan, ly, hoa;
    char tiepTuc;

    // 4. Lặp lại chương trình
    do {
        printf("\n--- CHƯƠNG TRÌNH QUẢN LÝ ĐIỂM HỌC SINH ---\n");
        
        // 1. Nhập Toán, Lý, Hóa (có kiểm tra điều kiện điểm từ 0 đến 10)
        do {
            printf("Nhập điểm Toán (0 - 10): ");
            scanf("%f", &toan);
        } while (toan < 0 || toan > 10);

        do {
            printf("Nhập điểm Lý (0 - 10): ");
            scanf("%f", &ly);
        } while (ly < 0 || ly > 10);

        do {
            printf("Nhập điểm Hóa (0 - 10): ");
            scanf("%f", &hoa);
        } while (hoa < 0 || hoa > 10);

        // Gọi hàm tính trung bình
        float dtb = tinhTrungBinh(toan, ly, hoa);

        // Gọi hàm xếp loại và in kết quả
        xepLoai(dtb);

        // Hỏi người dùng có muốn tiếp tục không
        printf("\nBạn có muốn nhập tiếp không? (y/n): ");
        scanf(" %c", &tiepTuc); // Khoảng trắng trước %c để bỏ qua ký tự enter thừa

    } while (tiepTuc == 'y' || tiepTuc == 'Y');

    printf("\nĐã thoát chương trình. Tạm biệt!\n");
    return 0;
}
