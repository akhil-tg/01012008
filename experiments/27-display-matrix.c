#include<stdio.h>
int main()
{
    int r, c, i, j;
    int matrix[10][10];

    printf(" Enter number of rows and columns : ");
    scanf("%d %d", &r, &c);

    printf(" Enter elements of the matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf(" The entered matrix is : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
