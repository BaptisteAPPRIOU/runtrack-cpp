#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

class Terrestre
{
    public:
        Terrestre(double vitesse);
        ~Terrestre();
        virtual void marcher() const;
    protected:
        double vitesseTerre;
};

#endif // TERRESTRE_HPP