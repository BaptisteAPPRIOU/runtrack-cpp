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
    static Shape* createShape(const string& type) { // Méthode statique pour créer une forme
        if (type == "circle") {
            return new Circle();
        } else if (type == "rectangle") {
            return new Rectangle();
        } else {
            return nullptr;
        }
    }
};

template <typename T> // Fonction template
void drawShape(const T& shape) { // Prend en paramètre une référence constante à un objet de type T
    shape.draw();
}

int main() {

    Shape* circle = ShapeFactory::createShape("circle");
    Shape* rectangle = ShapeFactory::createShape("rectangle");
    Shape* unknown = ShapeFactory::createShape("unknown");

    drawShape(*circle);
    drawShape(*rectangle);
    // drawShape(*unknown); = Segmentation fault car unknown est nullptr

    return 0;
}