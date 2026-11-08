/* ==========================================
   COMPUTER SCIENCE PRACTICAL RECORD PROGRAMS
   ========================================== */

/* ------------------------------------------
   Experiment 1: Size of Data Types
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    clrscr();
    printf("SIZE OF DATA TYPES:\n\n");
    printf("size of int = %d bytes\n", sizeof(int));
    printf("size of char = %d bytes\n", sizeof(char));
    printf("size of float = %d bytes\n", sizeof(float));
    printf("size of double = %d bytes\n", sizeof(double));
    getch();
}


/* ------------------------------------------
   Experiment 2: Perimeter and Area of Triangle
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    float a, b, c, s, area, perimeter;
    clrscr();
    printf("Enter three sides of triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    
    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("perimeter = %f", perimeter);
    printf("\nArea = %f", area);
    getch();
}


/* ------------------------------------------
   Experiment 3: Area and Circumference of Circle
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    float r, area, circumference;
    clrscr();
    printf("Enter radius: ");
    scanf("%f", &r);
    
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    
    printf("Area = %f", area);
    printf("\nCircumference = %f", circumference);
    getch();
}


/* ------------------------------------------
   Experiment 4: Fahrenheit to Celsius
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    float f, c;
    clrscr();
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f - 32) * 5 / 9;
    
    printf("Temperature in celsius = %f", c);
    getch();
}


/* ------------------------------------------
   Experiment 5: Simple Interest
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    float p, r, t, si;
    clrscr();
    printf("Enter principal, rate and time: ");
    scanf("%f%f%f", &p, &r, &t);
    
    si = (p * r * t) / 100;
    
    printf("Simple Interest = %f", si);
    getch();
}


/* ------------------------------------------
   Experiment 6: Swap Two Numbers Without Temporary Variable
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: a = %d, b = %d", a, b);
    getch();
}


/* ------------------------------------------
   Experiment 7: Swap Two Numbers Using Temporary Variable
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, temp;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping: a = %d, b = %d", a, b);
    getch();
}


/* ------------------------------------------
   Experiment 8: Check a > b Using Conditional Operator
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    (a > b) ? printf("a is greater") : printf("b is greater or equal");
    getch();
}


/* ------------------------------------------
   Experiment 9: Arithmetic and Relational Operators (Short-hand)
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, x;
    clrscr();
    printf("Enter two values: ");
    scanf("%d%d", &a, &b);
    
    x = a;
    printf("\nArithmetic operations: ");
    
    x += b;
    printf("\nAddition = %d", x);
    
    x = a;
    x -= b;
    printf("\nSubtraction = %d", x);
    
    x = a;
    x *= b;
    printf("\nMultiplication = %d", x);
    
    x = a;
    x /= b;
    printf("\nDivision = %d", x);
    
    printf("\n\nRelational operator:");
    printf("\na > b = %d", a > b);
    printf("\na < b = %d", a < b);
    printf("\na == b = %d", a == b);
    printf("\na != b = %d", a != b);
    printf("\na >= b = %d", a >= b);
    printf("\na <= b = %d", a <= b);
    getch();
}


/* ------------------------------------------
   Experiment 10: Evaluate Expression (a + b) * c
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c, result;
    clrscr();
    printf("Enter a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    result = (a + b) * c;
    
    printf("Result = %d", result);
    getch();
}


/* ------------------------------------------
   Experiment 11: Check Equivalence of Two Numbers
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;
    clrscr();
    printf("Enter two integers a and b: ");
    scanf("%d%d", &a, &b);
    
    if (a == b) {
        printf("1. condition (a == b) is TRUE\n");
    } else {
        printf("1. condition (a == b) is FALSE\n");
    }
    
    if ((a - b) == 0) {
        printf("2. condition (a - b == 0) is TRUE\n");
    } else {
        printf("2. condition (a - b == 0) is FALSE\n");
    }
    
    if (b != 0) {
        if ((a / b) == 1) {
            printf("3. Condition (a / b == 1) is TRUE\n");
        } else {
            printf("3. condition (a / b == 1) is FALSE\n");
        }
    } else {
        printf("3. Division by zero is not possible\n");
    }
    getch();
}


/* ------------------------------------------
   Experiment 12: Largest of Two Numbers
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    if (a > b) {
        printf("a is larger");
    } else {
        printf("b is larger");
    }
    getch();
}


/* ------------------------------------------
   Experiment 13: Maximum of Three Numbers
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c;
    clrscr();
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("A is largest");
    } else if (b > a && b > c) {
        printf("B is largest");
    } else {
        printf("C is largest");
    }
    getch();
}


/* ------------------------------------------
   Experiment 14: Smallest of Two Numbers
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    if (a < b) {
        printf("a is smaller");
    } else {
        printf("b is smaller");
    }
    getch();
}


/* ------------------------------------------
   Experiment 15: Calculate Energy Bill Using Else-If Ladder
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    float start, end, units, bill;
    clrscr();
    printf("Enter starting meter reading: ");
    scanf("%f", &start);
    printf("Enter ending meter reading: ");
    scanf("%f", &end);
    
    units = end - start;
    
    if (units > 200 && units <= 300) {
        bill = units * 3.50;
    } else if (units >= 100 && units <= 200) {
        bill = units * 2.50;
    } else if (units < 100) {
        bill = units * 1.50;
    }
    
    printf("\nUnits consumed = %f", units);
    printf("\nEnergy bill = Rs %.2f", bill);
    getch();
}


/* ------------------------------------------
   Experiment 16: Check Leap Year
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int year;
    clrscr();
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if (year % 4 == 0) {
        printf("Leap year");
    } else {
        printf("Not a leap year");
    }
    getch();
}


/* ------------------------------------------
   Experiment 17: Check Odd or Even
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    int a;
    clrscr();
    printf("Enter the number: ");
    scanf("%d", &a);
    
    if (a % 2 == 0) {
        printf("a is even");
    } else {
        printf("a is odd");
    }
    getch();
}


/* ------------------------------------------
   Experiment 18: Calculate Gross Salary
   ------------------------------------------ */
#include <stdio.h>
#include <conio.h>

void main() {
    float basic_salary, da, hra, conveyance, gross_salary;
    clrscr();
    printf("Enter Basic salary: ");
    scanf("%f", &basic_salary);
    
    if (basic_salary >= 5000) {
        da = 1.10 * basic_salary;
        hra = 0.20 * basic_salary;
        conveyance = 500;
    } else if (basic_salary >= 3000 && basic_salary < 5000) {
        da = 1.00 * basic_salary;
        hra = 0.15 * basic_salary;
        conveyance = 400;
    } else if (basic_salary >= 3000) {
        da = 0.90 * basic_salary;
        hra = 0.10 * basic_salary;
        conveyance = 300;
    } else {
        printf("Invalid value");
    }
    
    gross_salary = basic_salary + da + hra + conveyance;
    printf("Gross salary = %.2f", gross_salary);
    getch();
}