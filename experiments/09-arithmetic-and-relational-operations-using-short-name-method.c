#include<stdio.h>
int main()
{
    int a, b, x;
    printf(" Enter two values : ");
    scanf("%d %d", &a, &b);

    printf("\n Arithmetic operations : ");

    x = a;
    x += b;
    printf("\n Addition = %d", x);

    x = a;
    x -= b;
    printf("\n Subtraction = %d", x);

    x = a;
    x *= b;
    printf("\n Multiplication = %d", x);

    x = a;
    x /= b;
    printf("\n Division = %d", x);

    printf("\n\n Relational operators : ");
    printf("\n a>b = %d", a > b);
    printf("\n a<b = %d", a < b);
    printf("\n a==b = %d", a == b);
    printf("\n a!=b = %d", a != b);
    printf("\n a>=b = %d", a >= b);
    printf("\n a<=b = %d", a <= b);

    return 0;
}
