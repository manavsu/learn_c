# Conditionals

Conditionals are fundamental in programming, allowing you to execute different code based on certain conditions. In C, the `if` statement is used to perform conditional execution. Comparisons are often used within these statements to determine the flow of control.

## `if` Statement

The `if` statement evaluates a condition (an expression that returns a boolean value) and executes the block of code inside the braces `{}` if the condition is true.

```c
#include <stdio.h>

int main() {
    int a = 10;

    if (a > 5) {
        printf("a is greater than 5\n");
    }

    return 0;
}
```

### `if-else` Statement

The `if-else` statement provides an alternative block of code to execute if the condition is false.

```c
#include <stdio.h>

int main() {
    int a = 3;

    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is not greater than 5\n");
    }

    return 0;
}
```

### `if-else if-else` Statement

The `if-else if-else` statement allows you to check multiple conditions in sequence.

```c
#include <stdio.h>

int main() {
    int a = 5;

    if (a > 5) {
        printf("a is greater than 5\n");
    } else if (a == 5) {
        printf("a is equal to 5\n");
    } else {
        printf("a is less than 5\n");
    }

    return 0;
}
```

### Nested `if` Statements

You can nest `if` statements within each other to check multiple conditions.

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    if (a > 5) {
        if (b > 15) {
            printf("a is greater than 5 and b is greater than 15\n");
        }
    }

    return 0;
}
```

### Ternary Operator

The ternary operator is a shorthand way of writing an `if-else` statement. It takes three operands: a condition, a result for true, and a result for false. The syntax is:

```c
bool is_zero(int x) {
    return x == 0 ? true : false;
}
```

## Comparisons

Comparisons are used to evaluate conditions within `if` statements. Here are the common comparison operators in C:

- `==`: Equal to
- `!=`: Not equal to
- `>`: Greater than
- `<`: Less than
- `>=`: Greater than or equal to
- `<=`: Less than or equal to

#### Example of Comparisons

```c
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    if (x == y) {
        printf("x is equal to y\n");
    }

    if (x != y) {
        printf("x is not equal to y\n");
    }

    if (x > y) {
        printf("x is greater than y\n");
    }

    if (x < y) {
        printf("x is less than y\n");
    }

    if (x >= y) {
        printf("x is greater than or equal to y\n");
    }

    if (x <= y) {
        printf("x is less than or equal to y\n");
    }

    return 0;
}
```

## Logical Operators

Logical operators are often used to combine multiple conditions:

- `&&`: Logical AND
- `||`: Logical OR
- `!`: Logical NOT

### Example of Logical Operators

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    if (a > 5 && b > 15) {
        printf("Both conditions are true\n");
    }

    if (a > 15 || b > 15) {
        printf("At least one condition is true\n");
    }

    if (!(a > 15)) {
        printf("Condition is false\n");
    }

    return 0;
}
```

Understanding and using conditionals and comparisons effectively allows you to control the flow of your programs and make decisions based on different conditions.

## TODO

* [ ] Do the exercises in [conditionals.c](conditionals.c).
