Getters and Setters in Python
===========================

Introduction
------------

- Getters and setters are used to access attributes
- May perform validation, logging, or other actions

Basic Getters and Setters
-------------------------

- Getters are methods that return the value of an attribute
- Setters are methods that modify the value of an attribute

Why Use Getters and Setters?
---------------------------

- Encapsulate data and behavior
- Prevent data corruption or invalid states
- Afford change or extension

Example
-------

```python
class Person:
    def __init__(self, name, age):
        self._name = name
        self._age = age

    def get_age(self):
        return self._age

    def set_age(self, age):
        if not isinstance(age, int) or age < 0:
            raise ValueError("Age must be a non-negative integer")
        self._age = age
```

Property Decorators
-------------------

- Python provides a `@property` decorator to define getters
- The `@x.setter` decorator is used to define setters for a property

Example
-------

```python
class Person:
    def __init__(self, name, age):
        self._name = name
        self._age = age

    @property
    def age(self):
        return self._age

    @age.setter
    def age(self, age):
        if not isinstance(age, int) or age < 0:
            raise ValueError("Age must be a non-negative integer")
        self._age = age
```

Exercise
--------

- Use `@property` and `@name.setter` to create a getter and setter for name
- Name should only be allowed to be set to a string

Deleter Decorators
------------------

- The `@x.deleter` decorator is used to define a deleter for a property
- The deleter is called when the `del` statement is used to delete a property

Example
-------

```python
class Person:
    def __init__(self, name):
        self._name = name

    @property
    def name(self):
        return self._name

    @name.deleter
    def name(self):
        del self._name```

Best Practices
--------------

- Use getters and setters to control access to an object's attributes
- Use property decorators to define getters and setters
- Use deleter decorators to define deleters for properties
- Keep getters and setters simple and focused on their specific task

Exercise
--------

Create a class `Rectangle` with attributes `width` and `height`. Use getters and setters to control access to these attributes. Implement a deleter for the `width` attribute.

```python
class Rectangle:
    def __init__(self, width, height):
        self._width = width
        self._height = height

    # Implement getters, setters, and deleter here
```

Discussion
----------

- How do getters and setters improve the design of a class?
- What are some common use cases for getters and setters? 
- How do property decorators simplify the implementation of getters and setters?
