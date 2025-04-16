import std;

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age) : name{name}, age{age} {}

    void display() const {
        std::println("Name: {}, Age: {}", name, age);
    }
};

int main() {
    Person p("Alice", 30);
    p.display();
}
