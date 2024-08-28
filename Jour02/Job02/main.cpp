#include "Pingouin.hpp"
#include <iostream>
using namespace std;

int main()
{
    Pingouin pingouin(10.0, 10.0);
    pingouin.saluer();
    pingouin.nager();
    pingouin.marcher();
    pingouin.glisser();
    pingouin.setVitesseEau(20.0);
    pingouin.setVitesseTerre(20.0);
    pingouin.setVitesseGlisse(25.0);
    pingouin.nager();
    pingouin.marcher();
    pingouin.glisser();
    return 0;
}
// Il faut écrire :
// cd Jour02/Job02
// g++ main.cpp Pingouin.cpp Aquatique.cpp Terrestre.cpp -o main.exe
// ./main