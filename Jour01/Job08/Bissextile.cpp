#include <iostream>
using namespace std;

bool estBissextile(int annee) {
    if (annee % 4 != 0) {
        return false;
    } else if (annee % 100 != 0) {
        return true;
    } else if (annee % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int annee;
    cout << "Entrez une année : ";
    cin >> annee;

    if (estBissextile(annee)) {
        cout << annee << " est une année bissextile." << endl;
    } else {
        cout << annee << " n'est pas une année bissextile." << endl;
    }

}