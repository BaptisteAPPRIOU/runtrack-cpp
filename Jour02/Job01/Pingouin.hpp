#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre
{
    public:
        Pingouin(double speedEau, double speedTerre);
        ~Pingouin();
        void saluer();
        void nager() const override;
        void marcher() const override;
};

#endif // PINGOUIN_HPP