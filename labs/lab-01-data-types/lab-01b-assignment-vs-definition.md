# Assignment vs Definition

When creating variables in C++, it is useful to know the difference between a definition and an assignment.

## Quick rule

- A **definition** creates a variable.
- An **assignment** changes the value stored in a variable that already exists.

## Definition

```cpp
int age;
```

This line defines a variable named `age`. It creates the variable, but does not give it a value yet.

Read the line from left to right:

- `int` is the data type.
- `age` is the variable name.

Do not use `age` until you assign it a value.

## Assignment

```cpp
age = 28;
```

This line assigns a value to the variable. The variable `age` already exists, so C++ stores `28` in it.

## What to remember

Use a data type and a name, such as `int age;`, to define a variable. Use `=`, such as `age = 28;`, to assign a value after the variable has been created.

# Before you go

## Declaration

A declaration tells C++ that a variable exists, but does not create the variable itself.

```cpp
extern int age; // Declaration: age is defined somewhere else.
```

The `extern` keyword tells C++ that the definition of `age` is in another file. You will use this later when programs are split into multiple files. For now, continue to write definitions such as `int age;` when you create variables.
