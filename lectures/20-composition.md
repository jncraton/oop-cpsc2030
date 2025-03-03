# Composition and Abstraction

## Introduction

- Composition: Building complex objects from simpler ones
- Abstraction: Hiding complexity, exposing essential features

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
- Enhances security

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
