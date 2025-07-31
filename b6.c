#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    printf("Nhap a, b: ");
    scanf("%f%f", &a, &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op);
    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/') {
        if (b == 0) {
            printf("Loi: chia cho 0\n");
            return 0;
        }
        result = a / b;
    } else {
        printf("Loi: toan tu khong hop le\n");
        return 0;
    }
    printf("Ket qua: %.2f\n", result);
    return 0;
}
