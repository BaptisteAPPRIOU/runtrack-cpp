#include <iostream>
using namespace std;

constexpr int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned int numBitsSet(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count % 2 == 0;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    if (numBitsSet(3213165161))
        cout << "The number of bits set in 3213165161 is even." << endl;
    else
        cout << "The number of bits set in 3213165161 is odd." << endl;

    return 0;
}