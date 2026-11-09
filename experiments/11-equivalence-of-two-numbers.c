#include<stdio.h>
int main()
{
    int a, b;

    printf(" Enter two integers a and b : ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("\n 1. Condition (a==b) is TRUE");
    else
        printf("\n 1. Condition (a==b) is FALSE");

    if (a - b == 0)
        printf("\n 2. Condition (a-b==0) is TRUE");
    else
        printf("\n 2. Condition (a-b==0) is FALSE");

    if (b != 0)
    {
        if (a / b == 1)
            printf("\n 3. Condition (a/b==1) is TRUE");
        else
            printf("\n 3. Condition (a/b==1) is FALSE");
    }
    else
        printf("\n 3. Division by zero is not possible");

    return 0;
}
