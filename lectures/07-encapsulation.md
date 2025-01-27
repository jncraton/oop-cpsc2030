Encapsulation in Python
======================

Introduction to Encapsulation
-----------------------------

- Encapsulation is a fundamental concept in object-oriented programming
- It refers to the idea of bundling data and methods that operate on that data within a single unit
- This helps to hide the implementation details of an object from the outside world

Benefits of Encapsulation
-------------------------

- Improved code organization and structure
- Enhanced data security and protection
- Reduced coupling between objects
- Increased code reusability and maintainability

Example
-------

```python
class BankAccount:
    def __init__(self, account_number, balance):
        self.__account_number = account_number
        self.__balance = balance

    def get_balance(self):
        return self.__balance

    def deposit(self, amount):
        self.__balance += amount

    def withdraw(self, amount):
        if amount > self.__balance:
            print("Insufficient funds")
        else:
            self.__balance -= amount
```

Access Modifiers
----------------

- Python uses a single underscore (`_`) to indicate that a variable or method is intended to be private
- A double underscore (`__`) is used to invoke name mangling, which makes it more difficult to access the variable or method from outside the class

Single Underscore
-----------------

> _single_leading_underscore: weak "internal use" indicator. E.g. from M import * does not import objects whose name starts with an underscore.

[PEP8](http://www.python.org/dev/peps/pep-0008/)

Double Underscore
-----------------

Induces name mangling:

> Any identifier of the form __spam (at least two leading underscores, at most one trailing underscore) is textually replaced with _classname__spam, where classname is the current class name with leading underscore(s) stripped.

---

> It still is possible for a determined soul to access or modify a variable that is considered private.

[docs](https://docs.python.org/3/tutorial/classes.html#private-variables)

Example
-------

```python
class MyClass:
    def __init__(self):
        self.__private_variable = 0

    def get_private_variable(self):
        return self.__private_variable

obj = MyClass()
print(obj.get_private_variable())
print(obj.__private_variable)  # This will raise an AttributeError
```

Exercise
---------

Create a class that encapsulates a rectangle with attributes for width and height, and methods to calculate the area and perimeter.

Discussion
----------

How does encapsulation help to improve the security and maintainability of code?
