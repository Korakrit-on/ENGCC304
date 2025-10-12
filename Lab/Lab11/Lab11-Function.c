#include <stdio.h>
#include <math.h>

int armStrong(int n) {
    int sum = 0, i = n, digits = 0;

    // นับจำนวนหลัก
    while (i != 0) {
        digits++;
        i /= 10;
    }

    i = n;
    while (i != 0) {
        int d = i % 10;
        sum += (int)pow(d, digits);
        i /= 10;
    }

    return sum == n;
}

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (armStrong(num))
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}