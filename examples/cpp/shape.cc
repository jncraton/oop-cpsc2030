import std;

class Shape {
public:
    Shape() {
        std::println("Shape created");
    }
};

class Rectangle : public Shape {
public:
    Rectangle() {
        std::println("Rectangle created");
    }
};

int main() {
    Rectangle r;
}
