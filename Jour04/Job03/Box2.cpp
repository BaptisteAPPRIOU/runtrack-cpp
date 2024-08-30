#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
private:
    T element;

public:
    Box(const T& value) : element(value) {}

    T& get() {
        return element;
    }

    const T& get() const {
        return element;
    }
};

// Specialization of Box for pointers
template <typename T>
class Box<T*> {
private:
    T* element;

public:
    Box(T* value) : element(value) {}

    T& get() {
        return *element;
    }

    const T& get() const {
        return *element;
    }
};

int main() {
    Box<int> box(42);
    cout << box.get() << endl;

    Box<string> box2("Hello, World!");
    cout << box2.get() << endl;

    int num = 10;
    Box<int*> box3(&num);
    cout << box3.get() << endl;

    return 0;
}