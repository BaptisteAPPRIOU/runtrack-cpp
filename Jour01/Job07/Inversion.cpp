#include <iostream>
using namespace std;

int main() {
    int nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    int erbmon = 0;
    while (nombre > 0) {
        int digit = nombre % 10;
        erbmon = erbmon * 10 + digit;
        nombre /= 10;
    }
    cout << "Nombre inversé : " << erbmon << endl;
}