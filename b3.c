#include <stdio.h>

int main() {
    float a, b, x;
    printf("Nhap a va b: ");
    scanf("%f%f", &a, &b);
    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        x = -b / a;
        printf("Nghiem x = %.2f\n", x);
    }
    return 0;
}
