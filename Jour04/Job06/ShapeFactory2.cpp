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

class ShapeFactory { // Classe ShapeFactory
public:
    template <typename T>
    static T* createShape() { // Méthode statique pour créer une forme de type T
        return new T();
    }
};

template <typename T> // Fonction template
void drawShape(const T& shape) { // Prend en paramètre une référence constante à un objet de type T
    shape.draw();
}

int main() {

    Shape* circle = ShapeFactory::createShape<Circle>();
    Shape* rectangle = ShapeFactory::createShape<Rectangle>();
    // Shape* unknown = ShapeFactory::createShape<Shape>(); Erreur car Shape est une classe abstraite

    drawShape(*circle);
    drawShape(*rectangle);

    return 0;
}