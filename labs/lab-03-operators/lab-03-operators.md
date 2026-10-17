# ARITHMETIC OPERATORS

The purpose of this lab is to use C++ to perform calculations with numbers.

# Background

An operator is a symbol that tells C++ to perform an action on one or more values. Arithmetic operators let a program add, subtract, multiply, divide, and find a remainder.

This lab starts with `int` values, then uses `float` and `double` values for calculations that need decimal places.

# Arithmetic Operators

| Operator | Name | Example | Result |
| --- | --- | --- | --- |
| `+` | Addition | `8 + 3` | `11` |
| `-` | Subtraction | `8 - 3` | `5` |
| `*` | Multiplication | `8 * 3` | `24` |
| `/` | Division | `8 / 3` | `2` |
| `%` | Remainder | `8 % 3` | `2` |

The `%` operator is called the modulo operator. It gives the remainder left after division.

# Let's dive deeper!

## Integer Arithmetic

Here is a program that uses each arithmetic operator:

```cpp
#include <iostream>

int main() {
    int apples = 17;
    int friends = 5;

    std::cout << "Apples after buying 3 more: " << apples + 3 << "\n";
    std::cout << "Apples after giving away 2: " << apples - 2 << "\n";
    std::cout << "Apples in 4 baskets: " << apples * 4 << "\n";
    std::cout << "Whole apples per friend: " << apples / friends << "\n";
    std::cout << "Apples left over: " << apples % friends << "\n";

    return 0;
}
```

When both values are `int`s, division drops the decimal part. For example, `17 / 5` is `3`, not `3.4`. The remainder is `2`, so `17 % 5` is `2`.

Never divide by zero. An expression such as `apples / 0` is invalid and can cause your program to fail.

## Decimal Arithmetic with `float` and `double`

Use `float` or `double` when a calculation needs a decimal part. A `double` stores more precision than a `float`, so it is usually the better choice for decimal calculations.

```cpp
#include <iostream>

int main() {
    int wholeNumber = 17;
    int divisor = 5;
    float floatPrice = 2.5f;
    double doublePrice = 2.5;

    std::cout << "Integer division: " << wholeNumber / divisor << "\n";
    std::cout << "Decimal division: " << static_cast<double>(wholeNumber) / divisor << "\n";
    std::cout << "Float total: " << floatPrice * 3 << "\n";
    std::cout << "Double total: " << doublePrice * 3 << "\n";

    return 0;
}
```

The first division prints `3` because both values are `int`s. Converting one value to `double` makes the result `3.4`.

Write an `f` after a decimal number when you want it to be a `float`, such as `2.5f`. A decimal number without `f`, such as `2.5`, is a `double`.

The remainder operator `%` only works with whole-number types such as `int`. It cannot be used with `float` or `double`.

## Order of Operations

C++ performs multiplication, division, and remainder before addition and subtraction. Use parentheses when you want part of a calculation to happen first.

```cpp
int answerOne = 2 + 3 * 4;      // 14
int answerTwo = (2 + 3) * 4;    // 20
```

# Task

Create a program that calculates how many packs of pencils are needed for a class.

1. Create a file called `operators.cpp` in the `labs\lab-03-operators\` directory.
2. Add the `iostream` header and create a `main` function.
3. Create an `int` variable called `students` and give it a value. Create another `int` variable called `pencilsPerStudent` and give it a value.
4. Use `*` to calculate and print the total number of pencils needed.
5. Create an `int` variable called `pencilsPerPack` and give it a value.
6. Use `/` to calculate and print how many full packs are needed, and use `%` to print how many pencils would be left over after making full packs.
7. Use `+` and `-` in two additional calculations of your choice, and print both results with clear labels.
8. Create a `double` variable called `pricePerPack`. Use `*` to calculate and print the cost of the full packs.
9. Compile and run the program. Change the values and run it again.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-03-operators\operators.cpp -o operators.exe

And then run the produced artifact, by running the command:

    .\operators.exe

# Before you leave

## Changing a Variable

You can use an arithmetic operator and `=` together to update a variable:

```cpp
int score = 10;
score += 5; // score is now 15
score -= 2; // score is now 13
```

`+=` adds a value to the variable. `-=` subtracts a value from it. C++ also supports `*=`, `/=`, and `%=`.
