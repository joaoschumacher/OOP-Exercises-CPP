#include "Calculadora.h"
#include <iostream>

using namespace std;

int main() {
    Calculadora calculadora(VERMELHO);
    calculadora.imprimeInfo();

    float soma1 = calculadora.soma(10.5, 5.5);
    float soma2 = calculadora.soma(10.5, -5.5);
    float subtracao1 = calculadora.subtrai(20.0, 7.5);
    float subtracao2 = calculadora.subtrai(7.5, 20.0);
    float subtracao3 = calculadora.subtrai(-7.5, 20.0);
    float multiplicacao = calculadora.multiplica(4.0, 3.5);
    float divisao = calculadora.divide(15.0, 3.0);

    cout << "Soma (10.5 + 5.5): " << soma1 << endl;
    cout << "Soma (10.5 + (-5.5)): " << soma2 << endl;
    cout << "Subtracao (20.0 - 7.5): " << subtracao1 << endl;
    cout << "Subtracao (7.5 - 20.0): " << subtracao2 << endl;
    cout << "Subtracao (-7.5 - 20.0): " << subtracao3 << endl;
    cout << "Multiplicacao (4.0 * 3.5): " << multiplicacao << endl;
    cout << "Divisao (15.0 / 3.0): " << divisao << endl;

    int quadrado = calculadora.elevaQuadrado(4);
    int cubo = calculadora.elevaCubo(3);

    cout << "Quadrado de 4: " << quadrado << endl;
    cout << "Cubo de 3: " << cubo << endl;

    calculadora.setMemoria(50.5);
    calculadora.setCor(AZUL);
    calculadora.imprimeInfo();

    return 0;
}
