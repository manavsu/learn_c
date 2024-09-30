# Introduction

**C** is a general-purpose programming language. It was created in the 1970s by Dennis Ritchie and remains very widely used and influential. By design, C's features cleanly reflect the capabilities of the targeted CPUs. It has found lasting use in operating systems code, device drivers, and protocol stacks, but its use in application software has been decreasing. C is commonly used on computer architectures that range from the largest supercomputers to the smallest microcontrollers and embedded systems.[1]

Since 2000, C has consistently ranked among the top four languages in the TIOBE index, a measure of the popularity of programming languages.[1]

## GCC

Processors are unable to execute machine code, so a compiler is used to translate high-level programming code into machien code that a computer processor can execute. Additionaly it checks for any errors and optimizes the code.

You can check if gcc is already installed with:

```bash
gcc --version
```

### Installation

#### macOS

```bash
brew install gcc
```

#### Arch

```bash
sudo pacman -S gcc
```

#### Windows

For windows use [Cygwin](https://www.cygwin.com).

## Hello World

All shell commands assume `0_intro_to_c` is your working directory.

A typical hello world in C:

```c
#include <stdio.h>

int main() {
    printf("hello world");
    return 0;
}
```

The main function is the entry point of a C program. The operating system will call this function when the program is executed. The main function returns an integer which indicates the exit status, 0 for successful execution and non-zero to indicate an error.

In order to run this we need to compile the program first. Take a look at `hello_world.c`, it contains the C code that will be compiled. We can use gcc to compile it.

```bash
gcc hello_world -o hello_world
```

This will create an executable, `hello_world` that can be run by the user.

```
./hello_world
```

This should output `hello world`. (Assuming you fixed the test.)

## Make

`Make` will be used to simplify building and testing. This pattern will be repeated in subsequent modules.

To compile the files:

```bash
make
```

To run the file:

```bash
make run
```

To run tests:

```bash
make test
```

The test for this module will fail, you can fix it by removing the extra `d` in `hello_world.c`.

To clean up executables:

```bash
make clean
```

You can learn more about make [here](https://makefiletutorial.com/).

## TODO

* [ ] Run `make test` and fix the failing test in [hello_world.c](hello_world.c).

## Sources

[1] - [C (programming language) - Wikipedia](https://en.wikipedia.org/wiki/C_(programming_language))
