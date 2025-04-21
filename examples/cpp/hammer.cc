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
