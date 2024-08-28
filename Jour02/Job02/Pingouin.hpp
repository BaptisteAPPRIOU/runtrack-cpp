#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre
{
    public:
        Pingouin(double speedEau, double speedTerre);
        Pingouin(double speedEau, double speedTerre, double speedGlisse);
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
    private:
        double vitesseGlisse;
};

#endif // PINGOUIN_HPP