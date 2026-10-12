# SWITCH

The purpose of this lab is to learn how to choose from several possible actions using a `switch` statement.

# Background

An `if` statement is useful when checking one condition. A `switch` statement is useful when one value can match several known options.

For example, a number from `1` to `7` can represent a day of the week. A `switch` statement can print a different day for each number.

# Switch Statements

A `switch` statement checks one value. Each `case` is one possible value. The `break` statement stops the `switch` after C++ finds a matching case. The `default` case runs when no other case matches.

# Let's dive deeper!

## Switch and Case

Here is a program that prints a day of the week:

```cpp
#include <iostream>

int main() {
    int dayNumber = 2;

    switch (dayNumber) {
        case 1:
            std::cout << "Monday\n";
            break;
        case 2:
            std::cout << "Tuesday\n";
            break;
        case 3:
            std::cout << "Wednesday\n";
            break;
        default:
            std::cout << "Choose a number from 1 to 3.\n";
            break;
    }

    return 0;
}
```

The value of `dayNumber` is `2`, so C++ runs `case 2` and prints `Tuesday`. After printing the message, `break` stops the `switch` statement.

# Task

Create a program that prints the name of a drink from a menu number.

1. Create a file called `switch.cpp` in the `labs\lab-02-conditions\` directory.
2. Add the `iostream` header and create a `main` function.
3. Create an `int` variable called `menuNumber` and give it a value from `1` to `3`.
4. Create a `switch` statement that uses `menuNumber`.
5. Add cases that print `Water`, `Juice`, and `Tea` for menu numbers `1`, `2`, and `3`.
6. Add a `default` case that prints `That drink is not on the menu.`
7. Compile and run the program. Change `menuNumber` and run it again.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-02-conditions\switch.cpp -o switch.exe

And then run the produced artifact, by running the command:

    .\switch.exe

# Before you leave

## Do not forget `break`

Without `break`, C++ continues to run the next case even when it does not match. This is called fall-through.

```cpp
case 1:
    std::cout << "Water\n";
    break;
```

For now, add `break` at the end of every case, including `default`.