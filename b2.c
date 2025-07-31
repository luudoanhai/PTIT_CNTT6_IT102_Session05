#include <stdio.h>

int main() {
    float average;
    printf("Enter average score: ");
    scanf("%f", &average);
    if (average >= 8)
        printf("Hoc luc gioi\n");
    else if (average >= 6.5)
        printf("Hoc luc kha\n");
    else if (average >= 5)
        printf("Hoc luc trung binh\n");
    else
        printf("Hoc luc yeu\n");
    return 0;
}
