# Primitives

Inline and block comments in C

Function returns

Primitive data types

`printf`, `\n`, `\t`

## Inline and block comments in C

Use `//` to comment out a whole line.

```c
// printf("hello world");
```

Use /\* \*/ to comment something out that may span multiple lines.

```c
/*
printf("hello"\n);
printf("world");
*/
```

## Function Returns

A function return in C is the value that a function gives back to the part of the program that called it. The return type of a function is specified in the function's declaration and definition. For example, a function that returns an integer would be declared with the `int` return type.

Here is an example of a function that returns an integer:

```c
int add(int a, int b) {
    return a + b;
}
```

In this example, the `add` function takes two integer parameters and returns their sum. The `return` statement is used to specify the value to be returned to the caller. The `return` statement directly calculates and returns the product of `a` and `b`.

TODO: add link to functions for later section.

## Primitive Data Types

C has several primitive data types, which are the basic building blocks for data manipulation. Here are the most commonly used primitive data types in C:

### Integer Types

- `int`: A basic integer type.
```c
int age = 25;
```

- `short`: A short integer type.
```c
short count = 10;
```

- `long`: A long integer type.
```c
long distance = 100000L;
```

- `long long`: A longer integer type.
```c
long long largeNumber = 123456789LL;
```

* Additionally there are `unsigned` versions of each which only allow non-negative values to be stored.

```c
unsigned short u_short = 65535;
unsigned int u_int = 4294967295U;
unsigned long u_long = 4294967295UL;
unsigned long long u_long_long = 18446744073709551615ULL;
```

### Floating-Point Types

- `float`: A single-precision floating-point type.
```c
float temperature = 36.6f;
```

- `double`: A double-precision floating-point type.
```c
double pi = 3.14159;
```

- `long double`: An extended-precision floating-point type.
```c
long double preciseValue = 2.718281828459L;
```

### Character Type

- `char`: A character type.
```c
char initial = 'A';
```
- `unsigned char`.
```c
unsigned char u_char = 255;
```

### Boolean Type

- `_Bool`: A boolean type (requires `stdbool.h` for `bool` keyword).
```c
#include <stdbool.h>
bool isValid = true;
```

These primitive data types are used to create variables that store data in C programs. Run `make primitives_info` to get a printout with more information about each type, this may change system to system.

## TODO
