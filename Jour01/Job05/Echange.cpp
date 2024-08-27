#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Entrez deux entiers à échanger : " << endl;
    cin >> a;
    cin >> b;
    cout << "Entier a = " << a << " & entier b = " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "Entier a = " << a << " & entier b = " << b << endl;
}