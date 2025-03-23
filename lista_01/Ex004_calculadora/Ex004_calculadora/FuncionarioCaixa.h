#pragma once
#include <string>
#include "Calculadora.h"

using namespace std;

class FuncionarioCaixa {
	public:
		FuncionarioCaixa();
		~FuncionarioCaixa();
		FuncionarioCaixa(string nome, string endereco, Calculadora calculadora);
		string getNome();
		void setNome(string nome);
		string getEndereco();
		void setEndereco(string endereco);
		Calculadora getCalculadora();
		void setCalculadora(Calculadora calculadora);

		float soma(float valor1, float valor2);
		float subtrai(float valor1, float valor2);
		float multiplica(float valor1, float valor2);
		float divide(float valor1, float valor2);
		int elevaQuadrado(int valor);
		int elevaCubo(int valor);

	private:
		string nome;
		string endereco;
		Calculadora calculadora;
};

