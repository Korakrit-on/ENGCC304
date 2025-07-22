#include <stdio.h>

int main()
{

    char NumId[10];
    int WorkHours = 0;
    float Salary = 0.00;

    // input
    printf("Input the Employees ID (Max. 10 chars):\n");
    scanf("%s", &NumId);

    printf("Input the working hrs:\n");
    scanf("%d", &WorkHours);

    printf("Salary amount/hr:\n");
    scanf("%f", &Salary);

    // output
    Salary *= WorkHours;
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", NumId);
    printf("Salary = U$ %.2f\n", Salary);

        return 0;
}