# Abstract Base Classes and Operator Overloading

## Abstract Base Classes (ABCs)

- Define a blueprint for concrete classes
- Use `abc` module
- Enforce method implementation

## Defining Abstract Base Class

- Inherit from the `ABC` class
- Decorate abstract methods using `@abstractmethod`
- Other methods may be included

## Example: Defining an ABC

```python
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass
```

## Example

```python
class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * (self.radius ** 2)
```

## Why Use ABCs?

- Ensure subclasses implement specific methods
- Provide a standard interface
- Improve code maintainability

## Exercise

Create an abstract base class `SpaceStation` with:

1. An abstract method `dock_ship` that takes a ship's name and cargo capacity as parameters
2. A method `get_station_status` that returns the current status of the space station

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

## Comparison Operators

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

Overload the `*` operator for the `Vector` class to support scalar multiplication

## Exercise

Overload the `<` and `>` operators for the `Vector` class to compare vectors component-wise
