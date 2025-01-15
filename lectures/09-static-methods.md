Static and Class Methods in Python
=================================

Introduction to Static and Class Methods
----------------------------------------

- In Python, we can define methods inside a class that belong to the class itself, rather than instances of the class
- These methods are called static methods and class methods
- They are used to group related functionality together and to provide alternative ways of creating instances

Static Methods
--------------

- Static methods are methods that belong to a class, rather than instances of the class
- They are defined using the `@staticmethod` decorator
- They do not have access to the class or instance, and are essentially just functions that are namespaced by the class

Example
-------

```python
class MathUtils:
    @staticmethod
    def add(a, b):
        return a + b

print(MathUtils.add(2, 3))
```

Class Methods
-------------

- Class methods are methods that belong to a class, rather than instances of the class
- They are defined using the `@classmethod` decorator
- They have access to the class, and are often used as alternative constructors

Example
-------

```python
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @classmethod
    def from_string(cls, string):
        name, age = string.split(',')
        return cls(name, int(age))

person = Person.from_string('John,30')
print(person.name, person.age)
```

Special Methods
--------------

- In Python, we can define special methods inside a class that are called automatically in certain situations
- These methods are surrounded by double underscores (also called "dunder" methods)

`__str__` and `__repr__`
-------------------------

- The `__str__` method is called when we want to get a human-readable representation of an object
- The `__repr__` method is called when we want to get a representation of an object that is useful for debugging

Example
-------

```python
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return f'{self.name}, {self.age} years old'

    def __repr__(self):
        return f'Person(name={self.name}, age={self.age})'

person = Person('John', 30)
print(person)  # prints: John, 30 years old
print(repr(person))  # prints: Person(name=John, age=30)
```

`__eq__` and `__lt__`
----------------------

- The `__eq__` method is called when we want to check if two objects are equal
- The `__lt__` method is called when we want to check if one object is less than another

Example
-------

```python
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __eq__(self, other):
        return self.name == other.name and self.age == other.age

    def __lt__(self, other):
        return self.age < other.age

person1 = Person('John', 30)
person2 = Person('John', 30)
print(person1 == person2)  # prints: True
print(person1 < person2)  # prints: False
```

Exercise
--------

Create a class `Vector` with `x` and `y` attributes, and implement the `__str__`, `__repr__`, `__eq__`, and `__lt__` methods.

```python
class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    # implement special methods here
```

Discussion
----------

Why would we want to implement special methods in our classes?

Best Practices
--------------

- Use static methods and class methods to group related functionality together and to provide alternative ways of creating instances
- Use special methods to provide a human-readable representation of an object, and to implement equality and comparison operators
