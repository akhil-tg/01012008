#include<stdio.h>
int main()
{
    int a, b;

    printf(" Enter two numbers : ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("a is greater") : printf("b is greater or equal");

    return 0;
}
