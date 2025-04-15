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
