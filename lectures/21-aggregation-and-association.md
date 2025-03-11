# Association and Aggregation

## Introduction

- Association: Objects have a "has-a" relationship
- Aggregation: Special case of association, "part-of" relationship

## Association Example

```python
class Author:
    def __init__(self, name):
        self.name = name

class Book:
    def __init__(self, title, author):
        self.title = title
        self.author = author

author = Author("J.K. Rowling")
book = Book("Harry Potter", author)
```

## Association Exercise

- Create a `Student` class and a `Course` class
- A `Student` can be enrolled in multiple `Course` objects

## Aggregation Example

```python
class Department:
    def __init__(self, name):
        self.name = name
        self.employees = []

    def add_employee(self, employee):
        self.employees.append(employee)

class Employee:
    def __init__(self, name):
        self.name = name

dept = Department("Engineering")
emp1 = Employee("Alice")
emp2 = Employee("Bob")
dept.add_employee(emp1)
dept.add_employee(emp2)
```

## Aggregation Exercise

- Create a `Library` class and a `Book` class
- A `Library` can have multiple `Book` objects
- Add methods to add and remove books from the library

## Association vs Aggregation

- Association: Objects are loosely coupled
- Aggregation: Objects are tightly coupled, part-of relationship

## Association

```python
class Car:
    def __init__(self, make, model):
        self.make = make
        self.model = model

class Driver:
    def __init__(self, name, car):
        self.name = name
        self.car = car

car = Car("Toyota", "Corolla")
driver = Driver("John", car)
```

## Aggregation

```python
class University:
    def __init__(self, name):
        self.name = name
        self.departments = []

    def add_department(self, department):
        self.departments.append(department)

class Department:
    def __init__(self, name):
        self.name = name

uni = University("MIT")
dept1 = Department("Computer Science")
dept2 = Department("Mathematics")
uni.add_department(dept1)
uni.add_department(dept2)
```

## Exercise

- Create a `Company` class and an `Employee` class
- A `Company` can have multiple `Employee` objects
- Add methods to hire and fire employees
- Ensure the `Employee` objects are deleted when fired