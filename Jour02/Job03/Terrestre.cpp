#include "Terrestre.hpp"
#include <iostream>
using namespace std;

Terrestre::Terrestre(double vitesse) : vitesseTerre(vitesse) {}

Terrestre::~Terrestre() {}

void Terrestre::marcher() const{
    cout << "Je marche a "<< vitesseTerre << "m/s" << endl;
}