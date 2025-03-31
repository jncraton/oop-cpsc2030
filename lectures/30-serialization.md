# Object Serialization

## Introduction

- Converting objects to a format that can be stored or transmitted
- Common formats: JSON, pickle

## Why Serialize?

- Save objects to disk
- Send objects over a network
- Store objects in a database

## JSON Serialization

- JavaScript Object Notation
- Human-readable format
- Built-in support in Python

## JSON Example

```python
import json

data = {
    "name": "Alice",
    "age": 30,
    "is_student": False
}

json_data = json.dumps(data)
print(json_data)
```

## JSON Deserialization

```python
import json

json_data = '{"name": "Alice", "age": 30, "is_student": false}'
data = json.loads(json_data)
print(data)
```

## Exercise

1. Serialize a dictionary to a JSON string
2. Deserialize the string back to a dictionary

## Pickle Serialization

- Python-specific format
- Can serialize complex objects
- Not human-readable

## Pickle Example

```python
import pickle

data = {
    "name": "Alice",
    "age": 30,
    "is_student": False
}

pickle_data = pickle.dumps(data)
print(pickle_data)
```

## Pickle Deserialization

```python
import pickle

pickle_data = b'\x80\x04\x95*\x00\x00\x00\x00\x00\x00\x00}\x94(\x8c\x04name\x94\x8c\x05Alice\x94\x8c\x03age\x94K\x1e\x8c\nis_student\x94\x89u.'
data = pickle.loads(pickle_data)
print(data)
```

## Exercise

1. Serialize a dictionary to pickle
2. Deserialize the pickle back to a dictionary

## Custom Object Serialization

- Define `__getstate__` and `__setstate__` methods

## Custom Object Example

```python
import json

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __getstate__(self):
        return {"name": self.name, "age": self.age}

    def __setstate__(self, state):
        self.name = state["name"]
        self.age = state["age"]

person = Person("Alice", 30)
json_data = json.dumps(person.__getstate__())
print(json_data)
```

## Custom Object Deserialization

```python
import json

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __setstate__(self, state):
        self.name = state["name"]
        self.age = state["age"]

json_data = '{"name": "Alice", "age": 30}'
state = json.loads(json_data)
person = Person("", 0)
person.__setstate__(state)
print(person.name, person.age)
```

## Exercise

- Define a custom DrPreston class
- Support `__getstate__` and `__setstate__`
- Serialize and deserialize an instance of the class
