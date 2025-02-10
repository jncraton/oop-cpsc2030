# Introduction to Inheritance

## What is Inheritance?

- Inheritance allows a class to inherit attributes and methods from another class.

## Why Use Inheritance?

- Reuse code
- Maintainability
- Extensibility

## Simple Example

```python
class Vehicle:
    def __init__(self, brand):
        self.brand = brand

class Car(Vehicle):
    def drive(self):
        return f"Driving {self.brand} car."
```

## Inheritance Syntax

```python
class ChildClass(ParentClass):
    # Child class attributes and methods
```

## Exercise

Create a `Bike` class that inherits from `Vehicle`.

## Overriding Methods

- Child class can override parent class methods.

## Example: Overriding

```python
class ElectricCar(Car):
    def drive(self):
        return f"Silently driving {self.brand} electric car."
```

## Exercise

Override `drive` in `Bike` to return "Pedaling {brand} bike."

## Adding New Methods

- Child class can have additional methods.

## Example: Adding Methods

```python
class Truck(Vehicle):
    def load(self, cargo):
        return f"Loading {cargo} into {self.brand} truck."
```

## Exercise

Add a `ring_bell` method to `Bike`.

## Inheriting Attributes

- Child class inherits parent class attributes.

## Example: Inheriting Attributes

```python
class SUV(Car):
    def __init__(self, brand, size):
        super().__init__(brand)
        self.size = size
```

## Exercise

Add a `capacity` attribute to `Truck`.

## Using `super()`

- `super()` calls parent class methods.

## Example: Using `super()`

```python
class HybridCar(Car):
    def __init__(self, brand, fuel_type):
        super().__init__(brand)
        self.fuel_type = fuel_type
```
