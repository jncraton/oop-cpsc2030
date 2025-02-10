# Inheritance Examples

## Real-World Example: Library System

- Books, magazines, and journals

## Example: Library System

```python
class Item:
    def __init__(self, title):
        self.title = title

class Book(Item):
    def read(self):
        return f"Reading {self.title} book."

class Magazine(Item):
    def browse(self):
        return f"Browsing {self.title} magazine."
```

## Exercise

Create a `Journal` class that inherits from `Item`

## Real-World Example: E-Commerce

- Products, categories, and discounts

## Example: E-Commerce

```python
class Product:
    def __init__(self, name, price):
        self.name = name
        self.price = price

class DiscountedProduct(Product):
    def __init__(self, name, price, discount):
        super().__init__(name, price)
        self.discount = discount

    def final_price(self):
        return self.price * (1 - self.discount)
```

## Exercise

Create a `Category` class with a `display` method

## Real-World Example: Social Media

- Users, posts, and comments

## Example: Social Media

```python
class User:
    def __init__(self, username):
        self.username = username

class Post:
    def __init__(self, content, user):
        self.content = content
        self.user = user

class Comment(Post):
    def __init__(self, content, user, post):
        super().__init__(content, user)
        self.post = post
```

## Exercise

Create a `Reply` class that inherits from `Comment`

## Real-World Example: Banking

- Accounts, transactions, and savings

## Example: Banking

```python
class Account:
    def __init__(self, balance):
        self.balance = balance

class SavingsAccount(Account):
    def __init__(self, balance, interest_rate):
        super().__init__(balance)
        self.interest_rate = interest_rate

    def apply_interest(self):
        self.balance += self.balance * self.interest_rate
```

## Exercise

Create a `CheckingAccount` class with a `withdraw` method

## Real-World Example: Game Development

- Characters, items, and abilities

## Example: Game Development

```python
class Character:
    def __init__(self, name, health):
        self.name = name
        self.health = health

class Warrior(Character):
    def attack(self):
        return f"{self.name} attacks with sword."

class Mage(Character):
    def cast_spell(self):
        return f"{self.name} casts fireball."
```

## Exercise

Create a `Rogue` class with a `stealth` method

## Real-World Example: IoT Devices

- Sensors, actuators, and controllers

## Example: IoT Devices

```python
class Device:
    def __init__(self, name):
        self.name = name

class Sensor(Device):
    def read(self):
        return f"Reading data from {self.name} sensor."

class Actuator(Device):
    def actuate(self):
        return f"Actuating {self.name} device."
```

## Exercise

Create a `Controller` class with a `control` method
