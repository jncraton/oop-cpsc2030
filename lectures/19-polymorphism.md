# Polymorphism in Python

## Introduction

- Polymorphism in object-oriented programming
- Allows objects to be treated as instances of their parent class

## What is Polymorphism?

- Ability of an object to take on many forms
- Common in inheritance hierarchies

## Example: Animal Class

```python
class Animal:
    def speak(self):
        pass
```

## Inheritance

- Subclasses inherit methods and attributes from parent class
- Can override or extend parent class methods

## Example: Dog and Cat Classes

```python
class Dog(Animal):
    def speak(self):
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"
```

## Polymorphic Behavior

- Same method name, different behavior
- Example: `speak` method

## Example: Polymorphic Function

```python
def animal_speak(animal):
    print(animal.speak())
```

## Using Polymorphism

```python
dog = Dog()
cat = Cat()

animal_speak(dog)  # Woof!
animal_speak(cat)  # Meow!
```

## Benefits of Polymorphism

- Code flexibility
- Easier to maintain and extend

## Duck Typing

- Python's dynamic typing supports duck typing
- "If it looks like a duck, swims like a duck, and quacks like a duck, then it probably is a duck"

## Example: Duck Typing

```python
class Duck:
    def quack(self):
        return "Quack!"

animal_speak(Duck())  # Quack!
```

## Abstract Base Classes

- Define a blueprint for child classes
- Ensure methods are implemented

## Example: Abstract Base Class

```python
from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def speak(self):
        pass
```

## Polymorphism in Practice

- Real-world examples
- Design patterns

## Exercise

Create a `Vehicle` class with a `drive` method
Create subclasses `Car` and `Bike` with their own `drive` methods
