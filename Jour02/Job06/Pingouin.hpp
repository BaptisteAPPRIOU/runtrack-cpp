#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <memory>
#include "Aquatique.hpp"
#include "Terrestre.hpp"

using namespace std;

class Pingouin : public Aquatique, public Terrestre
{
    public:
        Pingouin(string name, double speedEau, double speedTerre);
        Pingouin(string name, double speedEau, double speedTerre, double speedGlisse);
        ~Pingouin();
        void saluer();
        void nager() const override;
        void marcher() const override;
        void glisser() const;
        void setVitesseGlisse(double speed);
        double getVitesseGlisse() const;
        void setVitesseEau(double speed);
        double getVitesseEau() const;
        void setVitesseTerre(double speed);
        double getVitesseTerre() const;
        static vector<shared_ptr<Pingouin>> PingouinS;
        static void ajouterPingouin(shared_ptr<Pingouin> pingouin);
        static void afficherPingouins();
        static void supprimerPingouin(shared_ptr<Pingouin> pingouin);
        double tempsParcours() const;
        static void afficherTempsParcours();
        static vector<string> Meetups;
        static void ajouterMeetup(string meetup);
        static void afficherMeetups();
        static void supprimerMeetup(string meetup);
    private:
        string nom;
        double vitesseGlisse;
};

#endif // PINGOUIN_HPP