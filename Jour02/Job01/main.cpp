#include "Pingouin.hpp"
#include <iostream>
using namespace std;

int main()
{
    Pingouin pingouin(10.0, 10.0);
    pingouin.saluer();
    pingouin.nager();
    pingouin.marcher();
    return 0;
}
// Il faut écrire :
// cd Jour02/Job01
// g++ main.cpp Pingouin.cpp Aquatique.cpp Terrestre.cpp -o Pingouin.exe
// ./Pingouin