# Behavioral Design Patterns in Python

## Introduction

- Patterns that focus on communication between objects
- Enhance flexibility and reusability

## Chain of Responsibility

- Pass requests along a chain of potential handlers
- Each handler decides to process or pass the request

## Example: Chain of Responsibility

```python
class Handler:
    def __init__(self, successor=None):
        self._successor = successor

    def handle(self, request):
        if self._successor:
            self._successor.handle(request)

class ConcreteHandler1(Handler):
    def handle(self, request):
        if request == "Request1":
            print("Handling Request1")
        else:
            super().handle(request)

class ConcreteHandler2(Handler):
    def handle(self, request):
        if request == "Request2":
            print("Handling Request2")
        else:
            super().handle(request)
```

## Exercise: Chain of Responsibility

- Create a chain of handlers for processing different types of requests
- Test with various requests

## Command

- Encapsulate a request as an object
- Parameterize clients with different requests

## Example: Command

```python
class Command:
    def execute(self):
        pass

class Light:
    def turn_on(self):
        print("Light is on")

    def turn_off(self):
        print("Light is off")

class LightOnCommand(Command):
    def __init__(self, light):
        self._light = light

    def execute(self):
        self._light.turn_on()

class LightOffCommand(Command):
    def __init__(self, light):
        self._light = light

    def execute(self):
        self._light.turn_off()
```

## Exercise: Command

- Create a `RemoteControl` class that uses `Command` objects
- Test with `LightOnCommand` and `LightOffCommand`

## Interpreter

- Define a language and an interpreter to process sentences in the language

## Example: Interpreter

```python
class Expression:
    def interpret(self, context):
        pass

class TerminalExpression(Expression):
    def __init__(self, data):
        self._data = data

    def interpret(self, context):
        return self._data in context

class NonterminalExpression(Expression):
    def __init__(self, expr1, expr2):
        self._expr1 = expr1
        self._expr2 = expr2

    def interpret(self, context):
        return self._expr1.interpret(context) and self._expr2.interpret(context)
```

## Exercise: Interpreter

- Create an interpreter for a simple Boolean language
- Test with different sentences

## Iterator

- Provide a way to access elements of an aggregate object sequentially

## Example: Iterator

```python
class Iterator:
    def has_next(self):
        pass

    def next(self):
        pass

class ConcreteIterator(Iterator):
    def __init__(self, collection):
        self._collection = collection
        self._index = 0

    def has_next(self):
        return self._index < len(self._collection)

    def next(self):
        if self.has_next():
            item = self._collection[self._index]
            self._index += 1
            return item
        else:
            raise StopIteration

class Collection:
    def __init__(self, items):
        self._items = items

    def create_iterator(self):
        return ConcreteIterator(self._items)
```

## Exercise: Iterator

- Create a custom collection and iterator
- Test with a list of items

## Mediator

- Define an object that encapsulates how a set of objects interact

## Example: Mediator

```python
class Mediator:
    def send(self, message, colleague):
        pass

class ConcreteMediator(Mediator):
    def __init__(self, colleague1, colleague2):
        self._colleague1 = colleague1
        self._colleague2 = colleague2

    def send(self, message, colleague):
        if colleague == self._colleague1:
            self._colleague2.notify(message)
        else:
            self._colleague1.notify(message)

class Colleague:
    def __init__(self, mediator):
        self._mediator = mediator

    def send(self, message):
        self._mediator.send(message, self)

    def notify(self, message):
        print(f"Received: {message}")

class Colleague1(Colleague):
    pass

class Colleague2(Colleague):
    pass
```

## Exercise: Mediator

- Create a chat application with multiple users
- Test with messages between users

## Memento

- Capture and restore an object's internal state

## Example: Memento

```python
class Memento:
    def __init__(self, state):
        self._state = state

    def get_state(self):
        return self._state

class Originator:
    def __init__(self):
        self._state = ""

    def set_state(self, state):
        self._state = state

    def save_state(self):
        return Memento(self._state)

    def restore_state(self, memento):
        self._state = memento.get_state()

class Caretaker:
    def __init__(self, originator):
        self._mementos = []
        self._originator = originator

    def backup(self):
        self._mementos.append(self._originator.save_state())

    def undo(self):
        if self._mementos:
            memento = self._mementos.pop()
            self._originator.restore_state(memento)
```

