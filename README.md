# 📘 C Programming Lab Record

A complete collection of **21 C programming experiments** — originally handwritten in a lab record book, carefully digitized into clean, copy-ready code.

✨ **Every program below has a 1-click copy button on GitHub** — just hover over the code block and press the 📋 button.

---

## 🚀 Quick Start

```bash
# Compile with GCC
gcc <filename>.c -o program && ./program

# Or run with Turbo C++ (as written in the record)
# Alt+F9 to compile, Ctrl+F9 to run
```

---

## 📑 Index

| No. | Experiment |
|:---:|------------|
| **1** | [C program to print the size of different data types](#experiment-1-c-program-to-print-the-size-of-different-data-types) |
| **2** | [Perimeter and area of a triangle](#experiment-2-perimeter-and-area-of-a-triangle) |
| **3** | [Area and circumference of a circle](#experiment-3-area-and-circumference-of-a-circle) |
| **4** | [Convert fahrenheit to celsius](#experiment-4-convert-fahrenheit-to-celsius) |
| **5** | [Simple interest](#experiment-5-simple-interest) |
| **6** | [Swap two numbers without using a temporary variable](#experiment-6-swap-two-numbers-without-using-a-temporary-variable) |
| **7** | [Swap two numbers using a temporary variable](#experiment-7-swap-two-numbers-using-a-temporary-variable) |
| **8** | [Check a > b using the conditional operator](#experiment-8-check-a--b-using-the-conditional-operator) |
| **9** | [Arithmetic and relational operations using short-name method](#experiment-9-arithmetic-and-relational-operations-using-short-name-method) |
| **10** | [Evaluate the expression (a+b)*c](#experiment-10-evaluate-the-expression-abc) |
| **11** | [Equivalence of two numbers](#experiment-11-equivalence-of-two-numbers) |
| **12** | [Largest of two numbers](#experiment-12-largest-of-two-numbers) |
| **13** | [Maximum of three numbers](#experiment-13-maximum-of-three-numbers) |
| **14** | [Smallest of two numbers](#experiment-14-smallest-of-two-numbers) |
| **15** | [Energy bill using else-if ladder](#experiment-15-energy-bill-using-else-if-ladder) |
| **16** | [Leap year or not](#experiment-16-leap-year-or-not) |
| **17** | [Odd or even](#experiment-17-odd-or-even) |
| **18** | [Gross salary of an employee](#experiment-18-gross-salary-of-an-employee) |
| **19** | [Average of six subjects with division classification](#experiment-19-average-of-six-subjects-with-division-classification) |
| **20** | [Day of a week using switch case](#experiment-20-day-of-a-week-using-switch-case) |
| **21** | [Menu driven arithmetic calculations using switch case](#experiment-21-menu-driven-arithmetic-calculations-using-switch-case) |

---

## Experiment 1: C program to print the size of different data types

> **Aim:** To write a C program to print the size of different data types.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    printf(" SIZE OF DATA TYPES : \n\n");
    printf(" Size of int = %d bytes\n", sizeof(int));
    printf(" Size of char = %d bytes\n", sizeof(char));
    printf(" Size of float = %d bytes\n", sizeof(float));
    printf(" Size of double = %d bytes\n", sizeof(double));
    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 2: Perimeter and area of a triangle

> **Aim:** To find the perimeter and area of a triangle.

```c
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a, b, c, s, area, perimeter;
    clrscr();

    printf(" Enter three sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf(" Perimeter = %f", perimeter);
    printf("\n Area = %f", area);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 3: Area and circumference of a circle

> **Aim:** To find the area and circumference of a circle.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    float r, area, circumference;
    clrscr();

    printf(" Enter radius : ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf(" Area = %f", area);
    printf("\n Circumference = %f", circumference);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 4: Convert Fahrenheit to Celsius

> **Aim:** To convert temperature in Fahrenheit to Celsius.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    float f, c;
    clrscr();

    printf(" Enter temperature in Fahrenheit : ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf(" Temperature in Celsius = %f", c);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 5: Simple interest

> **Aim:** To find the Simple Interest.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    float p, r, t, si;
    clrscr();

    printf(" Enter principal, rate and time : ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    printf(" Simple Interest = %f", si);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 6: Swap two numbers without using a temporary variable

> **Aim:** To swap two numbers without using a temporary variable.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    clrscr();

    printf(" Enter two numbers : ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf(" After swapping : a = %d, b = %d", a, b);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 7: Swap two numbers using a temporary variable

> **Aim:** To swap two numbers using a temporary variable.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, temp;
    clrscr();

    printf(" Enter two numbers : ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf(" After swapping : a = %d, b = %d", a, b);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 8: Check a > b using the conditional operator

> **Aim:** To input two numbers a and b and check a > b using the conditional operator.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    clrscr();

    printf(" Enter two numbers : ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("a is greater") : printf("b is greater or equal");

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 9: Arithmetic and relational operations using short-name method

> **Aim:** To perform arithmetic and relational operations using the short-hand method.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, x;
    clrscr();
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

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 10: Evaluate the expression (a+b)*c

> **Aim:** To evaluate the expression (a + b) * c.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, result;
    clrscr();

    printf(" Enter a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    result = (a + b) * c;

    printf(" Result = %d", result);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 11: Equivalence of two numbers

> **Aim:** To check the equivalence of two numbers.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    clrscr();

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

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 12: Largest of two numbers

> **Aim:** To find the largest of two numbers.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    clrscr();

    printf(" Enter two numbers : ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf(" a is larger");
    else
        printf(" b is larger");

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 13: Maximum of three numbers

> **Aim:** To find the maximum of three numbers.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    clrscr();

    printf(" Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf(" A is largest");
    else if (b > a && b > c)
        printf(" B is largest");
    else
        printf(" C is largest");

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 14: Smallest of two numbers

> **Aim:** To find the smallest of two numbers.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    clrscr();

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

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 15: Energy bill using else-if ladder

> **Aim:** To calculate the energy bill by reading the starting and ending meter readings using an else-if ladder.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    float start, end, units, bill;
    clrscr();

    printf(" Enter starting meter reading : ");
    scanf("%f", &start);
    printf(" Enter ending meter reading : ");
    scanf("%f", &end);

    units = end - start;

    if (units > 200 && units <= 500)
    {
        bill = units * 2.50;
    }
    else if (units >= 100 && units < 200)
    {
        bill = units * 2.50;
    }
    else
    {
        bill = units * 1.50;
    }

    printf("\n Units consumed = %f", units);
    printf("\n Energy bill = Rs %f", bill);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 16: Leap year or not

> **Aim:** To check whether a year is a leap year or not.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    clrscr();

    printf(" Enter a year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf(" Leap year");
    }
    else
    {
        printf(" Not a leap year");
    }

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 17: Odd or even

> **Aim:** To check whether a number is odd or even.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();

    printf(" Enter the number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf(" a is even");
    }
    else
    {
        printf(" a is odd");
    }

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 18: Gross salary of an employee

> **Aim:** To calculate the gross salary of an employee.

**Conditions:**

```text
Basic Salary    DA             HRA           Conveyance
>= 5000         110% of basic  20% of basic  500
> 3000 & < 5000 100% of basic  15% of basic  400
<= 3000         90% of basic   10% of basic  300
```

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    float basic_salary, DA, HRA, conveyance, gross_salary;
    clrscr();

    printf(" Enter basic salary : ");
    scanf("%f", &basic_salary);

    if (basic_salary >= 5000)
    {
        DA = 1.10 * basic_salary;
        HRA = 0.20 * basic_salary;
        conveyance = 500.00;
    }
    else if (basic_salary >= 3000 && basic_salary < 5000)
    {
        DA = 1.00 * basic_salary;
        HRA = 0.15 * basic_salary;
        conveyance = 400.00;
    }
    else if (basic_salary >= 3000)
    {
        DA = 0.90 * basic_salary;
        HRA = 0.10 * basic_salary;
        conveyance = 300.00;
    }
    else
    {
        printf(" Invalid value");
    }

    gross_salary = basic_salary + DA + HRA + conveyance;
    printf(" Gross salary = %.2f", gross_salary);

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 19: Average of six subjects with division classification

> **Aim:** To find the average of marks in six subjects and the result.

**Conditions:**

```text
Average              Result
34 & < 50            Third Division
50 & < 60            Second Division
60 & < 75            First Division
75 & 100             Distinction
Mark in any subject < 35   Fail
```

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    float marks[6], sum = 0, avg;
    int i = 0, has_failed = 0;
    clrscr();

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

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 20: Day of a week using switch case

> **Aim:** To print the day of a week using switch case.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    clrscr();

    printf(" Menu\n");
    printf(" * * * * ..... \n");
    printf(" 1. Sunday\n");
    printf(" 2. Monday\n");
    printf(" 3. Tuesday\n");
    printf(" 4. Wednesday\n");
    printf(" 5. Thursday\n");
    printf(" 6. Friday\n");
    printf(" 7. Saturday\n");
    printf(" Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf(" Sunday");
            break;
        case 2:
            printf(" Monday");
            break;
        case 3:
            printf(" Tuesday");
            break;
        case 4:
            printf(" Wednesday");
            break;
        case 5:
            printf(" Thursday");
            break;
        case 6:
            printf(" Friday");
            break;
        case 7:
            printf(" Saturday");
            break;
        default:
            printf(" Invalid choice");
    }

    getch();
}
```

[⬆ Back to top](#-contents)

---

## Experiment 21: Menu driven arithmetic calculations using switch case

> **Aim:** To write a menu driven program to perform arithmetic calculations using switch case.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    int x, y;
    float a, b, sum, sub, mul, div;
    clrscr();

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

    getch();
}
```

[⬆ Back to top](#-contents)

---

## 📄 About

- **Subject:** C Programming Lab
- **Experiments:** 21
- **Source:** Handwritten lab record ☞ digitized
- **Repository:** [akhil-tg/01012008](https://github.com/akhil-tg/01012008)

⭐ If this helped you, feel free to star the repo!