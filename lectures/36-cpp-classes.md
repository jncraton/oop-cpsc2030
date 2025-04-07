# C++ Classes

## Definition

- Blueprint for objects
- Encapsulates data and functions

## Instantiation

- Creating an object from a class
- Syntax: `ClassName objectName;`

## Example

```cpp
import std;

class Point {
public:
    int x;
    int y;
};

int main() {
    Point p;
    p.x = 10;
    p.y = 20;
    std::println("Point: ({}, {})", p.x, p.y);
}
```

## Properties/Attributes

- Data members of a class
- Can be public, private, or protected

## Example

```cpp
import std;

class Rectangle {
public:
    int width;
    int height;
};

int main() {
    Rectangle r;
    r.width = 5;
    r.height = 10;
    std::println("Rectangle: width = {}, height = {}", r.width, r.height);
}
```

## Methods

- Functions defined within a class
- Operate on the class's data members

## Example

```cpp
import std;

class Circle {
public:
    double radius;

    double area() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c;
    c.radius = 5.0;
    std::println("Circle area: {}", c.area());
}
```

## Private Members

- Accessible only within the class
- Encapsulates data

## Example

```cpp
import std;

class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::println("Insufficient funds");
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000.0);
    account.withdraw(500.0);
    std::println("Balance: {}", account.getBalance());
}
```

## Constructor

- Special method called when an object is created
- Initializes object's state

## Example

```cpp
import std;

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age) : name(name), age(age) {}

    void display() const {
        std::println("Name: {}, Age: {}", name, age);
    }
};

int main() {
    Person p("Alice", 30);
    p.display();
}
```
