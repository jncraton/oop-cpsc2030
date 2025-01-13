Functions
=========

Function definition
-------------------

- Specifies the name of a new function 
- Specifies the sequence of statements that execute when the function is called
- The function can be reused throughout the program

Flow of Execution
-----------------

- Programs generally run from top to bottom
- Function definitions are not executed
- Functions run only when called

Example
-------

```python
def print_twice(value):
    print(value)
    print(value)

print_twice("Hello there")
```

Void functions
--------------

- Void functions do not return a value
- They may still do useful work
- `print` is an example of a void function

Fruitful functions
------------------

- Fruitful functions return a value
- This value can be used later in your programs
- `input` is an example of a fruitful function

Example
-------

```python
def square(n):
    return n*n

print(square(2))
print(square(7))
```

Parameters and arguments
------------------------

- Arguments are the values passed to a functions
- Parameters are the variable names used inside the function

Return
------

- Return allows us to terminate a function and return control to the caller
- If used with a value, the function returns the value

---

We can reimplement `min` ourselves

---

```python
def min(a, b):
    if a < b:
        return a
    else:
        return b
```

---

Functions may call other functions

Example
-------

```python
def square(n):
    return n*n

def cube(n):
    return n * square(n)

print(cube(2))
```

---

Recursive functions
-------------------

- Functions may call themselves
- This must be done carefully to avoid infinite recursion

Example
-------

```python
def power(base, exp):

```