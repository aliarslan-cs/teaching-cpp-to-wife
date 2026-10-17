# SCOPE AND MUTABILITY

The purpose of this lab is to learn where variables can be used and when their values can change.

# Background

Every variable has a **scope** and a **mutability**.

- Scope is the part of a program where the variable can be used.
- Mutability describes whether the variable can be changed after it is created.

Understanding both helps you choose clear names, prevent mistakes, and write safer programs.

# Let's dive deeper!

## Scope

A variable declared inside a pair of curly braces `{ }` can only be used inside those braces. This is called block scope.

```cpp
#include <iostream>

int main() {
    int score = 10;

    {
        int bonus = 5;
        std::cout << "Score with bonus: " << score + bonus << "\n";
    }

    std::cout << "Score: " << score << "\n";

    return 0;
}
```

`score` can be used throughout `main` because it was created in `main`'s outer block. `bonus` can only be used inside the smaller block where it was created. Using `bonus` after that block would cause a compiler error.

## Variables Inside Functions

Variables declared inside a function can only be used inside that function. Function parameters also belong only to the function that receives them.

```cpp
#include <iostream>

int doubleScore(int score) {
    int doubledScore = score * 2;
    return doubledScore;
}

int main() {
    int score = 10;
    int result = doubleScore(score);

    std::cout << result << "\n";

    return 0;
}
```

The `score` parameter and `doubledScore` variable exist only inside `doubleScore`. `main` cannot use `doubledScore`. The `score` variable in `main` is a separate variable, even though it has the same name as the parameter.

## `const`: A Value That Cannot Change

Use `const` when a variable should keep the same value after it is created.

```cpp
const int daysInWeek = 7;
int completedDays = 3;

std::cout << daysInWeek << "\n";
completedDays = 4;
std::cout << completedDays << "\n";

// daysInWeek = 8; // This causes a compiler error.
```

A `const` variable must be given a value when it is created. `completedDays` is not `const`, so the program can change it from `3` to `4`. Use `const` for values such as a tax rate, a maximum score, or the number of days in a week.

## `constexpr`: A Value Known at Compile Time

`constexpr` means that a value must be known while the program is being compiled. The compiler can calculate it before the program runs.

```cpp
constexpr int minutesPerHour = 60;
constexpr int secondsPerHour = minutesPerHour * 60;

std::cout << secondsPerHour << "\n";
```

In this example, the compiler calculates `secondsPerHour` as `3600` during compilation. This is called a compile-time calculation.

Because the calculation is already complete before the program starts, the program does not need to perform it at runtime. This can make a program faster, especially when a calculation would otherwise be repeated many times. `constexpr` does not automatically make every program faster, but it gives the compiler an opportunity to do work earlier.

`const` prevents a value from changing, but it does not always mean that the value is known at compile time. For example, a value read from the user cannot be `constexpr` because it is not known until the program runs.

```cpp
int age;
std::cin >> age;
const int nextYearAge = age + 1; // Constant after this line, but calculated at runtime.
```

## `constexpr` Functions

A `constexpr` function can be calculated at compile time when it receives values that are known at compile time.

```cpp
constexpr int square(int number) {
    return number * number;
}

constexpr int area = square(5);
```

Here, the compiler can calculate `square(5)` before the program runs. The same function can also be called with a value that is only known at runtime; then the calculation happens while the program runs.

## `auto`: Let C++ Infer the Type

Use `auto` when C++ can clearly determine a variable's type from its starting value.

```cpp
auto numberOfStudents = 24;    // int
auto price = 2.50;             // double
auto grade = 'A';              // char
```

`auto` does not make a variable constant. You can still change it:

```cpp
auto score = 10;
score = 15;
```

Combine `const` and `auto` when you want C++ to infer the type and prevent changes:

```cpp
const auto taxRate = 0.21;
```

Use `auto` when the type is obvious from the value. Do not use it when it would make the code hard to understand. An `auto` variable must have a starting value so C++ can determine its type.

# Task

Create a program that calculates a study plan.

1. Create a file called `scope.cpp` in the `labs\lab-06-scope-and-mutability\` directory.
2. Add the `iostream` header and create a `main` function.
3. Create a `constexpr int` called `daysInWeek` with the value `7`.
4. Create a second `constexpr int` called `studyHoursPerDay`, then use it and `daysInWeek` to create a third `constexpr int` called `studyHoursPerWeek`.
5. Create a `const double` called `breakHoursPerDay` and give it a decimal value. Calculate and print the total break hours for a week.
6. Create an `auto` variable called `completedHours` and give it an integer value. Add more hours to it, then print the updated value.
7. Create an inner block using `{ }`. Inside it, create an `int` called `extraHours` and print `completedHours + extraHours`. Do not use `extraHours` outside the inner block.
8. Compile and run the program. Change the values and run it again.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-06-scope-and-mutability\scope.cpp -o scope.exe

And then run the produced artifact by running the command:

    .\scope.exe

# Before you leave

## Choosing a Variable Type

Use `int`, `double`, or another named type when the type is important for a reader to see immediately. Use `auto` when the starting value makes the type clear. Add `const` or `constexpr` when a value should not change.
