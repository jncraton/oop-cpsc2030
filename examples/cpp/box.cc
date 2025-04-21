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
