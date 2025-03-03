# Unit Testing

## Introduction

- Unit testing: Verify individual units of code
- Essential for maintaining and scaling code

## Why Unit Test?

- Catch bugs early
- Ensure code works as expected
- Facilitate refactoring

## Basic Asserts

```python
def add(a, b):
    return a + b

assert add(1, 2) == 3
assert add(0, 0) == 0
```

## Exercise

Write a function `multiply` and test it with asserts

## unittest Module

- Part of Python standard library
- More powerful than simple asserts

## Example: unittest

```python
import unittest

class TestAdd(unittest.TestCase):
    def test_add(self):
        self.assertEqual(add(1, 2), 3)
        self.assertEqual(add(0, 0), 0)

if __name__ == '__main__':
    unittest.main()
```

## Exercise

Write a unittest for the `multiply` function

## Testing Classes

- Test class methods
- Use setup and teardown methods

## Example: Testing a Class

```python
class Calculator:
    def add(self, a, b):
        return a + b

class TestCalculator(unittest.TestCase):
    def setUp(self):
        self.calc = Calculator()

    def test_add(self):
        self.assertEqual(self.calc.add(1, 2), 3)
```

## Exercise

Write a class `Multiplier` and a unittest for it

## doctest Module

- Embedded in docstrings
- Useful for documentation and testing

## Example: doctest

```python
def add(a, b):
    """
    Add two numbers.

    >>> add(1, 2)
    3
    >>> add(0, 0)
    0
    """
    return a + b
```

## Exercise

Write a doctest for the `multiply` function

## Challenges in Unit Testing

- Mocking dependencies
- Testing private methods
- Edge cases and corner cases

## Techniques

- Use mock objects
- Focus on public methods
- Write comprehensive tests
