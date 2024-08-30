#include <iostream>
using namespace std;

template<typename T>
void print(const T& value) {
    cout << value << endl;
}

template<typename T, typename... Args>
void print(const T& value, const Args&... args) {
    cout << value << ", ";
    print(args...);
}

int main() {
    print(1, "Hello", 3.14, 'A');
    return 0;
}