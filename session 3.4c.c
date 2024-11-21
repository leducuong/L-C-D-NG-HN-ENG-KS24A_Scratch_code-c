#include <stdio.h>

int main() {
    double diemToan, diemVan, diemAnh;
    double tongDiem, diemTrungBinh;

    printf("Nhap diem Toan: ");
    scanf("%lf", &diemToan);

    printf("Nhap diem Van: ");
    scanf("%lf", &diemVan);

    printf("Nhap diem Anh: ");
    scanf("%lf", &diemAnh);

    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem / 3;

    printf("Tong diem: %.2lf\n", tongDiem);
    printf("Ðiem trung binh: %.2lf\n", diemTrungBinh);

    return 0;
}
