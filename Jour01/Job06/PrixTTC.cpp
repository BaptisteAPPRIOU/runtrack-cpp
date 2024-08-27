#include <iostream>
using namespace std;

int main() {
    float prixHT, kilo, tauxTVA, prixTTC;
    cout << "Entrez le prix HT d'un kilo de carottes: ";
    cin >> prixHT;
    cout << "Entrez le nombre de kilos de carottes: ";
    cin >> kilo;
    cout << "Entrez le taux de TVA : ";
    cin >> tauxTVA;
    prixTTC = prixHT * kilo * (1 + tauxTVA/100);
    cout << "Le prix TTC est de " << prixTTC << " euros." << endl;
}