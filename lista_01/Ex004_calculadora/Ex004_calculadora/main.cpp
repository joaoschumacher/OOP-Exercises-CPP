#include "Empresa.h"
#include <iostream>

using namespace std;

int main() {
	FuncionarioCaixa funcionarioCaixa1("Joao", "Rua 1", Calculadora(VERDE));
	FuncionarioCaixa funcionarioCaixa2("Maria", "Rua 2", Calculadora(AZUL));

	cout << "Funcionario 1: " << funcionarioCaixa1.getNome() << endl;
	cout << "2 + 2 = " << funcionarioCaixa1.soma(2, 2) << endl;
	cout << "5 - 4 = " << funcionarioCaixa1.subtrai(5, 4) << endl;
	cout << "2 x 3 = " << funcionarioCaixa1.multiplica(2, 3) << endl;
	cout << "--------------------------------" << endl;
	cout << "Funcionario 2: " << funcionarioCaixa2.getNome() << endl;
	cout << "6 / 3 = " << funcionarioCaixa2.divide(6, 3) << endl;
	cout << "7 + 2 = " << funcionarioCaixa2.soma(7, 2) << endl;
	cout << "8 x 3 = " << funcionarioCaixa2.multiplica(8, 3) << endl;
	cout << "--------------------------------" << endl;

	Empresa empresa("Empresa 1", funcionarioCaixa1, funcionarioCaixa2);
	empresa.imprime_info();

    return 0;
}
