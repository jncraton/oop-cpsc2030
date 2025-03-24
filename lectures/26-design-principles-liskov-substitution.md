Liskov Substitution Principle (LSP)
===================================

---

Subtypes must be substitutable for their base types.

## Why is LSP Important?

- Ensures code reliability
- Promotes code reusability
- Reduces bugs

Example
-------

```python
class Person:
    def __init__(self, name):
        self.name = name

    def participate_in_game(self):
        return f"{self.name} is participating in the game."

class Player(Person):
    def participate_in_game(self):
        return f"{self.name} is playing basketball."

class Coach(Person):
    def participate_in_game(self):
        raise ValueError("Coaches do not play the game, they coach.")

# Example usage
def simulate_game(person):
    print(person.participate_in_game())

player = Player("Michael Jordan")
coach = Coach("Phil Jackson")

simulate_game(player)  # This works fine
simulate_game(coach)   # This will raise a ValueError
```

---

This violates LSP as Coach is not interchangeable with Person.

---

This would satisfy LSP:

```python
class Person:
    def __init__(self, name):
        self.name = name

    def participate_in_game(self):
        return f"{self.name} is participating in the game."

class Player(Person):
    def participate_in_game(self):
        return f"{self.name} is playing basketball."

class Coach(Person):
    def participate_in_game(self):
        return f"{self.name} is coaching the game."

# Example usage
def simulate_game(person):
    print(person.participate_in_game())

player = Player("Michael Jordan")
coach = Coach("Phil Jackson")

simulate_game(player)  # This works fine
simulate_game(coach)   # This works fine
```

Rectanlge Example
-----------------

```
class Rectangle:
    def __init__(self):
        self._width = 1
        self._height = 1

    @property
    def width(self):
        return self._width

    @width.setter
    def width(self, value):
        self._width = value

    @property
    def height(self):
        return self._height

    @height.setter
    def height(self, value):
        self._height = value
    
    @property
    def area(self):
        return self.width * self.height
```

Square
------   

```python
class Square(Rectangle):
    pass
```

---

```python
square = Square()
square.width = 5
square.height = 10
# Is Square really a square?
```

Better Square?
--------------

```python
class Square(Rectangle):
    @property
    def width(self):
        return self._width
    
    @width.setter
    def width(self, value):
        self._width = value
        self._height = value

    @property
    def height(self):
        return self._height

    @height.setter
    def height(self, value):
        self._width = value
        self._height = value
```

---

```python
square = Square()
square.width = 5
square.height = 10
# Width and height are both 10 now
```

---

What about this test for rectangle?

```python
rect = Rectangle()
rect.width = 5
rect.height = 10
assert(rect.area == 50)
```

---

Can we replace Rectangle with Square?

```python
rect = Square()
rect.width = 5
rect.height = 10
assert(rect.area == 50)
```

---

A model viewed in isolation cannot be validated

---

The IS-A relationship depends on expected external behaviors

---

Design by Contract
------------------

Specifies expected behaviors that developers can rely on

Unit Testing
------------

Validates that behavioral expectations are met

## Exercise

Refactor the following code to adhere to LSP

```python
class Bird:
    def fly(self):
        pass

class Penguin(Bird):
    def fly(self):
        raise Exception("Penguins cannot fly")
```

## Hint

- Consider creating a `FlyingBird` class
- Inherit `Penguin` from a different base class if needed
