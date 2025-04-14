import std;

int main() {
    int age;
    std::printf("Enter your age: ");
    std::cin >> age;
    if (age >= 18) {
        std::println("You are an adult.");
    } else {
        std::println("You are a minor.");
    }
}
