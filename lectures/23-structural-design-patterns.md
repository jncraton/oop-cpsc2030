# Structural Design Patterns

## Introduction

- Structural patterns deal with object composition
- Simplify structure by identifying relationships
- Adapter, Bridge, Composite, Decorator, Facade, Flyweight, Proxy

## Adapter Pattern

- Converts interface of a class into another interface
- Allows incompatible interfaces to work together

## Adapter Example

```python
class Duck:
    def quack(self):
        print("Quack")

class Turkey:
    def gobble(self):
        print("Gobble")

class TurkeyAdapter:
    def __init__(self, turkey):
        self.turkey = turkey

    def quack(self):
        self.turkey.gobble()
```

## Exercise

- Create a `SetAdapter` for the `list` class to allow it to support `intersection`, `difference`, and `union` like a `set`

## Bridge Pattern

- Decouples an abstraction from its implementation
- Both can vary independently

## Bridge Example

```python
class Implementor:
    def operation(self):
        pass

class ConcreteImplementorA(Implementor):
    def operation(self):
        return "A"

class Abstraction:
    def __init__(self, implementor):
        self.implementor = implementor

    def operation(self):
        return self.implementor.operation()

a = Abstraction(ConcreteImplementorA())
print(a.operation())
```

## Exercise

- Create a `RemoteControl` abstraction and `TV` and `Radio` implementors

## Composite Pattern

- Composes zero-or-more similar objects into tree structures
- Treat individual objects and compositions uniformly

## Composite Example

```python
class Component:
    def operation(self):
        pass

class Leaf(Component):
    def operation(self):
        return "Leaf"

class Composite(Component):
    def __init__(self):
        self.children = []

    def add(self, component):
        self.children.append(component)

    def operation(self):
        results = [child.operation() for child in self.children]
        return f"Composite({', '.join(results)})"

tree = Composite()
tree.add(Leaf())
print(tree.operation())
```

## Exercise

- Create a `FileSystem` using `File` and `Directory` components

## Decorator Pattern

- Adds responsibilities to objects dynamically
- Provides a flexible alternative to subclassing

## Decorator Example

```python
class Component:
    def operation(self):
        pass

class ConcreteComponent(Component):
    def operation(self):
        return "ConcreteComponent"

class Decorator(Component):
    def __init__(self, component):
        self.component = component

    def operation(self):
        return self.component.operation()

class ConcreteDecoratorA(Decorator):
    def operation(self):
        return f"ConcreteDecoratorA({self.component.operation()})"

component = ConcreteComponent()
decorator = ConcreteDecoratorA(component)
print(decorator.operation())
```

## Exercise

- Create a `Text` component and `Bold` and `Italic` decorators

## Facade Pattern

- Provides a simplified interface to a complex subsystem
- Shields clients from complex implementation details

## Facade Example

```python
class SubsystemA:
    def operation(self):
        return "SubsystemA"

class SubsystemB:
    def operation(self):
        return "SubsystemB"

class Facade:
    def __init__(self):
        self.subsystem_a = SubsystemA()
        self.subsystem_b = SubsystemB()

    def operation(self):
        results = [
            self.subsystem_a.operation(),
            self.subsystem_b.operation()
        ]
        return f"Facade({', '.join(results)})"
```

## Exercise

- Create a `HomeTheaterFacade` for a home theater system

## Flyweight Pattern

- Reduces memory usage by sharing common data
- Useful for large numbers of similar objects

## Flyweight Example

```python
class Flyweight:
    def __init__(self, shared_state):
        self.shared_state = shared_state

class FlyweightFactory:
    def __init__(self):
        self._flyweights = {}

    def get_flyweight(self, shared_state):
        if shared_state not in self._flyweights:
            self._flyweights[shared_state] = Flyweight(shared_state)
        return self._flyweights[shared_state]

factory = FlyweightFactory()
flyweight1 = factory.get_flyweight("state1")
flyweight2 = factory.get_flyweight("state1")
print(flyweight1 is flyweight2)
```

## Proxy Pattern

- Provides a surrogate or placeholder for another object
- Controls access to the object

## Example

```python
class Subject:
    def request(self):
        pass

class RealSubject(Subject):
    def request(self):
        return "RealSubject"

class Proxy(Subject):
    def __init__(self, real_subject):
        self._real_subject = real_subject

    def request(self):
        if self.check_access():
            return self._real_subject.request()
        else:
            return "Access denied"

    def check_access(self):
        return True

real_subject = RealSubject()
proxy = Proxy(real_subject)
print(proxy.request())
```

## Example

```python
import json

class PersistentDict():
    def __init__(self, filename):
        self.__filename = filename
        self.__items = dict()
        
        try:
            with open(filename) as f:
                self.__items = json.load(f)
        except FileNotFoundError:
            pass
        
    def as_json(self):
        return json.dumps(self.__items)
        
    def __setitem__(self, item, value):
        self.__items[item] = value
        
        with open(self.__filename, "w") as f:
            f.write(self.as_json())
            
    def __getitem__(self, item):
        return self.__items[item]
        
d = PersistentDict("data.json")
d["name"] = "Alice"
d["age"] = 25
```
