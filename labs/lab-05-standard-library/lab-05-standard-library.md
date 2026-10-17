# THE C++ STANDARD LIBRARY

The purpose of this lab is to use the C++ standard library to display messages and read input from the user.

# Background

The C++ standard library is a collection of useful code that comes with C++. It provides tools for working with input and output, text, numbers, files, and many other common programming tasks.

To use part of the standard library, include its header at the top of your program. The `iostream` header provides tools for input and output.

```cpp
#include <iostream>
```

Most names from the standard library begin with `std::`. The `std` part identifies the standard library. For example, `std::cout` and `std::cin` both come from the standard library.

# Let's dive deeper!

## Output with `std::cout`

`std::cout` prints output to the terminal. Use `<<` to send text or values to it.

```cpp
#include <iostream>

int main() {
    int score = 42;

    std::cout << "Your score is " << score << "\n";

    return 0;
}
```

## New Lines: `\n` and `std::endl`

The `\n` is a newline character. It moves the cursor to the next line after the message.

```cpp
std::cout << "First line\n";
std::cout << "Second line\n";
```

You can also use `std::endl` to start a new line:

```cpp
std::cout << "First line" << std::endl;
```

Both approaches start a new line. `std::endl` also immediately sends any waiting output to the screen. This extra step is usually unnecessary, so use `\n` for normal output.

## Input with `std::cin`

`std::cin` reads input typed by the user. Use `>>` to store the input in a variable.

```cpp
#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Next year, you will be " << age + 1 << ".\n";

    return 0;
}
```

When the program reaches `std::cin >> age`, it pauses and waits for the user to type a whole number and press Enter. The number is then stored in `age`.

The variable type should match the type of input you expect. For example, read whole numbers into an `int` and decimal numbers into a `double`.

```cpp
double price;
std::cout << "Enter the price: ";
std::cin >> price;
```

## Reading One Word

You can also read one word into a `std::string`. Include the `string` header when you use `std::string`.

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "!\n";

    return 0;
}
```

`std::cin >> name` reads one word. If the user enters `Ada Lovelace`, only `Ada` is stored. Reading a full line of text is a later topic.

# Task

Create a program that asks the user about a snack purchase and prints a summary.

1. Create a file called `input-output.cpp` in the `labs\lab-05-standard-library\` directory.
2. Add the `iostream` and `string` headers, then create a `main` function.
3. Create a `std::string` variable called `snackName`, an `int` variable called `quantity`, and a `double` variable called `price`.
4. Use `std::cout` and `std::cin` to ask the user for the snack name, quantity, and price of one snack.
5. Calculate the total cost by multiplying `quantity` and `price`.
6. Use `std::cout` to print a clear summary that includes the snack name, quantity, and total cost.
7. Compile and run the program. Enter different values to see a different summary.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-05-standard-library\input-output.cpp -o input-output.exe

And then run the produced artifact by running the command:

    .\input-output.exe

# Before you leave

## `<<` and `>>`

The symbols point in the direction that data moves:

```cpp
std::cout << "This goes to the screen.\n";
std::cin >> quantity;
```

`<<` sends output to `std::cout`. `>>` takes input from `std::cin` and stores it in a variable.
