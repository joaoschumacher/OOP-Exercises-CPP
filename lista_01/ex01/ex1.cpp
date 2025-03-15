#include <iostream>
#include "Retangulo.h"

using namespace std;

int main() {
    cout << "Digite uma altura: ";
    int altura;
    cin >> altura;
    cout << "Digite uma base: ";
    int base;
    cin >> base;

    Retangulo retangulo = Retangulo(altura, base);
    cout << "A area do retangulo e: " << retangulo.getArea();
    return 0;
}