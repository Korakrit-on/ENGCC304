#include <stdio.h>

int main() {
    float w, h, area;
    printf("Enter Weight: ");
    scanf("%f", &w);
    printf("Enter height: ");
    scanf("%f", &h);

    area = (w * h) / 2;

    printf("area = %.2f\n", area);
    return 0;
}