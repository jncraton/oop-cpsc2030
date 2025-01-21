OO Design
=========

Iterative Process
-----------------

1. Analysis - Explore the problem
2. Design - Draft a solution
3. Implementation - Build the solution

Four Principles of OOP
----------------------

Encapsulation
  ~ Combine data, methods, and interfaces

Inheritance
  ~ Share members between classes

Polymorphism
  ~ Share interfaces between types

Abstraction
  ~ Hide complexity behind clean interface

---

How does encapsulating data and behavior into objects improve code organization and maintainability?

Classes
=======

Class
-----

- A template for creating user-defined objects
- Class definitions normally contain method definitions which operate on instances of the class
- Class names are written in upper camel case by convention

Example
-------

```python
class Player:
    hp = 100

alice = Player()
print(alice.hp)
```

Methods
-------

- Functions defined in the class body become attached to objects
- When called, these have access to the object instance

Example
-------

```python
class Vehicle:
    speed = 0
    
    def accelerate(self):
        self.speed += 1
        
car = Vehicle()
car.accelerate()
print(car.speed)
```

Constructor
-----------

- A special method may be called when creating a new object from a class
- This is called the constructor
- Dunder (double underscore) method named `__init__`

Example
-------

```python
class Length:
    def __init__(self, meters):
        self.meters = meters
        self.feet = meters * 3.2808
        
l = Length(2)
print(l.feet)
```

self
----

- The first argument passed to a method will be a reference to the object instance
- `self` is chosen as the name for this parameter by convention
