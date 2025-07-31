#include <stdio.h>

int main() {
    int age;
    float fare = 20000, final_fare;
    printf("Nhap tuoi hanh khach: ");
    scanf("%d", &age);
    if (age < 0 || age > 120) {
        printf("Tuoi khong hop le\n");
    } else if (age < 6) {
        final_fare = 0;
        printf("Mien phi ve\n");
    } else if (age <= 18) {
        final_fare = fare * 0.5;
        printf("Tien ve: %.0f VND\n", final_fare);
    } else if (age <= 60) {
        final_fare = fare;
        printf("Tien ve: %.0f VND\n", final_fare);
    } else {
        final_fare = fare * 0.7;
        printf("Tien ve: %.0f VND\n", final_fare);
    }
    return 0;
}
