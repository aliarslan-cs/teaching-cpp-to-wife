# REPETITION LOOPS

The purpose of this lab is to learn how to repeat instructions using `for`, `while`, and `do while` loops.

# Background

A loop repeats a block of code while a condition is true. Loops save you from writing the same instructions many times.

For example, instead of writing five separate `std::cout` statements to print the numbers from `1` to `5`, a loop can repeat one statement five times.

# Let's dive deeper!

## `for` Loops

Use a `for` loop when you know how many times code should repeat. A `for` loop has three parts:

1. A starting value.
2. A condition that is checked before every repetition.
3. An update that happens after every repetition.

```cpp
#include <iostream>

int main() {
    for (int number = 1; number <= 5; number++) {
        std::cout << number << "\n";
    }

    return 0;
}
```

`number++` increases `number` by `1`. This program prints the numbers `1` through `5`.

## `while` Loops

Use a `while` loop when code should repeat as long as a condition is true. Set up the variable before the loop and update it inside the loop.

```cpp
#include <iostream>

int main() {
    int number = 5;

    while (number >= 1) {
        std::cout << number << "\n";
        number--;
    }

    return 0;
}
```

`number--` decreases `number` by `1`. This program prints the numbers `5` down to `1`.

## `do while` Loops

A `do while` loop runs its body first and checks the condition afterward. This means its body always runs at least once.

```cpp
#include <iostream>

int main() {
    int number = 1;

    do {
        std::cout << number << "\n";
        number++;
    } while (number <= 5);

    return 0;
}
```

Notice the semicolon after `while (number <= 5);`. It is required for a `do while` loop.

## Avoiding Infinite Loops

An infinite loop never stops because its condition always stays true. Make sure that a loop variable changes so the condition eventually becomes false.

```cpp
int number = 1;

while (number <= 5) {
    std::cout << number << "\n";
    number++; // Without this line, the loop would never end.
}
```

# Task 01

Create a program that prints a short countdown and count-up.

1. Create a file called `loops.cpp` in the `labs\lab-05-repetition-loops\` directory.
2. Add the `iostream` header and create a `main` function.
3. Use a `for` loop to print the numbers from `1` to `5`.
4. Use a `while` loop to print the numbers from `5` down to `1`.
5. Use a `do while` loop to print the numbers from `1` to `3`.
6. Add a message before each loop so the output clearly shows which loop is running.
7. Compile and run the program. Change one loop's starting value or condition and run it again.

## Task 02

Create a program that prints a multiplication table for a number.

1. Create a file called `multiplication-table.cpp` in the `labs\lab-05-repetition-loops\` directory.
2. Add the `iostream` header and create a `main` function.
3. Create a function named `printTable` above `main`. It should take one `int` parameter named `number` and return `void`.
4. Inside `printTable`, use a `for` loop that counts from `1` to `10`.
5. In each repetition, print one multiplication line in the format `number x multiplier = result`.
6. In `main`, create an `int` variable named `number`, give it a value, and call `printTable(number)`.
7. Compile and run the program. Change `number` and run it again.

For example, when `number` is `6`, the output should be:

```text
6 x 1 = 6
6 x 2 = 12
...
6 x 10 = 60
```

## Execution commands

### Task 01

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-05-repetition-loops\loops.cpp -o loops.exe

And then run the produced artifact by running the command:

    .\loops.exe

### Task 02

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-05-repetition-loops\multiplication-table.cpp -o multiplication-table.exe

And then run the produced artifact by running the command:

    .\multiplication-table.exe

# Before you leave

## Choosing a Loop

Use a `for` loop when you know the number of repetitions. Use a `while` loop when you want to check the condition before running the loop. Use a `do while` loop when the instructions must run at least once.
