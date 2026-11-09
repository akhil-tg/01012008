#include<stdio.h>
int main()
{
    int choice;
    int x, y;
    float a, b, sum, sub, mul, div;

    printf(" Menu\n");
    printf(" * * * ..... * \n");
    printf(" 1. Addition\n");
    printf(" 2. Subtraction\n");
    printf(" 3. Multiplication\n");
    printf(" 4. Division\n");
    printf(" 5. Remainder\n");
    printf(" 6. Largest of two numbers\n");
    printf(" 7. Exit\n");
    printf(" Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf(" Enter two numbers : ");
            scanf("%f %f", &a, &b);
            sum = a + b;
            printf(" Addition = %.2f", sum);
            break;
        case 2:
            printf(" Enter two numbers : ");
            scanf("%f %f", &a, &b);
            sub = a - b;
            printf(" Subtraction = %.2f", sub);
            break;
        case 3:
            printf(" Enter two numbers : ");
            scanf("%f %f", &a, &b);
            mul = a * b;
            printf(" Multiplication = %.2f", mul);
            break;
        case 4:
            printf(" Enter two numbers : ");
            scanf("%f %f", &a, &b);
            div = a / b;
            printf(" Division = %.2f", div);
            break;
        case 5:
            printf(" Enter two numbers : ");
            scanf("%d %d", &x, &y);
            printf(" Remainder = %d", x % y);
            break;
        case 6:
            printf(" Enter two numbers : ");
            scanf("%d %d", &x, &y);
            if (x > y)
                printf(" Largest = %d", x);
            else
                printf(" Largest = %d", y);
            break;
        case 7:
            printf(" Exit");
            break;
        default:
            printf(" Invalid choice");
    }

    return 0;
}
