Static and Class Methods in Python
=================================

Overview
----------------------------------------

- Some methods can belong to the class instead of instances
- These methods are called static methods and class methods
- Used to group related functionality together
- May provide alternative ways of creating instances

Static Methods
--------------

- Static methods are methods that belong to a class, rather than instances of the class
- They are defined using the `@staticmethod` decorator
- They do not have access to the class or instance
- Essentially just functions that are namespaced by the class

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

- `__str__` returns a readable string
- `__repr__` returns an unambiguous string

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
print(person)
print(repr(person))
```

`__eq__` and `__lt__`
----------------------

- `__eq__` checks if two objects are equal
- `__lt__` checks if one object is less than another

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

alice = Person('Alice', 30)
bob = Person('Bob', 30)
print(alice == bob)
print(alice < bob)
```

Exercise
--------

- Create a class `Vector` with `x` and `y` attributes
- Implement `__repr__`, `__eq__`, and `__lt__`
- `__lt__` should use Euclidean norm for comparison

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
