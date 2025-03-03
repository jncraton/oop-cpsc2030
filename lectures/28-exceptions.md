# Exceptions

## Introduction

- Exceptions handle errors
- Improve code robustness
- Custom exceptions for specific errors

## What are Exceptions?

- Runtime errors
- Interrupt normal flow
- Caught and handled

## Raising Exceptions

```python
raise ValueError("Invalid value")
```

## Handling Exceptions

```python
try:
    # Code that might raise an exception
except ValueError as e:
    print(e)
```

## Multiple Except Blocks

```python
try:
    # Code that might raise an exception
except ValueError as e:
    print("Value Error:", e)
except TypeError as e:
    print("Type Error:", e)
```

## Finally Block

```python
try:
    # Code that might raise an exception
except ValueError as e:
    print("Value Error:", e)
finally:
    print("This always runs")
```

## Custom Exceptions

- Extend `Exception` class
- Define custom error messages

## Custom Exception Example

```python
class CustomError(Exception):
    def __init__(self, message):
        super().__init__(message)
```

## Raising Custom Exceptions

```python
raise CustomError("This is a custom error")
```

## Handling Custom Exceptions

```python
try:
    raise CustomError("This is a custom error")
except CustomError as e:
    print(e)
```

## Exercise 1

- Create a custom exception `NegativeNumberError`
- Raise it if a negative number is passed to a function

## Exercise 2

- Write a function that reads a file
- Handle `FileNotFoundError` and `IOError`

## Exercise 3

- Create a custom exception `InvalidInputError`
- Use it in a function that validates user input

## Best Practices

- Use specific exceptions
- Keep handlers short
- Document exceptions
