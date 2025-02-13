# Other UML Diagrams

## Sequence Diagrams

- Show interactions betweenObjects
- Use `participant` and `->` to denote interactions

## Example: Sequence Diagram

```plantuml
@startuml
participant User
participant System
User -> System: login(username, password)
System ->User:Authenticated
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
