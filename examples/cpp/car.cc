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
