#include <iostream>
using namespace std;

template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 3;
    int b = 2;
    cout << ::max(a, b) << endl;
    return 0;
}
