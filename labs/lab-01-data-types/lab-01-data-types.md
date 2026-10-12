# GETTING STARTED

The purpose of this lab is to understand how we can store information in a program and reuse it.

# Background

The term 'data' is normally used in place of  information. We can store all kinds of information like numbers, booleans(true/false), text, character, etc. You can also store complex and custom grouped structures like Person(name, id, gender, etc) but that will be covered in advance topics. For now we will only store and print simple data types.

You may be noticing that the word `print` is being used often, this is also usually used to mean `display`.

# Variables

Data types supported in C++ are:

| Type | Description | Example | Bytes | Typical range |
| --- | --- | --- | --- | --- |
| `bool` | A true or false value. | `bool isLoggedIn = true;` | Usually 1 | `true` or `false` |
| `char` | A single character. | `char grade = 'A';` | 1 | Usually `-128` to `127`; use it primarily for characters. |
| `int` | A whole number. | `int score = 42;` | Usually 4 | Usually `-2,147,483,648` to `2,147,483,647` |
| `long long` | A large whole number. | `long long population = 8000000000;` | Usually 8 | Usually about `-9 quintillion` to `9 quintillion` |
| `float` | A decimal number with less precision. | `float temperature = 21.5f;` | Usually 4 | About 7 decimal digits of precision |
| `double` | A decimal number with more precision. | `double pi = 3.141592653589793;` | Usually 8 | About 15 decimal digits of precision |
| `std::string` | A sequence of text characters. | `std::string name = "Ada";` | 1 per ASCII character; 1-4 in UTF-8 | No fixed size; limited by available memory |

Exact numeric ranges can vary by computer and compiler. These are the common ranges you will see on modern Windows computers.

# Let's dive deeper!

In C++, we define a variable x using format: `<data type> x = <value>;`. Here is a program that stores and prints a person's profile using every data type above:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name = "Ada Lovelace";
    char gender = 'F';
    int age = 28;
    long long population = 8000000000;
    float heightInMeters = 1.65f;
    double accountBalance = 1234.56;
    bool isStudent = true;

    std::cout << "Name: " << name << "\n";
    std::cout << "Gender (M/F): " << gender << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "World population: " << population << "\n";
    std::cout << "Height: " << heightInMeters << " meters\n";
    std::cout << "Account balance: $" << accountBalance << "\n";
    std::cout << "Is a student (1 = yes): " << isStudent << "\n";

    return 0;
}
```

Please note that a string is encapsulated using double-quotes `"`, while a character is encapsulated using single-quotes `'`.

# Task

Create a program that prints the details of a cinema ticket.

1. Create a file called `data.cpp` in the `labs\lab-01-data-types\` directory.
2. Add the `iostream` and `string` headers.
3. Create a `main` function.
4. Create these variables with your own information:
    - A `std::string` for the movie title.
    - An `int` for the seat number.
    - A `double` for the ticket price.
5. Use `std::cout` to print each value with a clear label, such as `Movie:`, `Seat:`, or `Price:`.
6. Compile and run the program.

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-01-data-types\data.cpp -o data.exe

And then run the produced artifact, by running the command:

    .\data.exe
