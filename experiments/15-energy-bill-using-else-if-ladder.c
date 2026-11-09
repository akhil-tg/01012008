#include<stdio.h>
int main()
{
    float start, end, units, bill;

    printf(" Enter starting meter reading : ");
    scanf("%f", &start);
    printf(" Enter ending meter reading : ");
    scanf("%f", &end);

    units = end - start;

    if (units > 200 && units <= 500)
    {
        bill = units * 2.50;
    }
    else if (units >= 100 && units < 200)
    {
        bill = units * 2.50;
    }
    else
    {
        bill = units * 1.50;
    }

    printf("\n Units consumed = %f", units);
    printf("\n Energy bill = Rs %f", bill);

    return 0;
}
