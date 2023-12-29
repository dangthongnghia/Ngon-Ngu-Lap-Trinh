// Bài tập về đổi đồng xu bằng mảng một chiều

#include <stdio.h>

void doiTien(int n) {
    int dongcent[] = {25, 10, 5, 1};
    int soLuongXu[4] = {0};
    int i, sum;
    for ( i = 0; i< 4; i++ ) {
        soLuongXu[i] = n / dongcent[i];
        n %= dongcent[i];
    }
    sum = soLuongXu[0]+soLuongXu[1]+soLuongXu[2]+soLuongXu[3];
    printf("So luong dong xu 25 cent: %d\n", soLuongXu[0]);
    printf("So luong dong xu 10 cent: %d\n", soLuongXu[1]);
    printf("So luong dong xu 5 cent: %d\n", soLuongXu[2]);
    printf("So luong dong xu 1 cent: %d\n", soLuongXu[3]);
    printf("Tong so dong xu la %d \n", sum);
}

int main() {
    int soTien;
    printf("Nhap so tien can doi: ");
    scanf("%d", &soTien);
    doiTien(soTien);

    return 0;
}
