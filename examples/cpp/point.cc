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
