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

## Arithmetic Operations

The basic arithmetic operations in c are:

* Addition

```c
int a = 1 + 2;
```

* Subtraction

```c
int b = 3 - 1;
```

* Multiplication

```c
int c = 2 * 3;
```

* Division

When doing division with integers, the result will be an integer (floored, i.e. decimals are removed, `1 / 2` is `0`, `4 / 3` is `0` ...). If you want a floating-point result, you can use a floating-point type.

```c
int d = 6 / 2;
```

* Modulus, the remainder of a division operation

```c
int e = 7 % 2;
```

* Increment, increase a value by 1

```c
int f = 1;
f++;
```

* Decrement, decrease a value by 1

```c
int g = 2;
g--;
```

These operations can be combined and used in more complex expressions. Parentheses can be used to control the order of operations. The order of operations is the same as in mathematics. A full list of operators and their precedence [here](https://en.cppreference.com/w/c/language/operator_precedence).

```c
int c = 3 + 0;
int h = (1 + 2) * c;
```

## Assignment Operators

Assignment operators are used to assign values to variables. The basic assignment operator is `=`.

```c
int a = 1;
```

There are also compound assignment operators that combine an arithmetic operation with an assignment.

```c
int b = 2;
b += 3; // equivalent to b = b + 3
b -= 1; // equivalent to b = b - 1
b *= 2; // equivalent to b = b * 2
b /= 4; // equivalent to b = b / 4
```

## TODO

* [ ] Run `make primitives_info` (using `make clean `before running tests will cause a failure).
* [ ] Implement the functions in `primitives.c` and check them with `make test`.
