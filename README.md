# 📘 C Programming Lab Record

A complete collection of **21 C programming experiments** — originally handwritten in a lab record book, carefully digitized into clean, copy-ready code.

✨ **Every program below has a 1-click copy button on GitHub** — just hover over the code block and press the 📋 button.

▶ **Every experiment also has a "Run this program online" link** — it opens a free browser compiler (paiza.io) with that exact program already loaded, no installation needed! *Note: the run-page code is slightly adapted (`int main()`, no Turbo-C functions) so modern compilers accept it; the code blocks below stay exactly as written in your notebook.*

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

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20printf%28%22%20SIZE%20OF%20DATA%20TYPES%20%3A%20%5Cn%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%20Size%20of%20int%20%3D%20%25d%20bytes%5Cn%22%2C%20sizeof%28int%29%29%3B%0A%20%20%20%20printf%28%22%20Size%20of%20char%20%3D%20%25d%20bytes%5Cn%22%2C%20sizeof%28char%29%29%3B%0A%20%20%20%20printf%28%22%20Size%20of%20float%20%3D%20%25d%20bytes%5Cn%22%2C%20sizeof%28float%29%29%3B%0A%20%20%20%20printf%28%22%20Size%20of%20double%20%3D%20%25d%20bytes%5Cn%22%2C%20sizeof%28double%29%29%3B%0A%20%20%20%20return%200%3B%0A%7D%0A&input=)

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

[⬆ Back to top](#-index)

---

## Experiment 2: Perimeter and area of a triangle

> **Aim:** To find the perimeter and area of a triangle.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0A%23include%3Cmath.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20float%20a%2C%20b%2C%20c%2C%20s%2C%20area%2C%20perimeter%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20three%20sides%20of%20triangle%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25f%20%25f%20%25f%22%2C%20%26a%2C%20%26b%2C%20%26c%29%3B%0A%0A%20%20%20%20perimeter%20%3D%20a%20%2B%20b%20%2B%20c%3B%0A%20%20%20%20s%20%3D%20perimeter%20/%202%3B%0A%20%20%20%20area%20%3D%20sqrt%28s%20%2A%20%28s%20-%20a%29%20%2A%20%28s%20-%20b%29%20%2A%20%28s%20-%20c%29%29%3B%0A%0A%20%20%20%20printf%28%22%20Perimeter%20%3D%20%25f%22%2C%20perimeter%29%3B%0A%20%20%20%20printf%28%22%5Cn%20Area%20%3D%20%25f%22%2C%20area%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=3%204%205)

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

[⬆ Back to top](#-index)

---

## Experiment 3: Area and circumference of a circle

> **Aim:** To find the area and circumference of a circle.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20float%20r%2C%20area%2C%20circumference%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20radius%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25f%22%2C%20%26r%29%3B%0A%0A%20%20%20%20area%20%3D%203.14%20%2A%20r%20%2A%20r%3B%0A%20%20%20%20circumference%20%3D%202%20%2A%203.14%20%2A%20r%3B%0A%0A%20%20%20%20printf%28%22%20Area%20%3D%20%25f%22%2C%20area%29%3B%0A%20%20%20%20printf%28%22%5Cn%20Circumference%20%3D%20%25f%22%2C%20circumference%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=7)

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

[⬆ Back to top](#-index)

---

## Experiment 4: Convert Fahrenheit to Celsius

> **Aim:** To convert temperature in Fahrenheit to Celsius.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20float%20f%2C%20c%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20temperature%20in%20Fahrenheit%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25f%22%2C%20%26f%29%3B%0A%0A%20%20%20%20c%20%3D%20%28f%20-%2032%29%20%2A%205%20/%209%3B%0A%0A%20%20%20%20printf%28%22%20Temperature%20in%20Celsius%20%3D%20%25f%22%2C%20c%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=98.6)

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

[⬆ Back to top](#-index)

---

## Experiment 5: Simple interest

> **Aim:** To find the Simple Interest.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20float%20p%2C%20r%2C%20t%2C%20si%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20principal%2C%20rate%20and%20time%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25f%20%25f%20%25f%22%2C%20%26p%2C%20%26r%2C%20%26t%29%3B%0A%0A%20%20%20%20si%20%3D%20%28p%20%2A%20r%20%2A%20t%29%20/%20100%3B%0A%0A%20%20%20%20printf%28%22%20Simple%20Interest%20%3D%20%25f%22%2C%20si%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=1000%205%202)

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

