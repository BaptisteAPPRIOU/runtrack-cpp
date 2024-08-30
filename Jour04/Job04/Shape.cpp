#include <iostream>
using namespace std;

class Shape { // Définition d'une classe abstraite
public:
    virtual void draw() const = 0; // Méthode virtuelle pure car = 0
};

class Circle : public Shape { // Classe Circle héritant de Shape
public:
    void draw() const override { // override pour indiquer que la méthode est redéfinie
        cout << "Drawing a circle." << endl;
    }
};
// pareil pour Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a rectangle." << endl;
    }
};

template <typename T> // Fonction template
void drawShape(const T& shape) { // Prend en paramètre une référence constante à un objet de type T
    shape.draw();
}

int main() {
    Circle circle;
    Rectangle rectangle;

    drawShape(circle);
    drawShape(rectangle);

    return 0;
}