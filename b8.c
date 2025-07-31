#include <stdio.h>

int main() {
    int m3;
    int total = 0;
    printf("Nhap so met khoi nuoc: ");
    scanf("%d", &m3);
    if (m3 < 0) {
        printf("So met khoi khong hop le\n");
        return 0;
    }
    if (m3 <= 10)
        total = m3 * 6000;
    else if (m3 <= 20)
        total = 10 * 6000 + (m3 - 10) * 7000;
    else if (m3 <= 30)
        total = 10 * 6000 + 10 * 7000 + (m3 - 20) * 8500;
    else
        total = 10 * 6000 + 10 * 7000 + 10 * 8500 + (m3 - 30) * 10000;
    printf("So tien phai tra: %d VND\n", total);
    return 0;
}
