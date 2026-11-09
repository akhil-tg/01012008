#include<stdio.h>
int main()
{
    int a, b, c, result;

    printf(" Enter a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    result = (a + b) * c;

    printf(" Result = %d", result);

    return 0;
}
