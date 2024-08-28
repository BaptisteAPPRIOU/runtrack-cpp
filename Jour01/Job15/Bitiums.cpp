#include <iostream>
using namespace std;

bool isBitiums(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return (count % 2 == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Is Bitiums? " << (isBitiums(num) ? "true" : "false") << endl;
    return 0;
}