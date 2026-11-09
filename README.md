<h1 align="center">📘 C Programming Lab Record</h1>
<p align="center"><i>A complete collection of <b>21 C programming experiments</b> — handwritten in a lab record book, carefully digitized into clean, copy-ready code.</i></p>

<p align="center">
  <a href="https://github.com/akhil-tg/01012008"><img alt="experiments" src="https://img.shields.io/badge/Experiments-21-blue?style=for-the-badge&color=0969da"/></a>
  <a href="https://github.com/akhil-tg/01012008"><img alt="language" src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c&color=2ea043"/></a>
  <a href="https://github.com/akhil-tg/01012008/blob/main/C_Lab_Record.pdf"><img alt="pdf" src="https://img.shields.io/badge/Full_PDF-Available-orange?style=for-the-badge&color=c95110"/></a>
</p>

<p align="center">✨ Every program below has a <b>1-click copy button</b> on GitHub — hover over a code block and press 📋</p>

---

<details>
<summary>🚀 <b>Quick Start — compile &amp; run any program</b></summary>

```bash
# Compile with GCC
gcc <filename>.c -o program && ./program

# Or run with Turbo C++ (as written in the record)
# Alt+F9 to compile, Ctrl+F9 to run
```

</details>

---

<h2 align="center">📑 Index</h2>

<p align="center">
<table><thead>
<tr><th align="center">No.</th><th align="center">Name of the Experiment</th></tr>
</thead><tbody>
<tr><td align="center"><b>1</b></td><td align="left"><a href="#experiment-1-c-program-to-print-the-size-of-different-data-types">C program to print the size of different data types</a></td></tr>
<tr><td align="center"><b>2</b></td><td align="left"><a href="#experiment-2-perimeter-and-area-of-a-triangle">Perimeter and area of a triangle</a></td></tr>
<tr><td align="center"><b>3</b></td><td align="left"><a href="#experiment-3-area-and-circumference-of-a-circle">Area and circumference of a circle</a></td></tr>
<tr><td align="center"><b>4</b></td><td align="left"><a href="#experiment-4-convert-fahrenheit-to-celsius">Convert fahrenheit to celsius</a></td></tr>
<tr><td align="center"><b>5</b></td><td align="left"><a href="#experiment-5-simple-interest">Simple interest</a></td></tr>
<tr><td align="center"><b>6</b></td><td align="left"><a href="#experiment-6-swap-two-numbers-without-using-a-temporary-variable">Swap two numbers without using a temporary variable</a></td></tr>
<tr><td align="center"><b>7</b></td><td align="left"><a href="#experiment-7-swap-two-numbers-using-a-temporary-variable">Swap two numbers using a temporary variable</a></td></tr>
<tr><td align="center"><b>8</b></td><td align="left"><a href="#experiment-8-check-a--b-using-the-conditional-operator">Check a > b using the conditional operator</a></td></tr>
<tr><td align="center"><b>9</b></td><td align="left"><a href="#experiment-9-arithmetic-and-relational-operations-using-short-name-method">Arithmetic and relational operations using short-name method</a></td></tr>
<tr><td align="center"><b>10</b></td><td align="left"><a href="#experiment-10-evaluate-the-expression-abc">Evaluate the expression (a+b)*c</a></td></tr>
<tr><td align="center"><b>11</b></td><td align="left"><a href="#experiment-11-equivalence-of-two-numbers">Equivalence of two numbers</a></td></tr>
<tr><td align="center"><b>12</b></td><td align="left"><a href="#experiment-12-largest-of-two-numbers">Largest of two numbers</a></td></tr>
<tr><td align="center"><b>13</b></td><td align="left"><a href="#experiment-13-maximum-of-three-numbers">Maximum of three numbers</a></td></tr>
<tr><td align="center"><b>14</b></td><td align="left"><a href="#experiment-14-smallest-of-two-numbers">Smallest of two numbers</a></td></tr>
<tr><td align="center"><b>15</b></td><td align="left"><a href="#experiment-15-energy-bill-using-else-if-ladder">Energy bill using else-if ladder</a></td></tr>
<tr><td align="center"><b>16</b></td><td align="left"><a href="#experiment-16-leap-year-or-not">Leap year or not</a></td></tr>
<tr><td align="center"><b>17</b></td><td align="left"><a href="#experiment-17-odd-or-even">Odd or even</a></td></tr>
<tr><td align="center"><b>18</b></td><td align="left"><a href="#experiment-18-gross-salary-of-an-employee">Gross salary of an employee</a></td></tr>
<tr><td align="center"><b>19</b></td><td align="left"><a href="#experiment-19-average-of-six-subjects-with-division-classification">Average of six subjects with division classification</a></td></tr>
<tr><td align="center"><b>20</b></td><td align="left"><a href="#experiment-20-day-of-a-week-using-switch-case">Day of a week using switch case</a></td></tr>
<tr><td align="center"><b>21</b></td><td align="left"><a href="#experiment-21-menu-driven-arithmetic-calculations-using-switch-case">Menu driven arithmetic calculations using switch case</a></td></tr>
</tbody></table>
</p>

---

### Experiment 1: C program to print the size of different data types

> 🎯 **AIM:** To write a C program to print the size of different data types.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-1-c-program-to-print-the-size-of-different-data-types">⬆ to top of experiment 1</a></sub></p>

---

### Experiment 2: Perimeter and area of a triangle

> 🎯 **AIM:** To find the perimeter and area of a triangle.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-2-perimeter-and-area-of-a-triangle">⬆ to top of experiment 2</a></sub></p>

---

### Experiment 3: Area and circumference of a circle

