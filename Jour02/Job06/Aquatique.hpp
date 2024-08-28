#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class Aquatique
{
    public:
        Aquatique(double vitesse);
        ~Aquatique();
        virtual void nager() const;
    protected:
        double vitesseEau;
};

#endif // AQUATIQUE_HPP