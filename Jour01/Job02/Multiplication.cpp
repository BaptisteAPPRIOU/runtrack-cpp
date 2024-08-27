#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 2;
    multiplication(a, b);
    return 0;
}

int multiplication(int a, int b) {
    int c = a*b;
    cout << c << endl;
    return;
}