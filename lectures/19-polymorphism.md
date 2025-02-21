# Polymorphism in Python

## Introduction

- Polymorphism in object-oriented programming
- Allows objects to be treated as instances of their parent class

## What is Polymorphism?

- Provision of one interface to entities of different data types
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

## Example: Bird Class

```python
class Bird(Animal):
    def speak(self):
        return "Chirp!"
```

## Example: Fish Class

```python
class Fish(Animal):
    def speak(self):
        return "Blub!"
```

## Zoo function

```python
def zoo_sounds(animals):
    for animal in animals:
        print(animal.speak())
```

## Using the function

```python
dog = Dog()
cat = Cat()
bird = Bird()
fish = Fish()

zoo_sounds([dog, cat, bird, fish])
```

## Exercise

- Create a new animal class with a speak method
- Use it with the zoo_sounds function

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

## Duck Typing in Practice

```python
class Car:
    def drive(self):
        return "Vroom!"

class Bike:
    def ride(self):
        return "Zoom!"
```

## Test Behaviors

```python
def vehicle_action(vehicle):
    if hasattr(vehicle, 'drive'):
        print(vehicle.drive())
    elif hasattr(vehicle, 'ride'):
        print(vehicle.ride())
```

## Exercise

- Add a new vehicle class with a different method
- Use it with the vehicle_action function
