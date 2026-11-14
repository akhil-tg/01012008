<p align="center">
  <img src=".github/assets/banner.svg" alt="C Programming Lab Record — a complete collection of 28 C programming experiments, digitized into clean, copy-ready code" width="100%"/>
</p>

<p align="center">
  <a href="https://github.com/akhil-tg/01012008/actions/workflows/run.yml"><img alt="Lab Build" src="https://github.com/akhil-tg/01012008/actions/workflows/run.yml/badge.svg"/></a>
  <a href="https://github.com/akhil-tg/01012008"><img alt="experiments" src="https://img.shields.io/badge/Experiments-28-818cf8?style=for-the-badge&logo=c&logoColor=white"/></a>
  <a href="https://github.com/akhil-tg/01012008"><img alt="language" src="https://img.shields.io/badge/Language-C-1e1b4b?style=for-the-badge&logo=c&logoColor=white"/></a>
  <a href="https://github.com/akhil-tg/01012008/blob/main/C_Lab_Record.pdf"><img alt="pdf" src="https://img.shields.io/badge/Full_PDF-35_pages-ea580c?style=for-the-badge&logo=adobeacrobatreader&logoColor=white"/></a>
</p>

# C Programming Lab Record

**28 C programming experiments, digitized from a handwritten lab record into clean, copy-ready code.**

> 🎯 **The mission:** Learn C by reading, running, and modifying small, self-contained lab programs — no setup headaches, just `gcc` and go.

<p align="center">✨ Every program below has a <b>1-click copy button</b> on GitHub — hover over a code block and press 📋</p>

<p align="center">
  <a href="https://github.com/akhil-tg/01012008/actions/workflows/run.yml"><img alt="28/28 compile clean" src="https://img.shields.io/badge/28%2F28-compile%20clean-22C55E?style=for-the-badge&logo=githubactions&logoColor=white"/></a>
  <img alt="37 core concepts" src="https://img.shields.io/badge/37-core%20concepts-4F46E5?style=for-the-badge&logo=c&logoColor=white"/>
  <img alt="zero setup" src="https://img.shields.io/badge/0-setup%20headaches-EA580C?style=for-the-badge&logo=fire&logoColor=white"/>
</p>

---

## 🎓 What you'll learn

<p align="center"><sub>🍿 28 tiny programs, one giant leap for your C skills — here's the treasure map:</sub></p>

| 🧠 Skill you'll unlock | 🧪 Where you learn it |
|------------------------|----------------------|
| **Talking to the machine** — data types, `sizeof`, input/output | Experiments 1, 10 |
| **Math whispering** — formulas, `math.h`, Heron's theorem, π | Experiments 2, 3, 4, 5 |
| **Value juggling** — swaps with & without a temp, shorthand ops | Experiments 6, 7, 9 |
| **Decision making** — `if-else`, ternary, else-if ladders | Experiments 8, 11–19 |
| **Menu magic** — `switch-case`, `break`, menu-driven programs | Experiments 20, 21 |
| **Loop arts & crafts** — nested loops, stars, triangles, Floyd | Experiments 19, 22–24 |
| **Data wrangling** — 1D arrays, 2D matrices, matrix addition | Experiments 25–28 |

---

## 🚀 Quick Start — compile & run any program

<details>
<summary>📦 <b>Compile &amp; run any program</b></summary>

```bash
# Compile with GCC
gcc <filename>.c -o program && ./program

# Or run with Turbo C++ (as written in the record)
# Alt+F9 to compile, Ctrl+F9 to run
```

</details>

