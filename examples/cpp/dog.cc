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
