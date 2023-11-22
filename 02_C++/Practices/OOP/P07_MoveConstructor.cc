#include <iostream>
#include <cstring>

class String {
private:
    char* str;
    size_t size;

public:
    // Default constructor
    String() : str(nullptr), size(0) {}

    // Constructor with a C-style string
    String(const char* s) : str(nullptr), size(0) {
        if (s != nullptr) {
            size = std::strlen(s);
            str = new char[size + 1];
            std::strcpy(str, s);
        }
    }

    // Move constructor
    String(String&& other) noexcept : str(other.str), size(other.size) {
        other.str = nullptr;  // Ensure the source object doesn't own the memory anymore
        other.size = 0;
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Display the string
    void display() const {
        std::cout << (str ? str : "Empty") << " (Size: " << size << ")" << std::endl;
    }

    // Getter for the size
    size_t getSize() const {
        return size;
    }

    // Getter for the string
    const char* getStr() const {
        return str;
    }
};

int main() {
    String source("Hello, World!");

    // Use the move constructor to efficiently transfer resources
    String destination(std::move(source));

    std::cout << "Source: ";
    source.display();  // Source is now empty

    std::cout << "Destination: ";
    destination.display();  // Destination contains the original content

    std::cout << "Accessing Destination String: " << destination.getStr() << " (Size: " << destination.getSize() << ")" << std::endl;

    return 0;
}
