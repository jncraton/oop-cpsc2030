# Introduction to C++23 for Python Programmers

## Hello World

```cpp
import std;

int main() {
    std::println("Hello World!");
}
```

## Compiling with GCC

```sh
/opt/gcc-latest/bin/g++ -Wall -Werror -static -std=c++23 -fmodules -fsearch-include-path bits/std.cc {src} -o {bin}
```

## Types

- int
- double
- bool
- std::string

## Input

```cpp
#include <cstdio>

int main() {
    int age;
    std::printf("Enter your age: ");
    std::scanf("%d", &age);
    std::println("You are {} years old.", age);
}
```

## Printing Variables

```cpp
#include <print>

int main() {
    int age = 23;
    std::print("You are {} years old.\n", age);
}
```

## Conditionals

```cpp
#include <print>

int main() {
    int age;
    std::printf("Enter your age: ");
    std::scanf("%d", &age);
    if (age >= 18) {
        std::println("You are an adult.");
    } else {
        std::println("You are a minor.");
    }
}
```
