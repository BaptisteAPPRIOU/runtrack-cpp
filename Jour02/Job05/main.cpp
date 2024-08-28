#include "Pingouin.hpp"
#include <iostream>
using namespace std;

int main()
{
    // Pingouin pingouin(10.0, 10.0, 15.0);
    // pingouin.saluer();
    // pingouin.nager();
    // pingouin.marcher();
    // pingouin.glisser();
    // pingouin.setVitesseEau(20.0);
    // pingouin.setVitesseTerre(20.0);
    // pingouin.setVitesseGlisse(25.0);
    // pingouin.nager();
    // pingouin.marcher();
    // pingouin.glisser();
    shared_ptr<Pingouin> pingouin1 = make_shared<Pingouin>("Pierre", 10.0, 20.0, 30.0);
    shared_ptr<Pingouin> pingouin2 = make_shared<Pingouin>("Paul", 30.0, 10.0, 20.0);
    shared_ptr<Pingouin> pingouin3 = make_shared<Pingouin>("Jacques", 20.0, 30.0, 10.0);
    Pingouin::ajouterPingouin(pingouin1);
    Pingouin::ajouterPingouin(pingouin2);
    Pingouin::ajouterPingouin(pingouin3);
    // Pingouin::afficherPingouins();
    // Pingouin::supprimerPingouin(pingouin2);
    // Pingouin::afficherPingouins();
    Pingouin::afficherTempsParcours();
    return 0;
}
// Il faut écrire :
// cd Jour02/Job05
// g++ main.cpp Pingouin.cpp Aquatique.cpp Terrestre.cpp -o main.exe
// ./main