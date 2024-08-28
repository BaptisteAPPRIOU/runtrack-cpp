#include <iostream>
using namespace std;

int plusPetitElement(int** arr, int taille) {
    int petit = **arr;
    for (int i = 1; i < taille; i++) {
        if (*(*(arr + i)) < petit) {
            petit = *(*(arr + i));
        }
    }
    return petit;
}

int main() {
    int a = 5, b = 2, c = 9, d = 1, e = 7;
    int* arr[] = {&a, &b, &c, &d, &e};
    int taille = sizeof(arr) / sizeof(arr[0]);

    int petitElement = plusPetitElement(arr, taille);
    cout << "Le plus petit élément de l'array est : " << petitElement << endl;
}