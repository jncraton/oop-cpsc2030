# C++ Loops

## for Loop

- Iterates over a range
- Simple and versatile

## for Loop Example

```cpp
import std;

int main() {
    for (int i = 0; i < 5; i++) {
        std::println("i: {}", i);
    }
}
```

## Exercise

Write a program using a for loop to print numbers 1 to 10

## while Loop

- Repeats as long as a condition is true
- Useful for unknown iteration counts

## while Loop Example

```cpp
import std;

int main() {
    int count = 0;
    while (count < 5) {
        std::println("count: {}", count);
        count++;
    }
}
```

## Exercise

Write a program using a while loop to print even numbers 2 to 20