[⬆ Back to top](#-index)

---

## Experiment 6: Swap two numbers without using a temporary variable

> **Aim:** To swap two numbers without using a temporary variable.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26a%2C%20%26b%29%3B%0A%0A%20%20%20%20a%20%3D%20a%20%2B%20b%3B%0A%20%20%20%20b%20%3D%20a%20-%20b%3B%0A%20%20%20%20a%20%3D%20a%20-%20b%3B%0A%0A%20%20%20%20printf%28%22%20After%20swapping%20%3A%20a%20%3D%20%25d%2C%20b%20%3D%20%25d%22%2C%20a%2C%20b%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=10%2020)

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

[⬆ Back to top](#-index)

---

## Experiment 7: Swap two numbers using a temporary variable

> **Aim:** To swap two numbers using a temporary variable.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%2C%20temp%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26a%2C%20%26b%29%3B%0A%0A%20%20%20%20temp%20%3D%20a%3B%0A%20%20%20%20a%20%3D%20b%3B%0A%20%20%20%20b%20%3D%20temp%3B%0A%0A%20%20%20%20printf%28%22%20After%20swapping%20%3A%20a%20%3D%20%25d%2C%20b%20%3D%20%25d%22%2C%20a%2C%20b%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=10%2020)

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

[⬆ Back to top](#-index)

---

## Experiment 8: Check a > b using the conditional operator

> **Aim:** To input two numbers a and b and check a > b using the conditional operator.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26a%2C%20%26b%29%3B%0A%0A%20%20%20%20%28a%20%3E%20b%29%20%3F%20printf%28%22a%20is%20greater%22%29%20%3A%20printf%28%22b%20is%20greater%20or%20equal%22%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=5%203)

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

[⬆ Back to top](#-index)

---

## Experiment 9: Arithmetic and relational operations using short-name method

> **Aim:** To perform arithmetic and relational operations using the short-hand method.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%2C%20x%3B%0A%20%20%20%20printf%28%22%20Enter%20two%20values%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26a%2C%20%26b%29%3B%0A%0A%20%20%20%20printf%28%22%5Cn%20Arithmetic%20operations%20%3A%20%22%29%3B%0A%0A%20%20%20%20x%20%3D%20a%3B%0A%20%20%20%20x%20%2B%3D%20b%3B%0A%20%20%20%20printf%28%22%5Cn%20Addition%20%3D%20%25d%22%2C%20x%29%3B%0A%0A%20%20%20%20x%20%3D%20a%3B%0A%20%20%20%20x%20-%3D%20b%3B%0A%20%20%20%20printf%28%22%5Cn%20Subtraction%20%3D%20%25d%22%2C%20x%29%3B%0A%0A%20%20%20%20x%20%3D%20a%3B%0A%20%20%20%20x%20%2A%3D%20b%3B%0A%20%20%20%20printf%28%22%5Cn%20Multiplication%20%3D%20%25d%22%2C%20x%29%3B%0A%0A%20%20%20%20x%20%3D%20a%3B%0A%20%20%20%20x%20/%3D%20b%3B%0A%20%20%20%20printf%28%22%5Cn%20Division%20%3D%20%25d%22%2C%20x%29%3B%0A%0A%20%20%20%20printf%28%22%5Cn%5Cn%20Relational%20operators%20%3A%20%22%29%3B%0A%20%20%20%20printf%28%22%5Cn%20a%3Eb%20%3D%20%25d%22%2C%20a%20%3E%20b%29%3B%0A%20%20%20%20printf%28%22%5Cn%20a%3Cb%20%3D%20%25d%22%2C%20a%20%3C%20b%29%3B%0A%20%20%20%20printf%28%22%5Cn%20a%3D%3Db%20%3D%20%25d%22%2C%20a%20%3D%3D%20b%29%3B%0A%20%20%20%20printf%28%22%5Cn%20a%21%3Db%20%3D%20%25d%22%2C%20a%20%21%3D%20b%29%3B%0A%20%20%20%20printf%28%22%5Cn%20a%3E%3Db%20%3D%20%25d%22%2C%20a%20%3E%3D%20b%29%3B%0A%20%20%20%20printf%28%22%5Cn%20a%3C%3Db%20%3D%20%25d%22%2C%20a%20%3C%3D%20b%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=10%205)

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

