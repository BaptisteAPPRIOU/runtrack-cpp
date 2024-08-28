#include <iostream>
using namespace std;

void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Avant l'échange : x = " << x << ", y = " << y << endl;

    swapValues(x, y);

    cout << "Après l'échange : x = " << x << ", y = " << y << endl;

    return 0;
}