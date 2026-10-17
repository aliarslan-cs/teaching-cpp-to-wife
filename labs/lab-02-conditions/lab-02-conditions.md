# CONDITIONAL STATEMENTS

The purpose of this lab is to learn how a program can make a choice.

# Background

Programs often need to choose between two actions. For example, a program may display one message when a person is old enough and a different message when they are not.

An `if` statement checks whether a condition is true or false. When the condition is true, C++ runs the code inside the `if` block. When it is false, C++ can run the code inside an `else` block instead.

# Comparison Operators

Comparison operators compare two values and produce either `true` or `false`.

| Operator | Meaning | Example |
| --- | --- | --- |
| `==` | Is equal to | `age == 18` |
| `!=` | Is not equal to | `age != 18` |
| `>` | Is greater than | `age > 18` |
| `<` | Is less than | `age < 18` |
| `>=` | Is greater than or equal to | `age >= 18` |
| `<=` | Is less than or equal to | `age <= 18` |

# Let's dive deeper!

## If and Else

Here is a program that checks the temperature and prints a message:

```cpp
#include <iostream>

int main() {
    int temperature = 22;

    if (temperature >= 20) {
        std::cout << "It is warm outside.\n";
    } else {
        std::cout << "It is cool outside.\n";
    }

    return 0;
}
```

The condition `temperature >= 20` asks whether `temperature` is at least `20`. Because `22` is greater than `20`, the condition is true and the first message is printed.

## Multiple Conditions with `else if`

Use `else if` when there are more than two possible outcomes. C++ checks the conditions from top to bottom and runs only the first matching block. The final `else` handles every value that did not match an earlier condition.

```cpp
#include <iostream>

int main() {
    int score = 76;

    if (score >= 90) {
        std::cout << "Excellent work!\n";
    } else if (score >= 75) {
        std::cout << "Good work!\n";
    } else if (score >= 60) {
        std::cout << "You passed.\n";
    } else {
        std::cout << "Keep practicing.\n";
    }

    return 0;
}
```

Since `score` is `76`, the program prints `Good work!`. Try changing `score` to values such as `95`, `65`, and `50` to see the other branches.

# Task

Create a program that prints a message about a person's age.

1. Create a file called `if-else.cpp` in the `labs\lab-02-conditions\` directory.
2. Add the `iostream` header and create a `main` function.
3. Create an `int` variable called `age` and give it a value.
4. Use an `if`, an `else if`, and an `else` statement to choose between three age groups:
    - Print `You are a child.` when `age` is less than `13`.
    - Print `You are a teenager.` when `age` is at least `13` but less than `18`.
    - Print `You are an adult.` for every other age.
5. Compile and run the program. Change the age and run it again to see each message.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-02-conditions\if-else.cpp -o if-else.exe

And then run the produced artifact, by running the command:

    .\if-else.exe

# Before you leave

## `=` and `==`

Use `==` to compare values in an `if` condition. A single `=` assigns a value instead.

```cpp
if (age == 18) {
    std::cout << "You are 18.\n";
}
```

Writing `age = 18` inside the condition changes the value of `age`, so it does not perform the comparison you want.