# C++ Inheritance

## Simple Inheritance

- Base class provides common functionality
- Derived class extends or specializes base class

## Example: Simple Inheritance

```cpp
import std;

class Tool {
public:
    void use() {
        std::println("Using a tool");
    }
};

class Hammer : public Tool {
public:
    void use() {
        std::println("Using a hammer");
    }
};

int main() {
    Hammer hammer;
    hammer.use();
}
```

## Example: Inheritance with Data Members

```cpp
import std;

class Vehicle {
public:
    int wheels;
};

class Car : public Vehicle {
public:
    int doors;
};

int main() {
    Car c;
    c.wheels = 4;
    c.doors = 4;
    std::println("Car has {} wheels and {} doors", c.wheels, c.doors);
}
```

## Private Members

- Accessible only within the class
- Not accessible in derived classes

## Example: Private Members

```cpp
import std;

class Container {
private:
    int capacity;
public:
    void set_capacity(int c) {
        capacity = c;
    }
    int get_capacity() const {
        return capacity;
    }
};

class Box : public Container {
public:
    void display_capacity() {
        std::println("Capacity: {}", get_capacity());
    }
};

int main() {
    Box b;
    b.set_capacity(10);
    b.display_capacity();
}
```

## Protected Members

- Accessible within the class and derived classes
- Not accessible outside

## Example: Protected Members

```cpp
import std;

class Building {
protected:
    int floors;
public:
    void set_floors(int f) {
        floors = f;
    }
};

class House : public Building {
public:
    void display_floors() {
        std::println("Floors: {}", floors);
    }
};

int main() {
    House h;
    h.set_floors(2);
    h.display_floors();
}
```

## Exercise

- Create a base class `Animal` with a protected member `name`
- Create a derived class `Dog` that prints the name
- Test with a `main` function

## Example: Animal and Dog

```cpp
import std;

class Animal {
protected:
    std::string name;
public:
    Animal(std::string name) : name(name) {}
    void print() {
        std::println("Animal: {}", name);
    }
};

class Dog : public Animal {
public:
    Dog(std::string name) : Animal(name) {}
    void print() {
        std::println("Dog: {}", name);
    }
};

int main() {
    Dog d("Buddy");
    d.print();
}
```

## Access Specifiers

- public: Accessible from anywhere
- private: Accessible only within the class
- protected: Accessible within the class and derived classes
