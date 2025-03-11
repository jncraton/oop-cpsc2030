# Composition

## What is Composition?

- Combining objects to form more complex objects
- Example: A `Car` is composed of `Engine`, `Wheels`, `Body`

## Composition Example

```python
class Engine:
    def start(self):
        print("Engine started")

class Car:
    def __init__(self):
        self.engine = Engine()

    def start(self):
        self.engine.start()
```

---

![UML Composition](vehicle-composition.png){height=240px}

## PlantUML

```puml
@startuml
class Engine {
}

class Vehicle {
}

Engine -o Vehicle
@enduml
```

## Exercise

Create a `Battery` class and use it in a `Car` class

## Multiple Objects

```python
class Wheel:
    def rotate(self):
        return "Wheel rotating"

class Car:
    def __init__(self):
        self.wheels = [Wheel() for _ in range(4)]

    def drive(self):
        return [wheel.rotate() for wheel in self.wheels]
```

## Exercise

Create a `Car` class that accepts any type of `Engine` at runtime

## Exercise

Create a `Bus` class that can hold multiple `Passenger` objects

## Benefits of Composition

- Reusability
- Flexibility
- Modularity

## What is Abstraction?

- Hiding implementation details
- Focusing on essential features

## Abstraction Example

```python
class BankAccount:
    def __init__(self, balance=0):
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
        else:
            print("Insufficient funds")
```

## Benefits of Abstraction

- Simplifies code
- Reduces complexity
- Improves security

## Composition vs. Inheritance

- Composition: "Has-a" relationship
- Inheritance: "Is-a" relationship

## Composition vs. Inheritance Example

```python
# Composition
class Car:
    def __init__(self):
        self.engine = Engine()

# Inheritance
class SportsCar(Car):
    def __init__(self):
        super().__init__()
        self.spoiler = True
```

## When to Use Composition

- When objects have a "has-a" relationship
- When you need more flexibility

## When to Use Inheritance

- When objects have an "is-a" relationship
- When you need to share common behavior
