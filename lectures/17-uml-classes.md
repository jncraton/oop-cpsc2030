# UML class diagrams

## Class and Attribute Relationships

- Public and private attributes
- Inheritance and associations
- Aggregation and composition

## Public and Private Attributes

- Public: Accessible from outside the class
- Private: Accessible only within the class
- Convention: Prefix private attributes with `__`

## Example: Public and Private Attributes

```plantuml
@startuml
class Person {
  +name: str
  -age: int
  +__init__(name: str, age: int)
  +get_name(): str
  -get_age(): int
}
@enduml
```

## Inheritance

- `Child` class inherits from `Parent` class
- Use `--|>` to denote inheritance

## Example: Inheritance

```plantuml
@startuml
class Animal {
  +name: str
  +__init__(name: str)
  +eat(): str
}
class Dog {
  +breed: str
  +bark(): str
}
Dog --|> Animal
@enduml
```

## Exercise

- Create a class diagram for a `Vehicle` hierarchy
- Base class: `Vehicle`
- Derived classes: `Car`, `Bike`
- Attributes and methods as appropriate

---

[Full Documentation](https://plantuml.com/class-diagram)

# Other UML Diagrams

## Sequence Diagrams

- Show interactions betweenObjects
- Use `participant` and `->` to denote interactions

## Example: Sequence Diagram

```plantuml
@startuml
User -> System: login(username, password)
System -> User: Authenticated
@enduml
```

## Exercise

- Create a sequence diagram for a `BankAccount`class
- Methods: `deposit()`, `withdraw()`, `check_balance()`

## State Diagrams

- ShowStatesAndTransitions
- Use `state` and `->` to denote states and transitions

## Example: State Diagram

```plantuml
@startuml
state Light {
  hide empty description
  On -> Off : TurnOff
  Off -> On : TurnOn
}
@enduml
```

## Exercise

- Create a state diagram for a `TrafficLight`class
- States: `Red`, `Yellow`, `Green`
- Transitions: `Red -> Green`, `Green -> Yellow`, `Yellow -> Red`
