#include "Pingouin.hpp"

vector<shared_ptr<Pingouin>> Pingouin::PingouinS;
vector<string> Pingouin::Meetups;

Pingouin::Pingouin(string name, double speedEau, double speedTerre) :
nom(name), Aquatique(speedEau), Terrestre(speedTerre) {}

Pingouin::Pingouin(string name, double speedEau, double speedTerre, double speedGlisse) :
nom(name), Aquatique(speedEau), Terrestre(speedTerre), vitesseGlisse(speedGlisse) {}

Pingouin::~Pingouin() {}

void Pingouin::saluer()
{
    cout << "Salut, je suis " << nom << endl;
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

double Pingouin::tempsParcours() const
{
    double distanceGlisse = 15.0;
    double distanceMarche = 20.0;
    double distanceNage = 50.0;
    double distanceMarche2 = 15.0;

    double tempsGlisse = distanceGlisse / getVitesseGlisse();
    double tempsMarche = distanceMarche / getVitesseTerre();
    double tempsNage = distanceNage / getVitesseEau();
    double tempsMarche2 = distanceMarche2 / getVitesseTerre();

    return tempsGlisse + tempsMarche + tempsNage + tempsMarche2;
}

void Pingouin::afficherTempsParcours()
{
    sort(PingouinS.begin(), PingouinS.end(),
        [](const shared_ptr<Pingouin>& a, const shared_ptr<Pingouin>& b) {
            return a->tempsParcours() < b->tempsParcours();
        });

    for (const auto& pingouin : PingouinS) {
        cout << "Le temps de parcours de " << pingouin->nom << " est de " << pingouin->tempsParcours() << " secondes" << endl;
    }
}

void Pingouin::ajouterMeetup(string meetup)
{
    Meetups.push_back(meetup);
}

void Pingouin::afficherMeetups()
{
    for (const auto& meetup : Meetups)
    {
        cout << "Meetup: " << meetup << endl;
    }
}

void Pingouin::supprimerMeetup(string meetup)
{
    Meetups.erase(remove(Meetups.begin(), Meetups.end(), meetup), Meetups.end());
}