> 🎯 **AIM:** To find the area and circumference of a circle.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-3-area-and-circumference-of-a-circle">⬆ to top of experiment 3</a></sub></p>

---

### Experiment 4: Convert Fahrenheit to Celsius

> 🎯 **AIM:** To convert temperature in Fahrenheit to Celsius.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-4-convert-fahrenheit-to-celsius">⬆ to top of experiment 4</a></sub></p>

---

### Experiment 5: Simple interest

> 🎯 **AIM:** To find the Simple Interest.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-5-simple-interest">⬆ to top of experiment 5</a></sub></p>

---

### Experiment 6: Swap two numbers without using a temporary variable

> 🎯 **AIM:** To swap two numbers without using a temporary variable.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-6-swap-two-numbers-without-using-a-temporary-variable">⬆ to top of experiment 6</a></sub></p>

---

### Experiment 7: Swap two numbers using a temporary variable

> 🎯 **AIM:** To swap two numbers using a temporary variable.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-7-swap-two-numbers-using-a-temporary-variable">⬆ to top of experiment 7</a></sub></p>

---

### Experiment 8: Check a > b using the conditional operator

> 🎯 **AIM:** To input two numbers a and b and check a > b using the conditional operator.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-8-check-a--b-using-the-conditional-operator">⬆ to top of experiment 8</a></sub></p>

---

### Experiment 9: Arithmetic and relational operations using short-name method

> 🎯 **AIM:** To perform arithmetic and relational operations using the short-hand method.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-9-arithmetic-and-relational-operations-using-short-name-method">⬆ to top of experiment 9</a></sub></p>

---

### Experiment 10: Evaluate the expression (a+b)*c

> 🎯 **AIM:** To evaluate the expression (a + b) * c.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-10-evaluate-the-expression-abc">⬆ to top of experiment 10</a></sub></p>

---

### Experiment 11: Equivalence of two numbers

> 🎯 **AIM:** To check the equivalence of two numbers.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-11-equivalence-of-two-numbers">⬆ to top of experiment 11</a></sub></p>

---

### Experiment 12: Largest of two numbers

> 🎯 **AIM:** To find the largest of two numbers.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-12-largest-of-two-numbers">⬆ to top of experiment 12</a></sub></p>

---

### Experiment 13: Maximum of three numbers

> 🎯 **AIM:** To find the maximum of three numbers.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-13-maximum-of-three-numbers">⬆ to top of experiment 13</a></sub></p>

---

### Experiment 14: Smallest of two numbers

> 🎯 **AIM:** To find the smallest of two numbers.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-14-smallest-of-two-numbers">⬆ to top of experiment 14</a></sub></p>

---

### Experiment 15: Energy bill using else-if ladder

> 🎯 **AIM:** To calculate the energy bill by reading the starting and ending meter readings using an else-if ladder.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-15-energy-bill-using-else-if-ladder">⬆ to top of experiment 15</a></sub></p>

---

### Experiment 16: Leap year or not

> 🎯 **AIM:** To check whether a year is a leap year or not.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-16-leap-year-or-not">⬆ to top of experiment 16</a></sub></p>

---

### Experiment 17: Odd or even

> 🎯 **AIM:** To check whether a number is odd or even.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-17-odd-or-even">⬆ to top of experiment 17</a></sub></p>

---

### Experiment 18: Gross salary of an employee

> 🎯 **AIM:** To calculate the gross salary of an employee.

<details><summary>📋 <b>Conditions</b></summary>

```text
Basic Salary    DA             HRA           Conveyance
>= 5000         110% of basic  20% of basic  500
> 3000 & < 5000 100% of basic  15% of basic  400
<= 3000         90% of basic   10% of basic  300
```

</details>

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-18-gross-salary-of-an-employee">⬆ to top of experiment 18</a></sub></p>

---

### Experiment 19: Average of six subjects with division classification

> 🎯 **AIM:** To find the average of marks in six subjects and the result.

<details><summary>📋 <b>Conditions</b></summary>

```text
Average              Result
34 & < 50            Third Division
50 & < 60            Second Division
60 & < 75            First Division
75 & 100             Distinction
Mark in any subject < 35   Fail
```

</details>

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-19-average-of-six-subjects-with-division-classification">⬆ to top of experiment 19</a></sub></p>

---

### Experiment 20: Day of a week using switch case

> 🎯 **AIM:** To print the day of a week using switch case.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-20-day-of-a-week-using-switch-case">⬆ to top of experiment 20</a></sub></p>

---

### Experiment 21: Menu driven arithmetic calculations using switch case

> 🎯 **AIM:** To write a menu driven program to perform arithmetic calculations using switch case.

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

<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-21-menu-driven-arithmetic-calculations-using-switch-case">⬆ to top of experiment 21</a></sub></p>

---

<h2 align="center">📄 About</h2>

| | |
|---|---|
| 🎓 **Subject** | C Programming Lab |
| 🧪 **Experiments** | 21 |
| 🖊️ **Source** | Handwritten lab record, digitized |
| 📄 **Full printable PDF** | [C_Lab_Record.pdf](./C_Lab_Record.pdf) — 24 pages, ready to print |
| 🌐 **Repository** | [akhil-tg/01012008](https://github.com/akhil-tg/01012008) |

<p align="center">
  <a href="https://github.com/akhil-tg"><img alt="author" src="https://img.shields.io/badge/Made%20with-%E2%9D%A4%EF%B8%8F%20%26%20C-blue?style=flat-square"/></a>
</p>
<p align="center"><i>⭐ If this helped you, feel free to star the repo!</i></p>