[⬆ Back to top](#-index)

---

## Experiment 10: Evaluate the expression (a+b)*c

> **Aim:** To evaluate the expression (a + b) * c.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%2C%20c%2C%20result%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20a%2C%20b%20and%20c%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%20%25d%22%2C%20%26a%2C%20%26b%2C%20%26c%29%3B%0A%0A%20%20%20%20result%20%3D%20%28a%20%2B%20b%29%20%2A%20c%3B%0A%0A%20%20%20%20printf%28%22%20Result%20%3D%20%25d%22%2C%20result%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=2%203%204)

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

[⬆ Back to top](#-index)

---

## Experiment 11: Equivalence of two numbers

> **Aim:** To check the equivalence of two numbers.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20two%20integers%20a%20and%20b%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26a%2C%20%26b%29%3B%0A%0A%20%20%20%20if%20%28a%20%3D%3D%20b%29%0A%20%20%20%20%20%20%20%20printf%28%22%5Cn%201.%20Condition%20%28a%3D%3Db%29%20is%20TRUE%22%29%3B%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20printf%28%22%5Cn%201.%20Condition%20%28a%3D%3Db%29%20is%20FALSE%22%29%3B%0A%0A%20%20%20%20if%20%28a%20-%20b%20%3D%3D%200%29%0A%20%20%20%20%20%20%20%20printf%28%22%5Cn%202.%20Condition%20%28a-b%3D%3D0%29%20is%20TRUE%22%29%3B%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20printf%28%22%5Cn%202.%20Condition%20%28a-b%3D%3D0%29%20is%20FALSE%22%29%3B%0A%0A%20%20%20%20if%20%28b%20%21%3D%200%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20if%20%28a%20/%20b%20%3D%3D%201%29%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%5Cn%203.%20Condition%20%28a/b%3D%3D1%29%20is%20TRUE%22%29%3B%0A%20%20%20%20%20%20%20%20else%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%5Cn%203.%20Condition%20%28a/b%3D%3D1%29%20is%20FALSE%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20printf%28%22%5Cn%203.%20Division%20by%20zero%20is%20not%20possible%22%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=5%205)

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

[⬆ Back to top](#-index)

---

## Experiment 12: Largest of two numbers

> **Aim:** To find the largest of two numbers.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26a%2C%20%26b%29%3B%0A%0A%20%20%20%20if%20%28a%20%3E%20b%29%0A%20%20%20%20%20%20%20%20printf%28%22%20a%20is%20larger%22%29%3B%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20printf%28%22%20b%20is%20larger%22%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=7%203)

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

[⬆ Back to top](#-index)

---

## Experiment 13: Maximum of three numbers

> **Aim:** To find the maximum of three numbers.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%2C%20c%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20three%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%20%25d%22%2C%20%26a%2C%20%26b%2C%20%26c%29%3B%0A%0A%20%20%20%20if%20%28a%20%3E%20b%20%26%26%20a%20%3E%20c%29%0A%20%20%20%20%20%20%20%20printf%28%22%20A%20is%20largest%22%29%3B%0A%20%20%20%20else%20if%20%28b%20%3E%20a%20%26%26%20b%20%3E%20c%29%0A%20%20%20%20%20%20%20%20printf%28%22%20B%20is%20largest%22%29%3B%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20printf%28%22%20C%20is%20largest%22%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=3%209%205)

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

[⬆ Back to top](#-index)

---

## Experiment 14: Smallest of two numbers

> **Aim:** To find the smallest of two numbers.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%2C%20b%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26a%2C%20%26b%29%3B%0A%0A%20%20%20%20if%20%28a%20%3C%20b%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20a%20is%20smaller%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20b%20is%20smaller%22%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=4%208)

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

[⬆ Back to top](#-index)

---

## Experiment 15: Energy bill using else-if ladder

> **Aim:** To calculate the energy bill by reading the starting and ending meter readings using an else-if ladder.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20float%20start%2C%20end%2C%20units%2C%20bill%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20starting%20meter%20reading%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25f%22%2C%20%26start%29%3B%0A%20%20%20%20printf%28%22%20Enter%20ending%20meter%20reading%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25f%22%2C%20%26end%29%3B%0A%0A%20%20%20%20units%20%3D%20end%20-%20start%3B%0A%0A%20%20%20%20if%20%28units%20%3E%20200%20%26%26%20units%20%3C%3D%20500%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20bill%20%3D%20units%20%2A%202.50%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%20if%20%28units%20%3E%3D%20100%20%26%26%20units%20%3C%20200%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20bill%20%3D%20units%20%2A%202.50%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20bill%20%3D%20units%20%2A%201.50%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20printf%28%22%5Cn%20Units%20consumed%20%3D%20%25f%22%2C%20units%29%3B%0A%20%20%20%20printf%28%22%5Cn%20Energy%20bill%20%3D%20Rs%20%25f%22%2C%20bill%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=1000%0A1250)

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

