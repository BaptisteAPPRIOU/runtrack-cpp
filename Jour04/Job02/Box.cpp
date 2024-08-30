#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
private:
    T element;

public:
    Box(const T& value) : element(value) {}

    T& get() {
        return element;
    }

    const T& get() const {
        return element;
    }
};

int main() {
    Box<int> box(42);
    cout << box.get() << endl;

    Box<string> box2("Hello, World!");
    cout << box2.get() << endl;

    return 0;
}

/* Peut être séparé tel que :
    - Box.tpp : contient la déclaration complète des fonctions get() et du constructeur. Ce fichier include le fichier Box.hpp
    - Box.hpp : contient la déclaration de la classe Box. Ce fichier include le fichier Box.tpp
    - main.cpp : contient la fonction main. Ce fichier include le fichier Box.hpp
*/