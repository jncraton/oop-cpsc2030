Liskov Substitution Principle (LSP)
===================================

---

Subtypes must be substitutable for their base types.

Example
-------

```python
class Cat(Animal):
  def meow():
    play('meow.mp3')


class Dog(Animal):
  def bark():
    play('bark.mp3')
```

---

```python
def make_sound(animal):
  if animal.bark:
    animal.bark()

  if animal.meow:
    animal.meow()
```

---

This violates LSP as Cat and Dog are not interchangeable with their base class.

---

This would satisfy LSP:

```python
class Cat(Animal):
  def make_sound():
    play('meow.mp3')


class Dog(Animal):
  def make_sound():
    play('bark.mp3')
```

---

A violation of LSP is a violation of OCP.

---

```python
class Rectange():
  ...
  setWidth(self, w):
    self.width = w
  setHeight(self, h):
    self.height = h
  getArea(self):
    return self.width * self.height
```

---

```python
class Square(Rectangle):
  ...
  setWidth(self, w):
    self.width = w
  setHeight(self, h):
    self.height = h
```

---

```python
square = Square()
square.setWidth(5)
square.setHeight(10)
# Is square really a square?
```

---

```python
class Square(Rectangle):
  ...
  setWidth(self, w):
    self.width = w
    self.height = w
  setHeight(self, h):
    self.height = h
    self.width = h
```

---

```python
square = Square()
square.setWidth(5)
square.setHeight(10)
# Width and height are both 10 now
```

---

What about this test for rectangle?

```python
rect = Rectangle()
rect.setWidth(5)
rect.setHeight(10)
assert(rect.getArea() == 50)
```

---

Can we replace Rectangle with Square?

```python
rect = Square()
rect.setWidth(5)
rect.setHeight(10)
assert(rect.getArea() == 50)
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

Duck Typing
===========

---

```python
class Duck:
  def quack(self):
    print('quack')

class House:
  def quack(self):
    print('quack')
```

---

Python container emulation

```python
class Example:
    def __getitem__(self, i):
        return i

example = Example()
print(example[4])
print(example[5])
```

---

JavaScript Iterable

```javascript
let range = {
  *[Symbol.iterator]() {
    yield 1
    yield 2
    yield 3
  }
}

for (i of range) {
  console.log(i)
}
```
