#include "Pingouin.hpp"
#include <iostream>
using namespace std;


Pingouin::Pingouin(double speedEau, double speedTerre) : Aquatique(10.0), Terrestre(10.0) {}

Pingouin::Pingouin(double speedEau, double speedTerre, double speedGlisse) :
Aquatique(10.0), Terrestre(10.0), vitesseGlisse(speedGlisse) {}

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

void Pingouin::glisser() const
{
    cout << "Je glisse maintenant a " << vitesseGlisse << "m/s" << endl;
}

void Pingouin::setVitesseGlisse(double speed)
{
    vitesseGlisse = speed;
}

double Pingouin::getVitesseGlisse() const
{
    return vitesseGlisse;
}

void Pingouin::setVitesseEau(double speed)
{
    vitesseEau = speed;
}

double Pingouin::getVitesseEau() const
{
    return vitesseEau;
}

void Pingouin::setVitesseTerre(double speed)
{
    vitesseTerre = speed;
}

double Pingouin::getVitesseTerre() const
{
    return vitesseTerre;
}