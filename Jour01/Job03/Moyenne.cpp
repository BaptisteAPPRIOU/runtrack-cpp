#include <iostream>
using namespace std;

int main() {
    cout << "Veuillez entrer 5 notes :" << endl;
    int somme = 0;
    int note = 0;
    for (int i = 0; i < 5; i++) {
        cin >> note;
        somme += note;
    }
    cout << "La moyenne est de " << somme/5 << endl;
    return 0;
}