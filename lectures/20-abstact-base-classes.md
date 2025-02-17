# Abstract Base Classes and Operator Overloading in Python

## Abstract Base Classes (ABCs)

- Define a blueprint for concrete classes
- Use `abc` module
- Enforce method implementation

## Why Use ABCs?

- Ensure subclasses implement specific methods
- Provide a standard interface
- Improve code maintainability

## Example: Defining an ABC

```python
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass
```

## Implementing an ABC

```python
class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * (self.radius ** 2)
```

## Operator Overloading

- Customize behavior of operators
- Use special methods (dunder methods)
- Improve readability and usability

## Example: Overloading `+` for a Vector Class

```python
class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)
```

## Using the Overloaded Operator

```python
v1 = Vector(1, 2)
v2 = Vector(3, 4)
v3 = v1 + v2
print(v3.x, v3.y)  # Output: 4 6
```

## Common Overloadable Operators

- `+` (add)
- `-` (subtract)
- `*` (multiply)
- `/` (divide)
- `==` (equality)
- `!=` (inequality)
- `<` (less than)
- `>` (greater than)
- `<=` (less than or equal to)
- `>=` (greater than or equal to)

## Example: Overloading Multiple Operators

```python
class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

    def __sub__(self, other):
        return Vector(self.x - other.x, self.y - other.y)

    def __mul__(self, scalar):
        return Vector(self.x * scalar, self.y * scalar)

    def __truediv__(self, scalar):
        return Vector(self.x / scalar, self.y / scalar)

    def __eq__(self, other):
        return self.x == other.x and self.y == other.y

    def __ne__(self, other):
        return not self == other

    def __lt__(self, other):
        return (self.x, self.y) < (other.x, other.y)

    def __gt__(self, other):
        return (self.x, self.y) > (other.x, other.y)

    def __le__(self, other):
        return (self.x, self.y) <= (other.x, other.y)

    def __ge__(self, other):
        return (self.x, self.y) >= (other.x, other.y)
```

## Using Overloaded Operators

```python
v1 = Vector(1, 2)
v2 = Vector(3, 4)
v3 = v1 + v2
v4 = v1 - v2
v5 = v1 * 2
v6 = v1 / 2
print(v3.x, v3.y)  # Output: 4 6
print(v4.x, v4.y)  # Output: -2 -2
print(v5.x, v5.y)  # Output: 2 4
print(v6.x, v6.y)  # Output: 0.5 1.0
```

## Exercise

Create a `Rectangle` class that inherits from `Shape` and implements the `area` method

## Exercise

Overload the `*` operator for the `Vector` class to support scalar multiplication

## Exercise

Overload the `==` and `!=` operators for the `Vector` class to compare vectors

## Exercise

Overload the `<` and `>` operators for the `Vector` class to compare vectors based on magnitude
