#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("So lon hon la: %d\n", a);
    else if (b > a)
        printf("So lon hon la: %d\n", b);
    else
        printf("Hai so bang nhau\n");
    return 0;
}
