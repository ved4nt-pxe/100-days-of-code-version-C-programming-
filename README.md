# 100 Days of Code — C Programming

Daily code logs and practice exercises tracking my journey learning programming fundamentals and building projects in C.

This repo contains all the programs I wrote while learning C, organized topic by topic. It was created after I had already covered several topics, so topics 01–09 were all added at the same time as the log.

## Repository Structure

```
├── 01-basics/          # Variables, input/output, simple arithmetic
├── 02-conditionals/    # if, else if, else
├── 03-loops/           # for, while
├── 04-functions/       # User-defined functions
├── 05-arrays/          # Single-dimensional arrays
├── 06-strings/         # Strings and character handling
├── 07-pointers/        # Pointer basics and pointer arithmetic
├── 08-structures/      # Structs and arrays of structs
├── 09-File_handling/   # File input/output
├── projects/           # Small end-to-end projects
└── README.md
```

## 01 — Basics

| Program | Description |
| --- | --- |
| `Hello-World.c` | Prints "Hello World" to the screen. |
| `Add Two Numbers.c` | Takes two integers as input and prints their sum. |
| `Even_OR_Odd.c` | Checks whether an input number is even or odd. |

## 02 — Conditionals

| Program | Description |
| --- | --- |
| `Grade_Calculator.c` | Assigns a letter grade (A+ to F) based on marks out of 100. |
| `Greater_of_Two.c` | Compares two numbers and prints which one is greater (or that they are equal). |
| `Leap_Year.c` | Determines whether a given year is a leap year. |

## 03 — Loops

| Program | Description |
| --- | --- |
| `Factorial.c` | Computes the factorial of a number using a `for` loop. |
| `Fibonacci.c` | Prints the first `n` terms of the Fibonacci series. |
| `Marks Caluclator.c` | Takes marks for 5 subjects, calculates total and percentage, and prints grade and pass/fail status. |
| `Multiplication_Table.c` | Prints the multiplication table of a number using a `while` loop. |

## 04 — Functions

| Program | Description |
| --- | --- |
| `Factorial_Func.c` | Computes the factorial of a number using a user-defined function. |
| `Sum_and_Average.c` | Reads an array and prints its sum and average using functions. |
| `Swap_Numbers.c` | Swaps two numbers by passing pointers to a function. |

## 05 — Arrays

| Program | Description |
| --- | --- |
| `Even_Odd_Sum.c` | Separates the sum of even and odd elements in an array. |
| `Largest_and_Smallest.c` | Finds the largest and smallest elements in an array. |
| `Reverse_Array.c` | Reverses an array in place and prints the result. |

## 06 — Strings

| Program | Description |
| --- | --- |
| `Count_Vowels.c` | Counts the number of vowels and consonants in a string. |
| `Reverse_String.c` | Reverses an input string character by character. |
| `String_Length.c` | Calculates the length of a string without using `strlen()`. |

## 07 — Pointers

| Program | Description |
| --- | --- |
| `Pointer_Basics.c` | Demonstrates pointer declaration, the address-of (`&`) and dereference (`*`) operators, and mutation through a pointer. |
| `Pointers_with_Arrays.c` | Traverses an array using pointer arithmetic. |
| `Swap_With_Pointers.c` | Swaps two variables using pointers. |

## 08 — Structures

| Program | Description |
| --- | --- |
| `Employee_Array.c` | Stores data for 3 employees in an array of structs and lists those earning more than 50000. |
| `Rectangle_Struct.c` | Computes the area and perimeter of a rectangle using a struct. |
| `Student_Struct.c` | Reads and prints a student's details using a struct. |

## 09 — File Handling

| Program | Description |
| --- | --- |
| Coming soon | Programs here will cover reading from and writing to files. |

## Projects

| Program | Description |
| --- | --- |
| `Calculator.c` | A small calculator that reads an equation (e.g. `10 + 20`) and performs addition, subtraction, multiplication, or division using functions and a `switch` statement. |

## How to Compile & Run

All programs are standard C and can be compiled with any C compiler, e.g. `gcc`:

```bash
gcc 01-basics/Hello-World.c -o hello
./hello
```

For example, to build and run the calculator project:

```bash
gcc projects/Calculator.c -o calculator
./calculator
```