> 🧑‍🔬 **Running on modern GCC?** The record is written Turbo-C style (that's how lab records roll 😄). Tiny translation table and you're compiling in seconds:
>
> | Turbo C++ (as written) | Modern GCC equivalent |
> |------------------------|-----------------------|
> | `#include<conio.h>` | remove it |
> | `clrscr();` | *(just delete it)* or `system("clear")` |
> | `getch();` | `getchar();` |
> | `void main()` | `int main()` … `return 0;` |
>
> ✔️ Fun fact: the CI badge up top compiles **all 28 experiments with real GCC** on every push — Turbo-C-isms and all (`gcc -w` is forgiving like a favourite teacher).

---

<h2 align="center">📑 Index</h2>

<p align="center"><sub>🗺️ 28 adventures, 6 flavours — pick a topic and jump straight in. Every program has a <b>1-click copy button</b> on GitHub (hover a code block → press 📋)!</sub></p>

#### 🔵 Basics & Formulas

| # | Experiment | Concepts |
|:-:|------------|----------|
| 1 | [C program to print the size of different data types](#experiment-1-c-program-to-print-the-size-of-different-data-types) | `data types` · `sizeof` |
| 2 | [Perimeter and area of a triangle](#experiment-2-perimeter-and-area-of-a-triangle) | `math.h` · `Heron's formula` |
| 3 | [Area and circumference of a circle](#experiment-3-area-and-circumference-of-a-circle) | `float` · `π constant` |
| 4 | [Convert Fahrenheit to Celsius](#experiment-4-convert-fahrenheit-to-celsius) | `float` · `temperature formula` |
| 5 | [Simple interest](#experiment-5-simple-interest) | `float` · `arithmetic formula` |

#### 🟣 Operators & Swaps

| # | Experiment | Concepts |
|:-:|------------|----------|
| 6 | [Swap two numbers without using a temporary variable](#experiment-6-swap-two-numbers-without-using-a-temporary-variable) | `arithmetic swap` · `no extra variable` |
| 7 | [Swap two numbers using a temporary variable](#experiment-7-swap-two-numbers-using-a-temporary-variable) | `temp variable` · `assignment` |
| 8 | [Check a > b using the conditional operator](#experiment-8-check-a--b-using-the-conditional-operator) | `ternary operator` · `conditionals` |
| 9 | [Arithmetic and relational operations using short-name method](#experiment-9-arithmetic-and-relational-operations-using-short-name-method) | `shorthand operators` · `relational operators` |
| 10 | [Evaluate the expression (a+b)*c](#experiment-10-evaluate-the-expression-abc) | `operator precedence` · `int input` |
| 11 | [Equivalence of two numbers](#experiment-11-equivalence-of-two-numbers) | `if-else` · `nested conditions` |

#### 🟠 Conditionals

| # | Experiment | Concepts |
|:-:|------------|----------|
| 12 | [Largest of two numbers](#experiment-12-largest-of-two-numbers) | `if-else` · `comparison` |
| 13 | [Maximum of three numbers](#experiment-13-maximum-of-three-numbers) | `logical AND` · `else-if ladder` |
| 14 | [Smallest of two numbers](#experiment-14-smallest-of-two-numbers) | `if-else` · `comparison` |
| 15 | [Energy bill using else-if ladder](#experiment-15-energy-bill-using-else-if-ladder) | `else-if ladder` · `bill calculation` |
| 16 | [Leap year or not](#experiment-16-leap-year-or-not) | `modulo` · `if-else` |
| 17 | [Odd or even](#experiment-17-odd-or-even) | `modulo` · `if-else` |
| 18 | [Gross salary of an employee](#experiment-18-gross-salary-of-an-employee) | `else-if ladder` · `salary formula` |
| 19 | [Average of six subjects with division classification](#experiment-19-average-of-six-subjects-with-division-classification) | `do-while loop` · `1D arrays` |

#### 🟡 Switch & Menus

| # | Experiment | Concepts |
|:-:|------------|----------|
| 20 | [Day of a week using switch case](#experiment-20-day-of-a-week-using-switch-case) | `switch-case` · `break` |
| 21 | [Menu driven arithmetic calculations using switch case](#experiment-21-menu-driven-arithmetic-calculations-using-switch-case) | `switch-case` · `menu-driven` |

#### 🟢 Loops & Patterns

| # | Experiment | Concepts |
|:-:|------------|----------|
| 22 | [Display star pattern](#experiment-22-display-star-pattern) | `nested for loops` · `patterns` |
| 23 | [Display number triangle pattern](#experiment-23-display-number-triangle-pattern) | `nested for loops` · `patterns` |
| 24 | [Print Floyd triangle](#experiment-24-print-floyd-triangle) | `nested for loops` · `counter variable` |

#### 🔴 Arrays & Matrices

| # | Experiment | Concepts |
|:-:|------------|----------|
| 25 | [Find the sum of array elements](#experiment-25-find-the-sum-of-array-elements) | `1D arrays` · `for loop` |
| 26 | [Find the largest element in an array](#experiment-26-find-the-largest-element-in-an-array) | `1D arrays` · `comparison` |
| 27 | [Display a matrix](#experiment-27-display-a-matrix) | `2D arrays` · `nested loops` |
| 28 | [Addition of two matrices](#experiment-28-addition-of-two-matrices) | `2D arrays` · `matrix addition` |

## 🧪 Experiments

### Experiment 1: C program to print the size of different data types

> 🎯 **AIM:** To write a C program to print the size of different data types.
>
> 😄 *Size matters — so let's just ask the compiler! 📏*

<p align="left"><sub>🧠 `data types` · `sizeof`</sub></p>

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

<details>
<summary>💻 <b>Run it</b> — sample session</summary>

```console
$ gcc 01-c-program-to-print-the-size-of-different-data-types.c -o prog && ./prog

 SIZE OF DATA TYPES :

 Size of int = 4 bytes
 Size of char = 1 bytes
 Size of float = 4 bytes
 Size of double = 8 bytes
```

<sub>🧾 The original prints `1 bytes` for char — pure Turbo-C-era charm 😄 On Turbo C++ itself, `int` is 2 bytes!</sub>

</details>

<p align="center"><sub>🗂️ <a href="#-index">⬆ back to index</a> &nbsp;•&nbsp; <a href="#experiment-2-perimeter-and-area-of-a-triangle">next: experiment 2 ➜</a></sub></p>

---

### Experiment 2: Perimeter and area of a triangle

> 🎯 **AIM:** To find the perimeter and area of a triangle.
>
> 😄 *Three sides in, one triangle out — Heron's formula does the flexing. 📐*

<p align="left"><sub>🧠 `math.h` · `Heron's formula`</sub></p>

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

<details>
<summary>💻 <b>Run it</b> — sample session</summary>

```console
$ gcc 02-perimeter-and-area-of-a-triangle.c -o prog && ./prog
 Enter three sides of triangle : 3 4 5
 Perimeter = 12.000000
 Area = 6.000000
```

</details>

<p align="center"><sub>🗂️ <a href="#-index">⬆ back to index</a> &nbsp;•&nbsp; <a href="#experiment-3-area-and-circumference-of-a-circle">next: experiment 3 ➜</a></sub></p>

---

### Experiment 3: Area and circumference of a circle

> 🎯 **AIM:** To find the area and circumference of a circle.
>
> 😄 *Pizza maths: radius in, area & circumference out. 🍕*

<p align="left"><sub>🧠 `float` · `π constant`</sub></p>

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

<details>
<summary>💻 <b>Run it</b> — sample session</summary>

```console
$ gcc 03-area-and-circumference-of-a-circle.c -o prog && ./prog
 Enter radius : 7
 Area = 153.860001
 Circumference = 43.959999
```

<sub>🥧 π = 3.14 keeps it old-school — pi purists, swap in 3.14159 and watch the decimals dance.</sub>

</details>

<p align="center"><sub>🗂️ <a href="#-index">⬆ back to index</a> &nbsp;•&nbsp; <a href="#experiment-4-convert-fahrenheit-to-celsius">next: experiment 4 ➜</a></sub></p>

---

### Experiment 4: Convert Fahrenheit to Celsius

> 🎯 **AIM:** To convert temperature in Fahrenheit to Celsius.
>
> 😄 *98.6°F in, 37°C out — no calculator required. 🌡️*

<p align="left"><sub>🧠 `float` · `temperature formula`</sub></p>

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

<details>
<summary>💻 <b>Run it</b> — sample session</summary>

```console
$ gcc 04-convert-fahrenheit-to-celsius.c -o prog && ./prog
 Enter temperature in Fahrenheit : 98.6
 Temperature in Celsius = 37.000000
```

</details>

<p align="center"><sub>🗂️ <a href="#-index">⬆ back to index</a> &nbsp;•&nbsp; <a href="#experiment-5-simple-interest">next: experiment 5 ➜</a></sub></p>

---

### Experiment 5: Simple interest

> 🎯 **AIM:** To find the Simple Interest.
>
> 😄 *Principal × rate × time ÷ 100 — money maths made friendly. 💰*

<p align="left"><sub>🧠 `float` · `arithmetic formula`</sub></p>

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

<details>
<summary>💻 <b>Run it</b> — sample session</summary>

```console
$ gcc 05-simple-interest.c -o prog && ./prog
 Enter principal, rate and time : 1000 5 2
 Simple Interest = 100.000000
```

</details>

<p align="center"><sub>🗂️ <a href="#-index">⬆ back to index</a> &nbsp;•&nbsp; <a href="#experiment-6-swap-two-numbers-without-using-a-temporary-variable">next: experiment 6 ➜</a></sub></p>

---

### Experiment 6: Swap two numbers without using a temporary variable

> 🎯 **AIM:** To swap two numbers without using a temporary variable.

<p align="left"><sub>🧠 Concepts: `arithmetic swap` · `no extra variable`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `10 20` | `After swapping : a = 20, b = 10` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-6-swap-two-numbers-without-using-a-temporary-variable">⬆ to top of experiment 6</a></sub></p>

---

### Experiment 7: Swap two numbers using a temporary variable

> 🎯 **AIM:** To swap two numbers using a temporary variable.

<p align="left"><sub>🧠 Concepts: `temp variable` · `assignment`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `10 20` | `After swapping : a = 20, b = 10` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-7-swap-two-numbers-using-a-temporary-variable">⬆ to top of experiment 7</a></sub></p>

---

### Experiment 8: Check a > b using the conditional operator

> 🎯 **AIM:** To input two numbers a and b and check a > b using the conditional operator.

<p align="left"><sub>🧠 Concepts: `ternary operator` · `conditionals`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `5 3` | `a is greater` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-8-check-a--b-using-the-conditional-operator">⬆ to top of experiment 8</a></sub></p>

---

### Experiment 9: Arithmetic and relational operations using short-name method

> 🎯 **AIM:** To perform arithmetic and relational operations using the short-hand method.

<p align="left"><sub>🧠 Concepts: `shorthand operators` · `relational operators`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `10 5` | `Addition = 15 \| Subtraction = 5 \| Multiplication = 50 \| Division = 2` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-9-arithmetic-and-relational-operations-using-short-name-method">⬆ to top of experiment 9</a></sub></p>

---

### Experiment 10: Evaluate the expression (a+b)*c

> 🎯 **AIM:** To evaluate the expression (a + b) * c.

<p align="left"><sub>🧠 Concepts: `operator precedence` · `int input`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `2 3 4` | `Result = 20` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-10-evaluate-the-expression-abc">⬆ to top of experiment 10</a></sub></p>

---

### Experiment 11: Equivalence of two numbers

> 🎯 **AIM:** To check the equivalence of two numbers.

<p align="left"><sub>🧠 Concepts: `if-else` · `nested conditions`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `5 5` | `Condition (a==b) is TRUE \| Condition (a-b==0) is TRUE \| Condition (a/b==1) is TRUE` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-11-equivalence-of-two-numbers">⬆ to top of experiment 11</a></sub></p>

---

### Experiment 12: Largest of two numbers

> 🎯 **AIM:** To find the largest of two numbers.

<p align="left"><sub>🧠 Concepts: `if-else` · `comparison`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `7 3` | `a is larger` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-12-largest-of-two-numbers">⬆ to top of experiment 12</a></sub></p>

---

### Experiment 13: Maximum of three numbers

> 🎯 **AIM:** To find the maximum of three numbers.

<p align="left"><sub>🧠 Concepts: `logical AND` · `else-if ladder`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `3 9 5` | `B is largest` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-13-maximum-of-three-numbers">⬆ to top of experiment 13</a></sub></p>

---

### Experiment 14: Smallest of two numbers

> 🎯 **AIM:** To find the smallest of two numbers.

<p align="left"><sub>🧠 Concepts: `if-else` · `comparison`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `4 8` | `a is smaller` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-14-smallest-of-two-numbers">⬆ to top of experiment 14</a></sub></p>

---

### Experiment 15: Energy bill using else-if ladder

> 🎯 **AIM:** To calculate the energy bill by reading the starting and ending meter readings using an else-if ladder.

<p align="left"><sub>🧠 Concepts: `else-if ladder` · `bill calculation`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `1000 -> 1250` | `Units consumed = 250.000000 \| Energy bill = Rs 625.000000` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-15-energy-bill-using-else-if-ladder">⬆ to top of experiment 15</a></sub></p>

---

### Experiment 16: Leap year or not

> 🎯 **AIM:** To check whether a year is a leap year or not.

<p align="left"><sub>🧠 Concepts: `modulo` · `if-else`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `2024` | `Leap year` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-16-leap-year-or-not">⬆ to top of experiment 16</a></sub></p>

---

### Experiment 17: Odd or even

> 🎯 **AIM:** To check whether a number is odd or even.

<p align="left"><sub>🧠 Concepts: `modulo` · `if-else`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `7` | `a is odd` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-17-odd-or-even">⬆ to top of experiment 17</a></sub></p>

---

### Experiment 18: Gross salary of an employee

> 🎯 **AIM:** To calculate the gross salary of an employee.

<p align="left"><sub>🧠 Concepts: `else-if ladder` · `salary formula`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `6000` | `Gross salary = 14300.00` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-18-gross-salary-of-an-employee">⬆ to top of experiment 18</a></sub></p>

---

### Experiment 19: Average of six subjects with division classification

> 🎯 **AIM:** To find the average of marks in six subjects and the result.

<p align="left"><sub>🧠 Concepts: `do-while loop` · `1D arrays`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `80,85,90,95,88,75` | `Average mark : 85.50 \| Result : Distinction` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-19-average-of-six-subjects-with-division-classification">⬆ to top of experiment 19</a></sub></p>

---

### Experiment 20: Day of a week using switch case

> 🎯 **AIM:** To print the day of a week using switch case.

<p align="left"><sub>🧠 Concepts: `switch-case` · `break`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `3` | `Tuesday` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-20-day-of-a-week-using-switch-case">⬆ to top of experiment 20</a></sub></p>

---

### Experiment 21: Menu driven arithmetic calculations using switch case

> 🎯 **AIM:** To write a menu driven program to perform arithmetic calculations using switch case.

<p align="left"><sub>🧠 Concepts: `switch-case` · `menu-driven`</sub></p>

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

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `1 -> 10 5` | `Addition = 15.00` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-21-menu-driven-arithmetic-calculations-using-switch-case">⬆ to top of experiment 21</a></sub></p>

---

### Experiment 22: Display star pattern

> 🎯 **AIM:** To display the star pattern.

<p align="left"><sub>🧠 Concepts: `nested for loops` · `patterns`</sub></p>

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}
```

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `(none)` | `*<br>**<br>***<br>****<br>*****` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-22-display-star-pattern">⬆ to top of experiment 22</a></sub></p>

---

### Experiment 23: Display number triangle pattern

> 🎯 **AIM:** To display the number triangle pattern.

<p align="left"><sub>🧠 Concepts: `nested for loops` · `patterns`</sub></p>

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    getch();
}
```

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `(none)` | `1<br>12<br>123<br>1234<br>12345` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-23-display-number-triangle-pattern">⬆ to top of experiment 23</a></sub></p>

---

### Experiment 24: Print Floyd triangle

> 🎯 **AIM:** To display the Floyd triangle.

<p align="left"><sub>🧠 Concepts: `nested for loops` · `counter variable`</sub></p>

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, k = 1;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    getch();
}
```

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `(none)` | `1<br>2 3<br>4 5 6<br>7 8 9 10<br>11 12 13 14 15` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-24-print-floyd-triangle">⬆ to top of experiment 24</a></sub></p>

---

### Experiment 25: Find the sum of array elements

> 🎯 **AIM:** To find the sum of array elements.

<p align="left"><sub>🧠 Concepts: `1D arrays` · `for loop`</sub></p>

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, sum = 0;
    int arr[100];
    clrscr();

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements = %d", sum);

    getch();
}
```

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `5 -> 1 2 3 4 5` | `Sum of array elements = 15` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-25-find-the-sum-of-array-elements">⬆ to top of experiment 25</a></sub></p>

---

### Experiment 26: Find the largest element in an array

> 🎯 **AIM:** To find the largest element in an array.

<p align="left"><sub>🧠 Concepts: `1D arrays` · `comparison`</sub></p>

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, largest;
    int arr[100];
    clrscr();

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element = %d", largest);

    getch();
}
```

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `5 -> 3 9 4 7 1` | `Largest element = 9` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-26-find-the-largest-element-in-an-array">⬆ to top of experiment 26</a></sub></p>

---

### Experiment 27: Display a matrix

> 🎯 **AIM:** To display a matrix.

<p align="left"><sub>🧠 Concepts: `2D arrays` · `nested loops`</sub></p>

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int r, c, i, j;
    int matrix[10][10];
    clrscr();

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    getch();
}
```

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `2 3 -> 1 2 3 4 5 6` | `1 2 3<br>4 5 6` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-27-display-a-matrix">⬆ to top of experiment 27</a></sub></p>

---

### Experiment 28: Addition of two matrices

> 🎯 **AIM:** To add two matrices.

<p align="left"><sub>🧠 Concepts: `2D arrays` · `matrix addition`</sub></p>

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int r, c, i, j;
    int mat1[10][10], mat2[10][10], sum[10][10];
    clrscr();

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    getch();
}
```

💡 **Sample Run**

| 📥 Input | 📤 Output |
|----------|-----------|
| `2 2 -> 1 2 3 4 \| 5 6 7 8` | `6 8<br>10 12` |


<p align="center"><sub><a href="#-index">⬆ back to index</a> &nbsp;|&nbsp; <a href="#experiment-28-addition-of-two-matrices">⬆ to top of experiment 28</a></sub></p>

---

<h2 align="center">📄 About</h2>

| | |
|---|---|
| 🎓 **Subject** | C Programming Lab |
| 🧪 **Experiments** | 28 |
| 🖊️ **Source** | Handwritten lab record, digitized |
| 📄 **Full printable PDF** | [C_Lab_Record.pdf](./C_Lab_Record.pdf) — 35 pages, ready to print |
| 🌐 **Repository** | [akhil-tg/01012008](https://github.com/akhil-tg/01012008) |

<p align="center">
  <a href="https://github.com/akhil-tg"><img alt="author" src="https://img.shields.io/badge/Made%20with-%E2%9D%A4%EF%B8%8F%20%26%20C-blue?style=flat-square"/></a>
</p>
<h2 align="center">🌟 Enjoyed the ride?</h2>

<p align="center">
  <a href="https://github.com/akhil-tg/01012008/stargazers"><img alt="Star this repo" src="https://img.shields.io/badge/⭐-Star_this_repo-4F46E5?style=for-the-badge"/></a>
  <a href="https://github.com/akhil-tg/01012008/fork"><img alt="Fork and experiment" src="https://img.shields.io/badge/🍴-Fork_%26_experiment-818CF8?style=for-the-badge"/></a>
  <a href="https://github.com/akhil-tg/01012008/blob/main/C_Lab_Record.pdf"><img alt="Grab the PDF" src="https://img.shields.io/badge/📄-Grab_the_PDF-EA580C?style=for-the-badge"/></a>
</p>

<p align="center"><sub>💡 Learned something? Drop a ⭐ so the next C student finds this lab record faster!</sub></p>