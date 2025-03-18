#pragma once
#include <string>

using namespace std;

enum Cor {
	PRETO,
	BRANCO,
	VERMELHO,
	AZUL,
	VERDE,
	AMARELO,
	LARANJA,
	ROXO,
	ROSA,
	MARROM,
	CINZA
};

class Calculadora {
	private:
		float memoria;
		Cor cor;
	public:

		Calculadora();
		Calculadora(Cor cor);
		~Calculadora();

		void setMemoria(float memoria);
		float getMemoria();

		void setCor(Cor cor);
		Cor getCor();

		float soma(float valor1, float valor2);
		float subtrai(float valor1, float valor2);
		float multiplica(float valor1, float valor2);
		float divide(float valor1, float valor2);

		int elevaQuadrado(int valor);
		int elevaCubo(int valor);

		string corToString(Cor cor);
		void imprimeInfo();
};

