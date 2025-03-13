# Creational Design Patterns in Python

## Introduction

- Design patterns are reusable solutions to common problems
- Creational patterns focus on object creation mechanisms

## Abstract Factory

- Provides an interface for creating families of related objects
- Does not specify concrete classes

## Maze Example

```python
class Site:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.theme = "blue"
        self.pathable = False

class Wall(Site):
    pass

class Room(Site):
    def __init__(self, x, y):
        super().__init__(x, y)
        self.pathable = True

class SiteFactory:
    @staticmethod
    def makeWall(x, y):
        return Wall(x, y)

    @staticmethod
    def makeRoom(x, y):
        return Room(x, y)

class Level1:
    def __init__(self, factory):
        self.sites = []
        self.sites.append(Wall(1, 1))
        self.sites.append(Wall(1, 2))
        self.sites.append(Wall(1, 3))
        self.sites.append(Wall(2, 1))
        self.sites.append(Room(2, 2))
        self.sites.append(Wall(2, 3))
        self.sites.append(Wall(3, 1))
        self.sites.append(Wall(3, 2))
        self.sites.append(Wall(3, 3))
```

---

What if we want to change the theme of the level?

## Abstract Factory Example

```python
class Site:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.theme = "blue"
        self.pathable = False

class Wall(Site):
    pass

class Room(Site):
    def __init__(self, x, y):
        super().__init__(x, y)
        self.pathable = True

class SiteFactory:
    @staticmethod
    def makeWall(x, y):
        return Wall(x, y)
    
    @staticmethod
    def makeRoom(x, y):
        return Room(x, y)
    
class Level1:
    def __init__(self, factory):
        self.sites = []
        self.sites.append(factory.makeWall(1, 1))
        self.sites.append(factory.makeWall(1, 2))
        self.sites.append(factory.makeWall(1, 3))
        self.sites.append(factory.makeWall(2, 1))
        self.sites.append(factory.makeRoom(2, 2))
        self.sites.append(factory.makeWall(2, 3))
        self.sites.append(factory.makeWall(3, 1))
        self.sites.append(factory.makeWall(3, 2))
        self.sites.append(factory.makeWall(3, 3))
```

## Builder

- Separates the construction of a complex object from its representation
- Allows step-by-step object creation

## Builder vs Abstract Factory

- A Builder focuses on building an object step-by-step through a director
- A factory has a number of methods to build complete objects

## Builder Example

```python
class HouseBuilder:
    def build_walls(self):
        pass

    def build_roof(self):
        pass

class ModernHouseBuilder(HouseBuilder):
    def build_walls(self):
        print("Building modern walls")

    def build_roof(self):
        print("Building modern roof")
```

## Factory Method

- Defines an interface for creating an object, but lets subclasses decide which class to instantiate
- Delegates object creation to subclasses

## Factory Method Example

```python
class Creator:
    def factory_method(self):
        pass

class ConcreteCreator(Creator):
    def factory_method(self):
        return ConcreteProduct()
```

## Prototype

- Creates objects based on a template of an existing object through cloning
- Useful for creating multiple objects that are similar

## Prototype Example

```python
import copy

class Prototype:
    def clone(self):
        return copy.deepcopy(self)

class ConcretePrototype(Prototype):
    def __init__(self, value):
        self.value = value
```

## Singleton

- Ensures a class has only one instance and provides a global point of access to it
- Useful for managing shared resources

## Singleton Example

```python
class Singleton:
    _instance = None

    @staticmethod
    def get_instance():
        if Singleton._instance is None:
            Singleton._instance = Singleton()
        return Singleton._instance
```

## Summary

- Abstract Factory: Families of related objects
- Builder: Step-by-step object creation
- Factory Method: Subclass decides object creation
- Prototype: Cloning existing objects
- Singleton: Single instance, global access
