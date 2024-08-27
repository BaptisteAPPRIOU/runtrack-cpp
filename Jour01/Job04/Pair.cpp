#include <iostream>
using namespace std;

int main() {
    int nombre = 0;
    cout << "Entrez un nombre entier :";
    cin >> nombre;
    cout << endl;
    if (nombre%2 == 0) {
        cout << "Le nombre est pair." << endl;
    } else {
        cout << "Le nombre est impair." << endl;
    }
}