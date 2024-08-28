#include "Pingouin.hpp"

vector<shared_ptr<Pingouin>> Pingouin::PingouinS;

Pingouin::Pingouin(double speedEau, double speedTerre) : Aquatique(10.0), Terrestre(10.0) {}

Pingouin::Pingouin(double speedEau, double speedTerre, double speedGlisse) :
Aquatique(speedEau), Terrestre(speedTerre), vitesseGlisse(speedGlisse) {}

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

void Pingouin::ajouterPingouin(shared_ptr<Pingouin> pingouin)
{
    PingouinS.push_back(pingouin);
}

void Pingouin::afficherPingouins()
{
    for (auto pingouin : PingouinS)
    {
        pingouin->saluer();
    }
}

void Pingouin::supprimerPingouin(shared_ptr<Pingouin> pingouin)
{
    PingouinS.erase(remove(PingouinS.begin(), PingouinS.end(), pingouin), PingouinS.end());
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