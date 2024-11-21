#include <stdio.h>
#define PI 3.14159

int main() {
    double r, chuVi, dienTich;
  
    printf("Vui long nhap bán kinh hinh tron (r): ");
    scanf("%lf", &r);

    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    printf("Chu vi hình tron: %.2lf\n", chuVi);
    printf("Dien tich hinh tron: %.2lf\n", dienTich);

    return 0;
}
