# GETTING STARTED

The purpose of this lab is to get you started. You will build and run a program that displays simple text on the screen.

# Background
        
The build information is already set up. The compiler and build tools are already installed using the [C++ setup guide](../../setup-instructions/setup-cpp.md). You can test this by opening a terminal, pressing Ctrl + ` (backtick), and entering:

    g++ --version
    gdb --version
    make --version

# Hello World

Hello World is a standard first program in any language.

This script is already added at [hello.cpp](../../solutions/lab-00/hello-world/hello.cpp).

Let's go over the file line by line:

`#include <iostream>` - Includes tools for reading and writing text.

`int main() {` - Starts the program at the `main` function.

`std::cout << "Hello, C++!\n";` - Prints the greeting and moves to a new line.

`return 0;` - Reports that the program finished successfully.

`}` - Ends the `main` function.

# To build & run

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\solutions\lab-00\hello-world\hello.cpp -o hello.exe

And then run the produced artifact, by running the command:

    .\hello.exe

# Let's dive deeper!

When you run a C++ program, these steps happen:

1. **Preprocessing** - `#include <iostream>` is expanded and handled.
2. **Compilation** - The C++ code is converted into lower-level assembly code.
3. **Assembly** - The assembly code is converted into machine code.
4. **Linking** - Your machine code is combined with standard library code used by `iostream`.
5. **Executable creation** - The linker creates `hello.exe`.
6. **Loading** - Windows loads the executable into memory.
7. **Execution** - The program starts at `main()` and runs each statement.

The `g++` command performs the first five steps. The `.\hello.exe` command loads and executes the completed program.

**Note:** You do not need to understand all the steps in detail. The goal is not to gain expertise as a computer scientist, but to become an entry-level software engineer.

# Task

Your task is to create a similar script that prints some text on the screen.

1. Create a file called `heart.cpp` in the `labs/lab-00` directory.
2. Add the `iostream` header.
3. Create the main function.
4. Add a `Hello World!` print statement.
5. Compile and run to verify everything is working.
6. Then update your code to print:

```text
   ###     ###
  #####   #####
 ####### #######
#################
#################
 ################
 ###############
  #############
    ###########
     #########
      #######
        #####
         ###
          #
```

## Execution commands

Enter in terminal:

    g++ -g -Wall -Wextra -std=c++17 .\labs\lab-00\heart.cpp -o heart.exe

And then run the produced artifact, by running the command:

    .\heart.exe