[⬆ Back to top](#-index)

---

## Experiment 16: Leap year or not

> **Aim:** To check whether a year is a leap year or not.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20year%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20a%20year%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%22%2C%20%26year%29%3B%0A%0A%20%20%20%20if%20%28year%20%25%204%20%3D%3D%200%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Leap%20year%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Not%20a%20leap%20year%22%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=2024)

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

[⬆ Back to top](#-index)

---

## Experiment 17: Odd or even

> **Aim:** To check whether a number is odd or even.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20the%20number%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%22%2C%20%26a%29%3B%0A%0A%20%20%20%20if%20%28a%20%25%202%20%3D%3D%200%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20a%20is%20even%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20a%20is%20odd%22%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=7)

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

[⬆ Back to top](#-index)

---

## Experiment 18: Gross salary of an employee

> **Aim:** To calculate the gross salary of an employee.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20float%20basic_salary%2C%20DA%2C%20HRA%2C%20conveyance%2C%20gross_salary%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20basic%20salary%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25f%22%2C%20%26basic_salary%29%3B%0A%0A%20%20%20%20if%20%28basic_salary%20%3E%3D%205000%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20DA%20%3D%201.10%20%2A%20basic_salary%3B%0A%20%20%20%20%20%20%20%20HRA%20%3D%200.20%20%2A%20basic_salary%3B%0A%20%20%20%20%20%20%20%20conveyance%20%3D%20500.00%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%20if%20%28basic_salary%20%3E%3D%203000%20%26%26%20basic_salary%20%3C%205000%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20DA%20%3D%201.00%20%2A%20basic_salary%3B%0A%20%20%20%20%20%20%20%20HRA%20%3D%200.15%20%2A%20basic_salary%3B%0A%20%20%20%20%20%20%20%20conveyance%20%3D%20400.00%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%20if%20%28basic_salary%20%3E%3D%203000%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20DA%20%3D%200.90%20%2A%20basic_salary%3B%0A%20%20%20%20%20%20%20%20HRA%20%3D%200.10%20%2A%20basic_salary%3B%0A%20%20%20%20%20%20%20%20conveyance%20%3D%20300.00%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Invalid%20value%22%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20gross_salary%20%3D%20basic_salary%20%2B%20DA%20%2B%20HRA%20%2B%20conveyance%3B%0A%20%20%20%20printf%28%22%20Gross%20salary%20%3D%20%25.2f%22%2C%20gross_salary%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=6000)
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

[⬆ Back to top](#-index)

---

## Experiment 19: Average of six subjects with division classification

> **Aim:** To find the average of marks in six subjects and the result.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20float%20marks%5B6%5D%2C%20sum%20%3D%200%2C%20avg%3B%0A%20%20%20%20int%20i%20%3D%200%2C%20has_failed%20%3D%200%3B%0A%0A%20%20%20%20printf%28%22%20Enter%20the%20marks%20for%206%20subjects%20%3A%20%5Cn%22%29%3B%0A%20%20%20%20do%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Subject%20%25d%20%3A%20%22%2C%20i%20%2B%201%29%3B%0A%20%20%20%20%20%20%20%20scanf%28%22%25f%22%2C%20%26marks%5Bi%5D%29%3B%0A%20%20%20%20%20%20%20%20if%20%28marks%5Bi%5D%20%3C%2035.0%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20has_failed%20%3D%201%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20sum%20%2B%3D%20marks%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20%7D%20while%20%28i%20%3C%206%29%3B%0A%0A%20%20%20%20avg%20%3D%20sum%20/%206.0%3B%0A%0A%20%20%20%20printf%28%22%5Cn%20...%20AVERAGE%20RESULT%20...%20%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%20Average%20mark%20%3A%20%25.2f%5Cn%22%2C%20avg%29%3B%0A%0A%20%20%20%20printf%28%22%20Result%20%3A%20%22%29%3B%0A%20%20%20%20if%20%28has_failed%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Fail%20%28marks%20in%20one%20or%20more%20subjects%20are%20less%20than%2035%29%5Cn%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%20if%20%28avg%20%3E%3D%2075.0%20%26%26%20avg%20%3C%3D%20100.0%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Distinction%5Cn%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%20if%20%28avg%20%3E%3D%2060.0%20%26%26%20avg%20%3C%2075.0%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20First%20Division%5Cn%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%20if%20%28avg%20%3E%3D%2050.0%20%26%26%20avg%20%3C%2060.0%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Second%20Division%5Cn%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%20if%20%28avg%20%3E%3D%2035.0%20%26%26%20avg%20%3C%2050.0%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Third%20Division%5Cn%22%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22%20Fail%5Cn%22%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=80%0A85%0A90%0A95%0A88%0A75)
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

