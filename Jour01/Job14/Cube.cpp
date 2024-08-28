#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    for (int i = 5; i < N+1; i++) {
        cout << i << "^3 = " << i*i*i << endl;
    }
}