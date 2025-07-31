#include <stdio.h>

int main() {
    float income, tax;
    printf("Nhap thu nhap (trieu dong): ");
    scanf("%f", &income);
    if (income <= 5)
        tax = income * 0.05;
    else if (income <= 10)
        tax = income * 0.10;
    else
        tax = income * 0.15;
    printf("Tien thue phai dong: %.2f trieu dong\n", tax);
    return 0;
}
