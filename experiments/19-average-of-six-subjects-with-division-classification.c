#include<stdio.h>
int main()
{
    float marks[6], sum = 0, avg;
    int i = 0, has_failed = 0;

    printf(" Enter the marks for 6 subjects : \n");
    do
    {
        printf(" Subject %d : ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] < 35.0)
        {
            has_failed = 1;
        }
        sum += marks[i];
        i++;
    } while (i < 6);

    avg = sum / 6.0;

    printf("\n ... AVERAGE RESULT ... \n");
    printf(" Average mark : %.2f\n", avg);

    printf(" Result : ");
    if (has_failed)
    {
        printf(" Fail (marks in one or more subjects are less than 35)\n");
    }
    else if (avg >= 75.0 && avg <= 100.0)
    {
        printf(" Distinction\n");
    }
    else if (avg >= 60.0 && avg < 75.0)
    {
        printf(" First Division\n");
    }
    else if (avg >= 50.0 && avg < 60.0)
    {
        printf(" Second Division\n");
    }
    else if (avg >= 35.0 && avg < 50.0)
    {
        printf(" Third Division\n");
    }
    else
    {
        printf(" Fail\n");
    }

    return 0;
}