## Exercise: Memento

- Create a text editor with undo functionality
- Test with multiple edits and undos

## Observer

- Define a one-to-many dependency between objects

## Example: Observer

```python
class Subject:
    def __init__(self):
        self._observers = []

    def attach(self, observer):
        self._observers.append(observer)

    def detach(self, observer):
        self._observers.remove(observer)

    def notify(self):
        for observer in self._observers:
            observer.update()

class Observer:
    def update(self):
        pass

class ConcreteObserver(Observer):
    def __init__(self, name):
        self._name = name

    def update(self):
        print(f"{self._name} received update")
```

## Exercise: Observer

- Create a weather station with multiple observers
- Test with weather updates

## State

- Allow an object to alter its behavior when its internal state changes

## Example: State

```python
class State:
    def handle(self, context):
        pass

class ConcreteStateA(State):
    def handle(self, context):
        print("Handling state A")
        context.set_state(ConcreteStateB())

class ConcreteStateB(State):
    def handle(self, context):
        print("Handling state B")
        context.set_state(ConcreteStateA())

class Context:
    def __init__(self, state):
        self._state = state

    def set_state(self, state):
        self._state = state

    def request(self):
        self._state.handle(self)
```

## Exercise: State

- Create a state machine for a traffic light
- Test with state transitions

## Strategy

- Define a family of algorithms, encapsulate each one, and make them interchangeable

## Example: Strategy

```python
class Strategy:
    def execute(self, data):
        pass

class ConcreteStrategyA(Strategy):
    def execute(self, data):
        print(f"Executing strategy A with {data}")

class ConcreteStrategyB(Strategy):
    def execute(self, data):
        print(f"Executing strategy B with {data}")

class Context:
    def __init__(self, strategy):
        self._strategy = strategy

    def set_strategy(self, strategy):
        self._strategy = strategy

    def execute_strategy(self, data):
        self._strategy.execute(data)
```

## Exercise: Strategy

- Create a context for sorting algorithms
- Test with different strategies

## Template Method

- Define the skeleton of an algorithm in a method

## Example: Template Method

```python
class AbstractClass:
    def template_method(self):
        self.base_operation1()
        self.required_operation1()
        self.base_operation2()
        self.hook1()
        self.required_operation2()
        self.base_operation3()
        self.hook2()

    def base_operation1(self):
        print("Base operation 1")

    def base_operation2(self):
        print("Base operation 2")

    def base_operation3(self):
        print("Base operation 3")

    def required_operation1(self):
        pass

    def required_operation2(self):
        pass

    def hook1(self):
        pass

    def hook2(self):
        pass

class ConcreteClass1(AbstractClass):
    def required_operation1(self):
        print("Concrete operation 1")

    def required_operation2(self):
        print("Concrete operation 2")

class ConcreteClass2(AbstractClass):
    def required_operation1(self):
        print("Another concrete operation 1")

    def required_operation2(self):
        print("Another concrete operation 2")
```

## Exercise: Template Method

- Create a template method for a game
- Test with different game types

## Visitor

- Represent an operation to be performed on the elements of an object structure

## Example: Visitor

```python
class Element:
    def accept(self, visitor):
        pass

class ConcreteElementA(Element):
    def accept(self, visitor):
        visitor.visit_concrete_element_a(self)

class ConcreteElementB(Element):
    def accept(self, visitor):
        visitor.visit_concrete_element_b(self)

class Visitor:
    def visit_concrete_element_a(self, element):
        pass

    def visit_concrete_element_b(self, element):
        pass

class ConcreteVisitor1(Visitor):
    def visit_concrete_element_a(self, element):
        print("Visited element A with visitor 1")

    def visit_concrete_element_b(self, element):
        print("Visited element B with visitor 1")

class ConcreteVisitor2(Visitor):
    def visit_concrete_element_a(self, element):
        print("Visited element A with visitor 2")

    def visit_concrete_element_b(self, element):
        print("Visited element B with visitor 2")
```

## Exercise: Visitor

- Create a visitor for a file system
- Test with different file types
