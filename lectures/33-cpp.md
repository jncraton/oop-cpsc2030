# C++

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

## Documentation

- Ballotted final versions of the standard is under copyright and can be purchased from the ISO
- [Drafts](https://open-std.org/JTC1/SC22/WG21/docs/papers/2021/n4885.pdf) are free

## Types

- int
- float
- double
- bool
- std::string

## Static Types

- Variables always hold a given type of value
- Types must be declared with variables

## Input

```cpp
import std;

int main() {
    std::string name;
    std::print("Enter your name: ");
    std::cin >> name;
    std::println("Hello, {}!", name);
}
```

## Printing Variables

```cpp
import std;

int main() {
    int age = 23;
    std::print("You are {} years old.\n", age);
}
```
