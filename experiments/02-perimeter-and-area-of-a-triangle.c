#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, area, perimeter;

    printf(" Enter three sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf(" Perimeter = %f", perimeter);
    printf("\n Area = %f", area);

    return 0;
}
