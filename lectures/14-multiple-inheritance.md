# Multiple Inheritance

## Inheritance Hierarchy

- Multiple levels of inheritance

## Example: Inheritance Hierarchy

```python
class Vehicle:
    pass

class Car(Vehicle):
    pass

class ElectricCar(Car):
    pass
```

## Exercise

Create a `SportsCar` class that inherits from `Car`

## Method Resolution Order (MRO)

- Python uses MRO to resolve method calls.
- The algorithm used is [C3 linearization](https://en.wikipedia.org/wiki/C3_linearization}

## Example: MRO

```python
class A:
    def method(self):
        print("A method")

class B(A):
    def method(self):
        print("B method")

b = B()
b.method()  # Output: B method
```

## Multiple Inheritance

- A class can inherit from multiple classes

## Example: Multiple Inheritance

```python
class Electric:
    def charge(self):
        return "Charging..."

class Hybrid(Electric, Car):
    pass
```

## Exercise

Create a `HybridBike` class that inherits from `Bike` and `Electric`.

## Diamond Problem

- Ambiguity in method resolution

---

![Diamond Problem](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8e/Diamond_inheritance.svg/320px-Diamond_inheritance.svg.png)

## Example: Diamond Problem

```python
class A:
    def method(self):
        print("A method")

class B(A):
    def method(self):
        print("B method")

class C(A):
    def method(self):
        print("C method")

class D(B, C):
    pass

d = D()
d.method()
```
