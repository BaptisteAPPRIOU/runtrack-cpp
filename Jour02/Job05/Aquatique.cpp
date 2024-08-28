#include "Aquatique.hpp"
#include <iostream>
using namespace std;

Aquatique::Aquatique(double vitesse) : vitesseEau(vitesse) {}

Aquatique::~Aquatique() {}

void Aquatique::nager() const{
    cout << "Je nage a " << vitesseEau << "m/s" << endl;
}