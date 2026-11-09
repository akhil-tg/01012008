#include<stdio.h>
int main()
{
    int a, b;

    printf(" Enter two numbers : ");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf(" a is smaller");
    }
    else
    {
        printf(" b is smaller");
    }

    return 0;
}
