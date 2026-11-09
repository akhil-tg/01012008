#include<stdio.h>
int main()
{
    float basic_salary, DA, HRA, conveyance, gross_salary;

    printf(" Enter basic salary : ");
    scanf("%f", &basic_salary);

    if (basic_salary >= 5000)
    {
        DA = 1.10 * basic_salary;
        HRA = 0.20 * basic_salary;
        conveyance = 500.00;
    }
    else if (basic_salary >= 3000 && basic_salary < 5000)
    {
        DA = 1.00 * basic_salary;
        HRA = 0.15 * basic_salary;
        conveyance = 400.00;
    }
    else if (basic_salary >= 3000)
    {
        DA = 0.90 * basic_salary;
        HRA = 0.10 * basic_salary;
        conveyance = 300.00;
    }
    else
    {
        printf(" Invalid value");
    }

    gross_salary = basic_salary + DA + HRA + conveyance;
    printf(" Gross salary = %.2f", gross_salary);

    return 0;
}
