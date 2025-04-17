# C++ Inheritance

## Simple Inheritance

- Base class provides common functionality
- Derived class extends or specializes base class

## Example: Simple Inheritance

```cpp
import std;

class Base {
public:
    void greet() {
        std::println("Hello from Base");
    }
};

class Derived : public Base {
public:
    void greet() {
        std::println("Hello from Derived");
    }
};

int main() {
    Derived d;
    d.greet();
}
```

## Example: Inheritance with Data Members

```cpp
import std;

class Base {
protected:
    int x;
public:
    Base(int x) : x(x) {}
    void print() {
        std::println("Base x: {}", x);
    }
};

class Derived : public Base {
public:
    Derived(int x) : Base(x) {}
    void print() {
        std::println("Derived x: {}", x);
    }
};

int main() {
    Derived d(10);
    d.print();
}
```

## Private Members

- Accessible only within the class
- Not accessible in derived classes

## Example: Private Members

```cpp
import std;

class Base {
private:
    int x;
public:
    Base(int x) : x(x) {}
    void print() {
        std::println("Base x: {}", x);
    }
};

class Derived : public Base {
public:
    Derived(int x) : Base(x) {}
    void print() {
        // std::println("Derived x: {}", x); // Error: x is private
    }
};

int main() {
    Derived d(10);
    d.print();
}
```

## Protected Members

- Accessible within the class and derived classes
- Not accessible outside

## Example: Protected Members

```cpp
import std;

class Base {
protected:
    int x;
public:
    Base(int x) : x(x) {}
    void print() {
        std::println("Base x: {}", x);
    }
};

class Derived : public Base {
public:
    Derived(int x) : Base(x) {}
    void print() {
        std::println("Derived x: {}", x);
    }
};

int main() {
    Derived d(10);
    d.print();
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
