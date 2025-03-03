# Association and Aggregation

## Introduction

- Understanding relationships between objects
- Key concepts: Association and Aggregation

## Association

- Objects are related but independent
- Example: Student and Course

## Association Example

```python
class Student:
    def __init__(self, name):
        self.name = name

class Course:
    def __init__(self, title):
        self.title = title

student = Student("Alice")
course = Course("Python OOP")
```

## Aggregation

- Stronger relationship
- One object contains others but does not own them
- Example: University and Departments

## Aggregation Example

```python
class Department:
    def __init__(self, name):
        self.name = name

class University:
    def __init__(self, name, departments):
        self.name = name
        self.departments = departments

dept1 = Department("CS")
dept2 = Department("Math")
uni = University("Tech U", [dept1, dept2])
```

## Key Differences

- Association: Objects are related but independent
- Aggregation: One object contains others, but they can exist independently
