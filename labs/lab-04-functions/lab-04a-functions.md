# FUNCTIONS

The purpose of this lab is to learn how to group instructions into reusable functions.

# Background

A function is a named group of instructions that performs one task. Instead of writing the same instructions many times, you can place them in a function and call the function whenever you need it.

You have already used a function: `main` is the function where every C++ program starts.

# Function Parts

| Part | Meaning | Example |
| --- | --- | --- |
| Return type | What the function gives back when it finishes. | `void` |
| Function name | The name you use to call the function. | `printGreeting` |
| Parentheses | Hold information passed to a function. They are empty when no information is needed. | `()` |
| Function body | The instructions inside curly braces. | `{ ... }` |

Use `void` when a function does not need to give a value back.

# Let's dive deeper!

## Defining and Calling a Function

Here is a program with a function that prints a greeting:

```cpp
#include <iostream>

void printGreeting() {
    std::cout << "Hello!\n";
}

int main() {
    printGreeting();

    return 0;
}
```

The lines inside `printGreeting` do not run when C++ reads the function definition. They run only when `main` calls `printGreeting();`.

For now, define a function above `main`. This lets C++ read the function before `main` calls it.

# Task

Create a program that calls two functions.

1. Create a file called `functions.cpp` in the `labs\lab-04-functions\` directory.
2. Add the `iostream` header.
3. Create a function named `printGreeting` that prints `Welcome to C++!`.
4. Create a second function named `printGoodbye` that prints `Goodbye!`.
5. Create a `main` function that calls `printGreeting` and then `printGoodbye`.
6. Compile and run the program.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-04-functions\functions.cpp -o functions.exe

And then run the produced artifact, by running the command:

    .\functions.exe

# Before you leave

## `main` is a Function

The `main` function is special because C++ calls it automatically when the program starts. Other functions, such as `printGreeting`, run only when you call them by name.