[⬆ Back to top](#-index)

---

## Experiment 20: Day of a week using switch case

> **Aim:** To print the day of a week using switch case.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20choice%3B%0A%0A%20%20%20%20printf%28%22%20Menu%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%20%2A%20%2A%20%2A%20%2A%20.....%20%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%201.%20Sunday%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%202.%20Monday%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%203.%20Tuesday%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%204.%20Wednesday%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%205.%20Thursday%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%206.%20Friday%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%207.%20Saturday%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%20Enter%20your%20choice%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%22%2C%20%26choice%29%3B%0A%0A%20%20%20%20switch%20%28choice%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20case%201%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Sunday%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%202%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Monday%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%203%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Tuesday%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%204%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Wednesday%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%205%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Thursday%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%206%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Friday%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%207%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Saturday%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20default%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Invalid%20choice%22%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=3)

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

[⬆ Back to top](#-index)

---

## Experiment 21: Menu driven arithmetic calculations using switch case

> **Aim:** To write a menu driven program to perform arithmetic calculations using switch case.

[▶ **Run this program online** (code + sample input pre-loaded, press ▶Run to see output)](https://paiza.io/projects/new?language=c&source_code=%23include%3Cstdio.h%3E%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20choice%3B%0A%20%20%20%20int%20x%2C%20y%3B%0A%20%20%20%20float%20a%2C%20b%2C%20sum%2C%20sub%2C%20mul%2C%20div%3B%0A%0A%20%20%20%20printf%28%22%20Menu%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%20%2A%20%2A%20%2A%20.....%20%2A%20%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%201.%20Addition%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%202.%20Subtraction%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%203.%20Multiplication%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%204.%20Division%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%205.%20Remainder%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%206.%20Largest%20of%20two%20numbers%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%207.%20Exit%5Cn%22%29%3B%0A%20%20%20%20printf%28%22%20Enter%20your%20choice%20%3A%20%22%29%3B%0A%20%20%20%20scanf%28%22%25d%22%2C%20%26choice%29%3B%0A%0A%20%20%20%20switch%20%28choice%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20case%201%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20scanf%28%22%25f%20%25f%22%2C%20%26a%2C%20%26b%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20sum%20%3D%20a%20%2B%20b%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Addition%20%3D%20%25.2f%22%2C%20sum%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%202%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20scanf%28%22%25f%20%25f%22%2C%20%26a%2C%20%26b%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20sub%20%3D%20a%20-%20b%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Subtraction%20%3D%20%25.2f%22%2C%20sub%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%203%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20scanf%28%22%25f%20%25f%22%2C%20%26a%2C%20%26b%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20mul%20%3D%20a%20%2A%20b%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Multiplication%20%3D%20%25.2f%22%2C%20mul%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%204%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20scanf%28%22%25f%20%25f%22%2C%20%26a%2C%20%26b%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20div%20%3D%20a%20/%20b%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Division%20%3D%20%25.2f%22%2C%20div%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%205%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26x%2C%20%26y%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Remainder%20%3D%20%25d%22%2C%20x%20%25%20y%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%206%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Enter%20two%20numbers%20%3A%20%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20scanf%28%22%25d%20%25d%22%2C%20%26x%2C%20%26y%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20if%20%28x%20%3E%20y%29%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Largest%20%3D%20%25d%22%2C%20x%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20else%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Largest%20%3D%20%25d%22%2C%20y%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20case%207%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Exit%22%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20break%3B%0A%20%20%20%20%20%20%20%20default%3A%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%20Invalid%20choice%22%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%200%3B%0A%7D%0A&input=1%0A10%205)

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

[⬆ Back to top](#-index)

---

## 📄 About

- **Subject:** C Programming Lab
- **Experiments:** 21
- **Source:** Handwritten lab record ☞ digitized
- **Full printable PDF:** [C_Lab_Record.pdf](./C_Lab_Record.pdf) — the complete formatted lab record (24 pages, ready to print)
- **Repository:** [akhil-tg/01012008](https://github.com/akhil-tg/01012008)

⭐ If this helped you, feel free to star the repo!
