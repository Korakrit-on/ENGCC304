#include <stdio.h>

int main() {
    int empID[10];
    float hours, rate, total;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%d", &empID);

    printf("Input the working hrs: ");
    scanf("%f", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &rate);

    total = hours * rate;
    printf("----\n");
    printf("Employee ID: %d\n", empID);
    printf("Total income: %.2f\n", total);

    return 0;
}