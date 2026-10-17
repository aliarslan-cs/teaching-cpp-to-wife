# FUNCTIONS WITH ARGUMENTS

The purpose of this lab is to learn how to give information to a function and receive a result from it.

# Background

A function can receive values from the code that calls it. This makes one function useful for many different values.

An **argument** is the value written when you call a function. A **parameter** is the variable written in the function definition that receives that value.

```cpp
void printNumber(int number) {
    std::cout << number << "\n";
}

int main() {
    printNumber(7);
}
```

In this example, `7` is the argument and `number` is the parameter.

# Let's dive deeper!

## Passing by Value

By default, C++ passes an argument by value. The function receives a copy of the value. Changing the parameter does not change the original variable.

```cpp
#include <iostream>

void addFive(int score) {
    score = score + 5;
    std::cout << "Inside the function: " << score << "\n";
}

int main() {
    int score = 10;

    addFive(score);
    std::cout << "After the function: " << score << "\n";

    return 0;
}
```

This program prints `15` inside `addFive`, but it prints `10` afterward in `main`. `addFive` changed its copy of `score`, not the original variable.

## Passing by Reference

Add `&` to a parameter type to pass by reference. The parameter becomes another name for the original variable, so changes inside the function change the original value.

```cpp
#include <iostream>

void addFive(int& score) {
    score = score + 5;
}

int main() {
    int score = 10;

    addFive(score);
    std::cout << "After the function: " << score << "\n";

    return 0;
}
```

This time the program prints `15` because the function changed the original `score` variable.

Use pass by value when a function only needs to read a value or should work with a copy. Use pass by reference when the function needs to update the original variable.

## Returning a Value

So far, the functions have used `void` as their return type. `void` means the function does not return a result. To return a value, replace `void` with the type of value the function will return and use the `return` keyword.

```cpp
#include <iostream>

int addNumbers(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int main() {
    int total = addNumbers(7, 3);

    std::cout << "Total: " << total << "\n";

    return 0;
}
```

`addNumbers` has the return type `int`, so it must return an `int` value. The call `addNumbers(7, 3)` produces `10`, which is stored in `total`.

## A Brief Note About Pointers

A function can also receive a pointer parameter, written with `*`, such as `void updateScore(int* score)`. A pointer contains the address of another variable. This can also let a function work with the original variable, but it requires extra syntax and care. We will cover pointers in a later lab.

# Task

Create a program that demonstrates pass by value, pass by reference, and returning a value.

1. Create a file called `arguments.cpp` in the `labs\lab-04-functions\` directory.
2. Add the `iostream` header and create a `main` function.
3. Create an `int` variable called `score` and give it a value.
4. Create a function named `increaseCopy` that takes an `int` parameter by value. Increase the parameter by `5` and print it inside the function.
5. Call `increaseCopy` with `score`, then print `score` in `main` to show that it did not change.
6. Create a function named `increaseOriginal` that takes an `int` parameter by reference using `int&`. Increase the parameter by `5`.
7. Call `increaseOriginal` with `score`, then print `score` in `main` to show that it changed.
8. Create a function named `addScores` that takes two `int` parameters and returns their sum as an `int`.
9. Call `addScores`, store its returned value in an `int` variable, and print the result.
10. Compile and run the program. Change the starting score and run it again.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-04-functions\arguments.cpp -o arguments.exe

And then run the produced artifact, by running the command:

    .\arguments.exe

# Before you leave

## Parameter Names

The argument and parameter do not need the same name:

```cpp
void printNumber(int value) {
    std::cout << value << "\n";
}

int main() {
    int score = 10;
    printNumber(score);
}
```

Here, `score` is the argument and `value` is the parameter. The function receives the value stored in `score`.
