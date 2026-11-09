#include<stdio.h>
int main()
{
    float r, area, circumference;

    printf(" Enter radius : ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf(" Area = %f", area);
    printf("\n Circumference = %f", circumference);

    return 0;
}
