#include "Pingouin.hpp"
#include <iostream>
using namespace std;


Pingouin::Pingouin(double speedEau, double speedTerre) : Aquatique(10.0), Terrestre(10.0) {}

Pingouin::~Pingouin() {}

void Pingouin::saluer()
{
    cout << "Salut, je suis un pingouin" << endl;
}

void Pingouin::nager() const
{
    cout << "Je nage maintenant a " << vitesseEau << "m/s" << endl;
}

void Pingouin::marcher() const
{
    cout << "Je marche maintenant a " << vitesseTerre << "m/s" << endl;
}